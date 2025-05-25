#pragma once

#include "CalcBaseVisitor.h"

class CalcEvalVisitor : public CalcBaseVisitor {
public:
    antlrcpp::Any visitAddExpr(CalcParser::AddExprContext* ctx) override;
    antlrcpp::Any visitSubExpr(CalcParser::SubExprContext* ctx) override;
    antlrcpp::Any visitTermExpr(CalcParser::TermExprContext* ctx) override;

    antlrcpp::Any visitMulTerm(CalcParser::MulTermContext* ctx) override;
    antlrcpp::Any visitDivTerm(CalcParser::DivTermContext* ctx) override;
    antlrcpp::Any visitIntTerm(CalcParser::IntTermContext* ctx) override;

    antlrcpp::Any visitExpressionLine(CalcParser::ExpressionLineContext* ctx) override;
    antlrcpp::Any visitExProgram(CalcParser::ExProgramContext* ctx) override;
};