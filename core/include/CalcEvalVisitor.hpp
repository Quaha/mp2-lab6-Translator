#pragma once

#include <vector>

#include "CalcBaseVisitor.h"
#include "Data.hpp"

class CalcEvalVisitor : public CalcBaseVisitor {
private:

    std::vector<Data> data;

public:
    antlrcpp::Any visitProgStart(CalcParser::ProgStartContext* ctx) override;
    antlrcpp::Any visitExProgram(CalcParser::ExProgramContext* ctx) override;
    antlrcpp::Any visitExpressionLine(CalcParser::ExpressionLineContext* ctx) override;

    antlrcpp::Any visitIfExpr(CalcParser::IfExprContext* ctx) override;
    antlrcpp::Any visitWhileExpr(CalcParser::WhileExprContext* ctx) override;

    antlrcpp::Any visitBnotExpr(CalcParser::BnotExprContext* ctx) override;
    antlrcpp::Any visitBeqExpr(CalcParser::BeqExprContext* ctx) override;
    antlrcpp::Any visitBneqExpr(CalcParser::BneqExprContext* ctx) override;
    antlrcpp::Any visitBltExpr(CalcParser::BltExprContext* ctx) override;
    antlrcpp::Any visitBrtExpr(CalcParser::BrtExprContext* ctx) override;
    antlrcpp::Any visitBlteExpr(CalcParser::BlteExprContext* ctx) override;
    antlrcpp::Any visitBrteExpr(CalcParser::BrteExprContext* ctx) override;
    antlrcpp::Any visitBorExpr(CalcParser::BorExprContext* ctx) override;
    antlrcpp::Any visitBandExpr(CalcParser::BandExprContext* ctx) override;

    antlrcpp::Any visitEqExpr(CalcParser::EqExprContext* ctx) override;
    antlrcpp::Any visitOExpr(CalcParser::OExprContext* ctx) override;

    antlrcpp::Any visitAddExpr(CalcParser::AddExprContext* ctx) override;
    antlrcpp::Any visitSubExpr(CalcParser::SubExprContext* ctx) override;
    antlrcpp::Any visitTermExpr(CalcParser::TermExprContext* ctx) override;

    antlrcpp::Any visitMulTerm(CalcParser::MulTermContext* ctx) override;
    antlrcpp::Any visitDivTerm(CalcParser::DivTermContext* ctx) override;
    antlrcpp::Any visitMDivTerm(CalcParser::MDivTermContext* ctx) override;
    antlrcpp::Any visitPrimaryTerm(CalcParser::PrimaryTermContext* ctx) override;

    antlrcpp::Any visitPlusPrimary(CalcParser::PlusPrimaryContext* ctx) override;
    antlrcpp::Any visitMinusPrimary(CalcParser::MinusPrimaryContext* ctx) override;
    antlrcpp::Any visitFactPrimary(CalcParser::FactPrimaryContext* ctx) override;

    antlrcpp::Any visitBracketFactor(CalcParser::BracketFactorContext* ctx) override;
    antlrcpp::Any visitFunctionFactor(CalcParser::FunctionFactorContext* ctx) override;
    antlrcpp::Any visitNumberFactor(CalcParser::NumberFactorContext* ctx) override;
    antlrcpp::Any visitVariableFactor(CalcParser::VariableFactorContext* ctx) override;

    antlrcpp::Any visitFunctionCall(CalcParser::FunctionCallContext* ctx) override;

    antlrcpp::Any visitVarName(CalcParser::VarNameContext* ctx) override;

    antlrcpp::Any visitIntNumber(CalcParser::IntNumberContext* ctx) override;
    antlrcpp::Any visitRealNumber(CalcParser::RealNumberContext* ctx) override;
};