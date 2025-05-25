#include <vector>

#include "CalcEvalVisitor.hpp"

antlrcpp::Any CalcEvalVisitor::visitAddExpr(CalcParser::AddExprContext* ctx) {
    int lhs = std::any_cast<int>(visit(ctx->expr()));
    int rhs = std::any_cast<int>(visit(ctx->term()));
    return lhs + rhs;
}

antlrcpp::Any CalcEvalVisitor::visitSubExpr(CalcParser::SubExprContext* ctx) {
    int lhs = std::any_cast<int>(visit(ctx->expr()));
    int rhs = std::any_cast<int>(visit(ctx->term()));
    return lhs - rhs;
}

antlrcpp::Any CalcEvalVisitor::visitTermExpr(CalcParser::TermExprContext* ctx) {
    return std::any_cast<int>(visit(ctx->term()));
}

antlrcpp::Any CalcEvalVisitor::visitMulTerm(CalcParser::MulTermContext* ctx) {
    int lhs = std::any_cast<int>(visit(ctx->term()));
    int rhs = std::stoi(ctx->INT()->getText());
    return lhs * rhs;
}

antlrcpp::Any CalcEvalVisitor::visitDivTerm(CalcParser::DivTermContext* ctx) {
    int lhs = std::any_cast<int>(visit(ctx->term()));
    int rhs = std::stoi(ctx->INT()->getText());
    return lhs / rhs;
}

antlrcpp::Any CalcEvalVisitor::visitIntTerm(CalcParser::IntTermContext* ctx) {
    return std::stoi(ctx->INT()->getText());
}

antlrcpp::Any CalcEvalVisitor::visitExpressionLine(CalcParser::ExpressionLineContext* ctx) {
    return visit(ctx->expr());
}

antlrcpp::Any CalcEvalVisitor::visitExProgram(CalcParser::ExProgramContext* ctx) {
    std::vector<int> data;
    for (auto lineCtx : ctx->line()) {
        int value = std::any_cast<int>(visit(lineCtx)); 
        data.push_back(value);
    }
    return data;
}