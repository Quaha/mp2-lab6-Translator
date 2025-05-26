#include <vector>

#include "CalcEvalVisitor.hpp"

#include "Data.hpp"
#include "DataMath.hpp"
#include "ProgramMemory.hpp"

antlrcpp::Any CalcEvalVisitor::visitExProgram(CalcParser::ExProgramContext* ctx) {
    std::vector<Data> data;
    for (auto lineCtx : ctx->line()) {
        data.push_back(std::any_cast<Data>(visit(lineCtx)));
    }
    return data;
}

antlrcpp::Any CalcEvalVisitor::visitExpressionLine(CalcParser::ExpressionLineContext* ctx) {
    return visit(ctx->expr());
}

antlrcpp::Any CalcEvalVisitor::visitAddExpr(CalcParser::AddExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->expr()));
    Data rhs = std::any_cast<Data>(visit(ctx->term()));

    return DataMath::add(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitSubExpr(CalcParser::SubExprContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->expr()));
    Data rhs = std::any_cast<Data>(visit(ctx->term()));

    return DataMath::sub(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitTermExpr(CalcParser::TermExprContext* ctx) {
    return std::any_cast<Data>(visit(ctx->term()));
}

antlrcpp::Any CalcEvalVisitor::visitMulTerm(CalcParser::MulTermContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->term()));
    Data rhs = std::any_cast<Data>(visit(ctx->factor()));

    return DataMath::mul(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitDivTerm(CalcParser::DivTermContext* ctx) {
    Data lhs = std::any_cast<Data>(visit(ctx->term()));
    Data rhs = std::any_cast<Data>(visit(ctx->factor()));

    return DataMath::div(lhs, rhs);
}

antlrcpp::Any CalcEvalVisitor::visitPrimaryTerm(CalcParser::PrimaryTermContext* ctx) {
    return std::any_cast<Data>(visit(ctx->primary()));
}

antlrcpp::Any CalcEvalVisitor::visitPlusPrimary(CalcParser::PlusPrimaryContext* ctx) {
    return std::any_cast<Data>(visit(ctx->factor()));
}

antlrcpp::Any CalcEvalVisitor::visitMinusPrimary(CalcParser::MinusPrimaryContext* ctx) {
    return DataMath::uminus(std::any_cast<Data>(visit(ctx->factor())));
}

antlrcpp::Any CalcEvalVisitor::visitFactPrimary(CalcParser::FactPrimaryContext* ctx) {
    return std::any_cast<Data>(visit(ctx->factor()));
}

antlrcpp::Any CalcEvalVisitor::visitFunctionFactor(CalcParser::FunctionFactorContext* ctx) {
    return std::any_cast<Data>(visit(ctx->function()));
}

antlrcpp::Any CalcEvalVisitor::visitBracketFactor(CalcParser::BracketFactorContext* ctx) {
    return std::any_cast<Data>(visit(ctx->expr()));
}

antlrcpp::Any CalcEvalVisitor::visitNumberFactor(CalcParser::NumberFactorContext* ctx) {
    return std::any_cast<Data>(visit(ctx->number()));
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

antlrcpp::Any CalcEvalVisitor::visitIntNumber(CalcParser::IntNumberContext* ctx) {
    return stringToIntegerData(ctx->INT()->getText());
}

antlrcpp::Any CalcEvalVisitor::visitRealNumber(CalcParser::RealNumberContext* ctx) {
    return stringToRealData(ctx->INT(0)->getText() + "." + ctx->INT(1)->getText());
}