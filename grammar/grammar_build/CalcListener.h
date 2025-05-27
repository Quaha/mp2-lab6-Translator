
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalcParser.
 */
class  CalcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgStart(CalcParser::ProgStartContext *ctx) = 0;
  virtual void exitProgStart(CalcParser::ProgStartContext *ctx) = 0;

  virtual void enterExProgram(CalcParser::ExProgramContext *ctx) = 0;
  virtual void exitExProgram(CalcParser::ExProgramContext *ctx) = 0;

  virtual void enterExpressionLine(CalcParser::ExpressionLineContext *ctx) = 0;
  virtual void exitExpressionLine(CalcParser::ExpressionLineContext *ctx) = 0;

  virtual void enterIfExpr(CalcParser::IfExprContext *ctx) = 0;
  virtual void exitIfExpr(CalcParser::IfExprContext *ctx) = 0;

  virtual void enterWhileExpr(CalcParser::WhileExprContext *ctx) = 0;
  virtual void exitWhileExpr(CalcParser::WhileExprContext *ctx) = 0;

  virtual void enterEqExpr(CalcParser::EqExprContext *ctx) = 0;
  virtual void exitEqExpr(CalcParser::EqExprContext *ctx) = 0;

  virtual void enterOExpr(CalcParser::OExprContext *ctx) = 0;
  virtual void exitOExpr(CalcParser::OExprContext *ctx) = 0;

  virtual void enterTermExpr(CalcParser::TermExprContext *ctx) = 0;
  virtual void exitTermExpr(CalcParser::TermExprContext *ctx) = 0;

  virtual void enterBrteExpr(CalcParser::BrteExprContext *ctx) = 0;
  virtual void exitBrteExpr(CalcParser::BrteExprContext *ctx) = 0;

  virtual void enterBlteExpr(CalcParser::BlteExprContext *ctx) = 0;
  virtual void exitBlteExpr(CalcParser::BlteExprContext *ctx) = 0;

  virtual void enterBneqExpr(CalcParser::BneqExprContext *ctx) = 0;
  virtual void exitBneqExpr(CalcParser::BneqExprContext *ctx) = 0;

  virtual void enterBltExpr(CalcParser::BltExprContext *ctx) = 0;
  virtual void exitBltExpr(CalcParser::BltExprContext *ctx) = 0;

  virtual void enterBorExpr(CalcParser::BorExprContext *ctx) = 0;
  virtual void exitBorExpr(CalcParser::BorExprContext *ctx) = 0;

  virtual void enterSubExpr(CalcParser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(CalcParser::SubExprContext *ctx) = 0;

  virtual void enterAddExpr(CalcParser::AddExprContext *ctx) = 0;
  virtual void exitAddExpr(CalcParser::AddExprContext *ctx) = 0;

  virtual void enterBandExpr(CalcParser::BandExprContext *ctx) = 0;
  virtual void exitBandExpr(CalcParser::BandExprContext *ctx) = 0;

  virtual void enterBeqExpr(CalcParser::BeqExprContext *ctx) = 0;
  virtual void exitBeqExpr(CalcParser::BeqExprContext *ctx) = 0;

  virtual void enterBnotExpr(CalcParser::BnotExprContext *ctx) = 0;
  virtual void exitBnotExpr(CalcParser::BnotExprContext *ctx) = 0;

  virtual void enterBrtExpr(CalcParser::BrtExprContext *ctx) = 0;
  virtual void exitBrtExpr(CalcParser::BrtExprContext *ctx) = 0;

  virtual void enterVarName(CalcParser::VarNameContext *ctx) = 0;
  virtual void exitVarName(CalcParser::VarNameContext *ctx) = 0;

  virtual void enterMulTerm(CalcParser::MulTermContext *ctx) = 0;
  virtual void exitMulTerm(CalcParser::MulTermContext *ctx) = 0;

  virtual void enterMDivTerm(CalcParser::MDivTermContext *ctx) = 0;
  virtual void exitMDivTerm(CalcParser::MDivTermContext *ctx) = 0;

  virtual void enterDivTerm(CalcParser::DivTermContext *ctx) = 0;
  virtual void exitDivTerm(CalcParser::DivTermContext *ctx) = 0;

  virtual void enterPrimaryTerm(CalcParser::PrimaryTermContext *ctx) = 0;
  virtual void exitPrimaryTerm(CalcParser::PrimaryTermContext *ctx) = 0;

  virtual void enterPlusPrimary(CalcParser::PlusPrimaryContext *ctx) = 0;
  virtual void exitPlusPrimary(CalcParser::PlusPrimaryContext *ctx) = 0;

  virtual void enterMinusPrimary(CalcParser::MinusPrimaryContext *ctx) = 0;
  virtual void exitMinusPrimary(CalcParser::MinusPrimaryContext *ctx) = 0;

  virtual void enterFactPrimary(CalcParser::FactPrimaryContext *ctx) = 0;
  virtual void exitFactPrimary(CalcParser::FactPrimaryContext *ctx) = 0;

  virtual void enterBracketFactor(CalcParser::BracketFactorContext *ctx) = 0;
  virtual void exitBracketFactor(CalcParser::BracketFactorContext *ctx) = 0;

  virtual void enterFunctionFactor(CalcParser::FunctionFactorContext *ctx) = 0;
  virtual void exitFunctionFactor(CalcParser::FunctionFactorContext *ctx) = 0;

  virtual void enterNumberFactor(CalcParser::NumberFactorContext *ctx) = 0;
  virtual void exitNumberFactor(CalcParser::NumberFactorContext *ctx) = 0;

  virtual void enterVariableFactor(CalcParser::VariableFactorContext *ctx) = 0;
  virtual void exitVariableFactor(CalcParser::VariableFactorContext *ctx) = 0;

  virtual void enterFunctionCall(CalcParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(CalcParser::FunctionCallContext *ctx) = 0;

  virtual void enterIntNumber(CalcParser::IntNumberContext *ctx) = 0;
  virtual void exitIntNumber(CalcParser::IntNumberContext *ctx) = 0;

  virtual void enterRealNumber(CalcParser::RealNumberContext *ctx) = 0;
  virtual void exitRealNumber(CalcParser::RealNumberContext *ctx) = 0;


};

