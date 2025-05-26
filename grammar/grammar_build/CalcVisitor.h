
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
    virtual std::any visitExProgram(CalcParser::ExProgramContext *context) = 0;

    virtual std::any visitExpressionLine(CalcParser::ExpressionLineContext *context) = 0;

    virtual std::any visitTermExpr(CalcParser::TermExprContext *context) = 0;

    virtual std::any visitSubExpr(CalcParser::SubExprContext *context) = 0;

    virtual std::any visitAddExpr(CalcParser::AddExprContext *context) = 0;

    virtual std::any visitMulTerm(CalcParser::MulTermContext *context) = 0;

    virtual std::any visitDivTerm(CalcParser::DivTermContext *context) = 0;

    virtual std::any visitIntTerm(CalcParser::IntTermContext *context) = 0;


};

