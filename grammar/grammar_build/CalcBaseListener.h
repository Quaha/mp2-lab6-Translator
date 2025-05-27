
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcListener.h"


/**
 * This class provides an empty implementation of CalcListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  CalcBaseListener : public CalcListener {
public:

  virtual void enterProgStart(CalcParser::ProgStartContext * /*ctx*/) override { }
  virtual void exitProgStart(CalcParser::ProgStartContext * /*ctx*/) override { }

  virtual void enterExProgram(CalcParser::ExProgramContext * /*ctx*/) override { }
  virtual void exitExProgram(CalcParser::ExProgramContext * /*ctx*/) override { }

  virtual void enterExpressionLine(CalcParser::ExpressionLineContext * /*ctx*/) override { }
  virtual void exitExpressionLine(CalcParser::ExpressionLineContext * /*ctx*/) override { }

  virtual void enterIfExpr(CalcParser::IfExprContext * /*ctx*/) override { }
  virtual void exitIfExpr(CalcParser::IfExprContext * /*ctx*/) override { }

  virtual void enterWhileExpr(CalcParser::WhileExprContext * /*ctx*/) override { }
  virtual void exitWhileExpr(CalcParser::WhileExprContext * /*ctx*/) override { }

  virtual void enterEqExpr(CalcParser::EqExprContext * /*ctx*/) override { }
  virtual void exitEqExpr(CalcParser::EqExprContext * /*ctx*/) override { }

  virtual void enterOExpr(CalcParser::OExprContext * /*ctx*/) override { }
  virtual void exitOExpr(CalcParser::OExprContext * /*ctx*/) override { }

  virtual void enterTermExpr(CalcParser::TermExprContext * /*ctx*/) override { }
  virtual void exitTermExpr(CalcParser::TermExprContext * /*ctx*/) override { }

  virtual void enterBrteExpr(CalcParser::BrteExprContext * /*ctx*/) override { }
  virtual void exitBrteExpr(CalcParser::BrteExprContext * /*ctx*/) override { }

  virtual void enterBlteExpr(CalcParser::BlteExprContext * /*ctx*/) override { }
  virtual void exitBlteExpr(CalcParser::BlteExprContext * /*ctx*/) override { }

  virtual void enterBneqExpr(CalcParser::BneqExprContext * /*ctx*/) override { }
  virtual void exitBneqExpr(CalcParser::BneqExprContext * /*ctx*/) override { }

  virtual void enterBltExpr(CalcParser::BltExprContext * /*ctx*/) override { }
  virtual void exitBltExpr(CalcParser::BltExprContext * /*ctx*/) override { }

  virtual void enterBorExpr(CalcParser::BorExprContext * /*ctx*/) override { }
  virtual void exitBorExpr(CalcParser::BorExprContext * /*ctx*/) override { }

  virtual void enterSubExpr(CalcParser::SubExprContext * /*ctx*/) override { }
  virtual void exitSubExpr(CalcParser::SubExprContext * /*ctx*/) override { }

  virtual void enterAddExpr(CalcParser::AddExprContext * /*ctx*/) override { }
  virtual void exitAddExpr(CalcParser::AddExprContext * /*ctx*/) override { }

  virtual void enterBandExpr(CalcParser::BandExprContext * /*ctx*/) override { }
  virtual void exitBandExpr(CalcParser::BandExprContext * /*ctx*/) override { }

  virtual void enterBeqExpr(CalcParser::BeqExprContext * /*ctx*/) override { }
  virtual void exitBeqExpr(CalcParser::BeqExprContext * /*ctx*/) override { }

  virtual void enterBnotExpr(CalcParser::BnotExprContext * /*ctx*/) override { }
  virtual void exitBnotExpr(CalcParser::BnotExprContext * /*ctx*/) override { }

  virtual void enterBrtExpr(CalcParser::BrtExprContext * /*ctx*/) override { }
  virtual void exitBrtExpr(CalcParser::BrtExprContext * /*ctx*/) override { }

  virtual void enterVarName(CalcParser::VarNameContext * /*ctx*/) override { }
  virtual void exitVarName(CalcParser::VarNameContext * /*ctx*/) override { }

  virtual void enterMulTerm(CalcParser::MulTermContext * /*ctx*/) override { }
  virtual void exitMulTerm(CalcParser::MulTermContext * /*ctx*/) override { }

  virtual void enterMDivTerm(CalcParser::MDivTermContext * /*ctx*/) override { }
  virtual void exitMDivTerm(CalcParser::MDivTermContext * /*ctx*/) override { }

  virtual void enterDivTerm(CalcParser::DivTermContext * /*ctx*/) override { }
  virtual void exitDivTerm(CalcParser::DivTermContext * /*ctx*/) override { }

  virtual void enterPrimaryTerm(CalcParser::PrimaryTermContext * /*ctx*/) override { }
  virtual void exitPrimaryTerm(CalcParser::PrimaryTermContext * /*ctx*/) override { }

  virtual void enterPlusPrimary(CalcParser::PlusPrimaryContext * /*ctx*/) override { }
  virtual void exitPlusPrimary(CalcParser::PlusPrimaryContext * /*ctx*/) override { }

  virtual void enterMinusPrimary(CalcParser::MinusPrimaryContext * /*ctx*/) override { }
  virtual void exitMinusPrimary(CalcParser::MinusPrimaryContext * /*ctx*/) override { }

  virtual void enterFactPrimary(CalcParser::FactPrimaryContext * /*ctx*/) override { }
  virtual void exitFactPrimary(CalcParser::FactPrimaryContext * /*ctx*/) override { }

  virtual void enterBracketFactor(CalcParser::BracketFactorContext * /*ctx*/) override { }
  virtual void exitBracketFactor(CalcParser::BracketFactorContext * /*ctx*/) override { }

  virtual void enterFunctionFactor(CalcParser::FunctionFactorContext * /*ctx*/) override { }
  virtual void exitFunctionFactor(CalcParser::FunctionFactorContext * /*ctx*/) override { }

  virtual void enterNumberFactor(CalcParser::NumberFactorContext * /*ctx*/) override { }
  virtual void exitNumberFactor(CalcParser::NumberFactorContext * /*ctx*/) override { }

  virtual void enterVariableFactor(CalcParser::VariableFactorContext * /*ctx*/) override { }
  virtual void exitVariableFactor(CalcParser::VariableFactorContext * /*ctx*/) override { }

  virtual void enterFunctionCall(CalcParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(CalcParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterIntNumber(CalcParser::IntNumberContext * /*ctx*/) override { }
  virtual void exitIntNumber(CalcParser::IntNumberContext * /*ctx*/) override { }

  virtual void enterRealNumber(CalcParser::RealNumberContext * /*ctx*/) override { }
  virtual void exitRealNumber(CalcParser::RealNumberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

