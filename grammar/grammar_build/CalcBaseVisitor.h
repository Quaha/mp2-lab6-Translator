
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CalcVisitor.h"


/**
 * This class provides an empty implementation of CalcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CalcBaseVisitor : public CalcVisitor {
public:

  virtual std::any visitExProgram(CalcParser::ExProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionLine(CalcParser::ExpressionLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermExpr(CalcParser::TermExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqExpr(CalcParser::EqExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubExpr(CalcParser::SubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExpr(CalcParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulTerm(CalcParser::MulTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDivTerm(CalcParser::DivTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryTerm(CalcParser::PrimaryTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlusPrimary(CalcParser::PlusPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMinusPrimary(CalcParser::MinusPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactPrimary(CalcParser::FactPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBracketFactor(CalcParser::BracketFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionFactor(CalcParser::FunctionFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumberFactor(CalcParser::NumberFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableFactor(CalcParser::VariableFactorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(CalcParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarName(CalcParser::VarNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntNumber(CalcParser::IntNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRealNumber(CalcParser::RealNumberContext *ctx) override {
    return visitChildren(ctx);
  }


};

