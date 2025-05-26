
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by CalcParser.
 */
class  CalcListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExProgram(CalcParser::ExProgramContext *ctx) = 0;
  virtual void exitExProgram(CalcParser::ExProgramContext *ctx) = 0;

  virtual void enterExpressionLine(CalcParser::ExpressionLineContext *ctx) = 0;
  virtual void exitExpressionLine(CalcParser::ExpressionLineContext *ctx) = 0;

  virtual void enterTermExpr(CalcParser::TermExprContext *ctx) = 0;
  virtual void exitTermExpr(CalcParser::TermExprContext *ctx) = 0;

  virtual void enterSubExpr(CalcParser::SubExprContext *ctx) = 0;
  virtual void exitSubExpr(CalcParser::SubExprContext *ctx) = 0;

  virtual void enterAddExpr(CalcParser::AddExprContext *ctx) = 0;
  virtual void exitAddExpr(CalcParser::AddExprContext *ctx) = 0;

  virtual void enterMulTerm(CalcParser::MulTermContext *ctx) = 0;
  virtual void exitMulTerm(CalcParser::MulTermContext *ctx) = 0;

  virtual void enterDivTerm(CalcParser::DivTermContext *ctx) = 0;
  virtual void exitDivTerm(CalcParser::DivTermContext *ctx) = 0;

  virtual void enterIntTerm(CalcParser::IntTermContext *ctx) = 0;
  virtual void exitIntTerm(CalcParser::IntTermContext *ctx) = 0;


};

