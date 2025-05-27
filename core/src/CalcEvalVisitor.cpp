#include <vector>

#include "CalcEvalVisitor.hpp"

#include "Data.hpp"
#include "DataFunctions.hpp"
#include "ProgramMemory.hpp"

antlrcpp::Any CalcEvalVisitor::visitProgStart(CalcParser::ProgStartContext* ctx) {
    visit(ctx->program());
    std::vector<Data> result = data;
    data.clear();
    return result;
}

antlrcpp::Any CalcEvalVisitor::visitExProgram(CalcParser::ExProgramContext* ctx) {
    for (auto lineCtx : ctx->line()) {
        data.push_back(std::any_cast<Data>(visit(lineCtx)));

        if (data.back().getDataType() == DataType::VARIABLE) {
            data.back().makeNumber();
        }
    }
    return Data();
}

antlrcpp::Any CalcEvalVisitor::visitExpressionLine(CalcParser::ExpressionLineContext* ctx) {
    return std::any_cast<Data>(visit(ctx->expr()));
}

antlrcpp::Any CalcEvalVisitor::visitIfExpr(CalcParser::IfExprContext* ctx) {

    Data condition = std::any_cast<Data>(visit(ctx->expr()));
    condition.makeBool();

    if (condition.as<integer_t>() == static_cast<integer_t>(1)) {
        visit(ctx->program(0));
    }
    else {
        if (ctx->ELSE() != nullptr) {
            visit(ctx->program(1));
        }
    }

    return condition;
}

antlrcpp::Any CalcEvalVisitor::visitWhileExpr(CalcParser::WhileExprContext* ctx) {

    Data condition = std::any_cast<Data>(visit(ctx->expr()));
    condition.makeBool();

    integer_t cnt = 0;

    while (condition.as<integer_t>() == static_cast<integer_t>(1)) {
        cnt += 1;
        visit(ctx->program());
        condition = std::any_cast<Data>(visit(ctx->expr()));
    }
    return Data(DataType::INTEGER, cnt);
}

antlrcpp::Any CalcEvalVisitor::visitEqExpr(CalcParser::EqExprContext* ctx) {
    Data var = std::any_cast<Data>(visit(ctx->variable()));

    Data data = std::any_cast<Data>(visit(ctx->expr()));
    data.makeNumber();

    ProgramMemory.setVariableValue(var.as<std::string>(), data);

    return data;
}

antlrcpp::Any CalcEvalVisitor::visitOExpr(CalcParser::OExprContext* ctx) {
    return visit(ctx->oexpr());
}

antlrcpp::Any CalcEvalVisitor::visitBnotExpr(CalcParser::BnotExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr()));
    return DataFunctions::bnot(lhs);
}

antlrcpp::Any CalcEvalVisitor::visitBeqExpr(CalcParser::BeqExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::beq(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitBneqExpr(CalcParser::BneqExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::bneq(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitBltExpr(CalcParser::BltExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::blt(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitBrtExpr(CalcParser::BrtExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::brt(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitBlteExpr(CalcParser::BlteExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::blte(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitBrteExpr(CalcParser::BrteExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::brte(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitBorExpr(CalcParser::BorExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::bor(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitBandExpr(CalcParser::BandExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr(0)));
    Data rhs = std::any_cast<Data>(visit(ctx->oexpr(1)));
    return DataFunctions::band(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitAddExpr(CalcParser::AddExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr()));
    Data rhs = std::any_cast<Data>(visit(ctx->term()));

    return DataFunctions::add(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitSubExpr(CalcParser::SubExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->oexpr()));
    Data rhs = std::any_cast<Data>(visit(ctx->term()));

    return DataFunctions::sub(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitTermExpr(CalcParser::TermExprContext* ctx) {
    return std::any_cast<Data>(visit(ctx->term()));
}

antlrcpp::Any CalcEvalVisitor::visitMulTerm(CalcParser::MulTermContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->term()));
    Data rhs = std::any_cast<Data>(visit(ctx->factor()));

    return DataFunctions::mul(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitDivTerm(CalcParser::DivTermContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->term()));
    Data rhs = std::any_cast<Data>(visit(ctx->factor()));

    return DataFunctions::div(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitMDivTerm(CalcParser::MDivTermContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->term()));
    Data rhs = std::any_cast<Data>(visit(ctx->factor()));

    return DataFunctions::mdiv(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitPrimaryTerm(CalcParser::PrimaryTermContext* ctx) {
    return visit(ctx->primary());
}

antlrcpp::Any CalcEvalVisitor::visitPlusPrimary(CalcParser::PlusPrimaryContext* ctx) {
    return visit(ctx->factor());
}

antlrcpp::Any CalcEvalVisitor::visitMinusPrimary(CalcParser::MinusPrimaryContext* ctx) {
    return DataFunctions::uminus(std::any_cast<Data>(visit(ctx->factor())));
}

antlrcpp::Any CalcEvalVisitor::visitFactPrimary(CalcParser::FactPrimaryContext* ctx) {
    return visit(ctx->factor());
}

antlrcpp::Any CalcEvalVisitor::visitFunctionFactor(CalcParser::FunctionFactorContext* ctx) {
    return visit(ctx->function());
}

antlrcpp::Any CalcEvalVisitor::visitBracketFactor(CalcParser::BracketFactorContext* ctx) {
    return visit(ctx->expr());
}

antlrcpp::Any CalcEvalVisitor::visitNumberFactor(CalcParser::NumberFactorContext* ctx) {
    return visit(ctx->number());
}

antlrcpp::Any CalcEvalVisitor::visitVariableFactor(CalcParser::VariableFactorContext* ctx) {
    return visit(ctx->variable());
}

antlrcpp::Any CalcEvalVisitor::visitFunctionCall(CalcParser::FunctionCallContext* ctx) {
    std::string fname = ctx->NAME()->getText();

    std::vector<Data> args;
    for (auto expr : ctx->expr()) {
        Data arg = std::any_cast<Data>(visit(expr));
        args.push_back(arg);
    }
    return ProgramMemory.callFunction(fname, args);
}

antlrcpp::Any CalcEvalVisitor::visitVarName(CalcParser::VarNameContext* ctx) {
    std::string vname = ctx->NAME()->getText();

    Data data(DataType::VARIABLE, vname);

    return data;
}

antlrcpp::Any CalcEvalVisitor::visitIntNumber(CalcParser::IntNumberContext* ctx) {
    return stringToIntegerData(ctx->INT()->getText());
}

antlrcpp::Any CalcEvalVisitor::visitRealNumber(CalcParser::RealNumberContext* ctx) {
    return stringToRealData(ctx->INT(0)->getText() + "." + ctx->INT(1)->getText());
}