
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CalcParser.
 */
class  CalcVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CalcParser.
   */
    virtual std::any visitProgStart(CalcParser::ProgStartContext *context) = 0;

    virtual std::any visitExProgram(CalcParser::ExProgramContext *context) = 0;

    virtual std::any visitExpressionLine(CalcParser::ExpressionLineContext *context) = 0;

    virtual std::any visitIfExpr(CalcParser::IfExprContext *context) = 0;

    virtual std::any visitWhileExpr(CalcParser::WhileExprContext *context) = 0;

    virtual std::any visitEqExpr(CalcParser::EqExprContext *context) = 0;

    virtual std::any visitOExpr(CalcParser::OExprContext *context) = 0;

    virtual std::any visitTermExpr(CalcParser::TermExprContext *context) = 0;

    virtual std::any visitBrteExpr(CalcParser::BrteExprContext *context) = 0;

    virtual std::any visitBlteExpr(CalcParser::BlteExprContext *context) = 0;

    virtual std::any visitBneqExpr(CalcParser::BneqExprContext *context) = 0;

    virtual std::any visitBltExpr(CalcParser::BltExprContext *context) = 0;

    virtual std::any visitBorExpr(CalcParser::BorExprContext *context) = 0;

    virtual std::any visitSubExpr(CalcParser::SubExprContext *context) = 0;

    virtual std::any visitAddExpr(CalcParser::AddExprContext *context) = 0;

    virtual std::any visitBandExpr(CalcParser::BandExprContext *context) = 0;

    virtual std::any visitBeqExpr(CalcParser::BeqExprContext *context) = 0;

    virtual std::any visitBnotExpr(CalcParser::BnotExprContext *context) = 0;

    virtual std::any visitBrtExpr(CalcParser::BrtExprContext *context) = 0;

    virtual std::any visitVarName(CalcParser::VarNameContext *context) = 0;

    virtual std::any visitMulTerm(CalcParser::MulTermContext *context) = 0;

    virtual std::any visitMDivTerm(CalcParser::MDivTermContext *context) = 0;

    virtual std::any visitDivTerm(CalcParser::DivTermContext *context) = 0;

    virtual std::any visitPrimaryTerm(CalcParser::PrimaryTermContext *context) = 0;

    virtual std::any visitPlusPrimary(CalcParser::PlusPrimaryContext *context) = 0;

    virtual std::any visitMinusPrimary(CalcParser::MinusPrimaryContext *context) = 0;

    virtual std::any visitFactPrimary(CalcParser::FactPrimaryContext *context) = 0;

    virtual std::any visitBracketFactor(CalcParser::BracketFactorContext *context) = 0;

    virtual std::any visitFunctionFactor(CalcParser::FunctionFactorContext *context) = 0;

    virtual std::any visitNumberFactor(CalcParser::NumberFactorContext *context) = 0;

    virtual std::any visitVariableFactor(CalcParser::VariableFactorContext *context) = 0;

    virtual std::any visitFunctionCall(CalcParser::FunctionCallContext *context) = 0;

    virtual std::any visitIntNumber(CalcParser::IntNumberContext *context) = 0;

    virtual std::any visitRealNumber(CalcParser::RealNumberContext *context) = 0;


};

