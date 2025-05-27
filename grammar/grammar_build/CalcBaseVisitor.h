
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

  virtual std::any visitProgStart(CalcParser::ProgStartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExProgram(CalcParser::ExProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionLine(CalcParser::ExpressionLineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfExpr(CalcParser::IfExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileExpr(CalcParser::WhileExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqExpr(CalcParser::EqExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOExpr(CalcParser::OExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTermExpr(CalcParser::TermExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBrteExpr(CalcParser::BrteExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlteExpr(CalcParser::BlteExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBneqExpr(CalcParser::BneqExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBltExpr(CalcParser::BltExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBorExpr(CalcParser::BorExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSubExpr(CalcParser::SubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExpr(CalcParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBandExpr(CalcParser::BandExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBeqExpr(CalcParser::BeqExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBnotExpr(CalcParser::BnotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBrtExpr(CalcParser::BrtExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarName(CalcParser::VarNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulTerm(CalcParser::MulTermContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMDivTerm(CalcParser::MDivTermContext *ctx) override {
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

  virtual std::any visitIntNumber(CalcParser::IntNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRealNumber(CalcParser::RealNumberContext *ctx) override {
    return visitChildren(ctx);
  }


};

