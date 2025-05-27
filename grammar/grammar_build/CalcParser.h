
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CalcParser : public antlr4::Parser {
public:
  enum {
    WS = 1, INT = 2, NAME = 3, PLUS = 4, MINUS = 5, MUL = 6, DIV = 7, EQ = 8, 
    BAND = 9, BOR = 10, BNOT = 11, BEQ = 12, BNEQ = 13, BLT = 14, BRT = 15, 
    BLTE = 16, BRTE = 17, DOT = 18, COMMA = 19, LBRACKET = 20, RBRACKET = 21, 
    LFBRACKET = 22, RFBRACKET = 23, SEP = 24
  };

  enum {
    RuleProgram = 0, RuleLine = 1, RuleExpr = 2, RuleTerm = 3, RulePrimary = 4, 
    RuleFactor = 5, RuleFunction = 6, RuleVariable = 7, RuleNumber = 8
  };

  explicit CalcParser(antlr4::TokenStream *input);

  CalcParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CalcParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class LineContext;
  class ExprContext;
  class TermContext;
  class PrimaryContext;
  class FactorContext;
  class FunctionContext;
  class VariableContext;
  class NumberContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgramContext() = default;
    void copyFrom(ProgramContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExProgramContext : public ProgramContext {
  public:
    ExProgramContext(ProgramContext *ctx);

    antlr4::tree::TerminalNode *EOF();
    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP();
    antlr4::tree::TerminalNode* SEP(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgramContext* program();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    LineContext() = default;
    void copyFrom(LineContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExpressionLineContext : public LineContext {
  public:
    ExpressionLineContext(LineContext *ctx);

    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  LineContext* line();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TermExprContext : public ExprContext {
  public:
    TermExprContext(ExprContext *ctx);

    TermContext *term();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BrteExprContext : public ExprContext {
  public:
    BrteExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BRTE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlteExprContext : public ExprContext {
  public:
    BlteExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BLTE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BneqExprContext : public ExprContext {
  public:
    BneqExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BNEQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubExprContext : public ExprContext {
  public:
    SubExprContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *MINUS();
    TermContext *term();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddExprContext : public ExprContext {
  public:
    AddExprContext(ExprContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *PLUS();
    TermContext *term();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BandExprContext : public ExprContext {
  public:
    BandExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BeqExprContext : public ExprContext {
  public:
    BeqExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BEQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BnotExprContext : public ExprContext {
  public:
    BnotExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *BNOT();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BltExprContext : public ExprContext {
  public:
    BltExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BLT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  EqExprContext : public ExprContext {
  public:
    EqExprContext(ExprContext *ctx);

    VariableContext *variable();
    antlr4::tree::TerminalNode *EQ();
    ExprContext *expr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BorExprContext : public ExprContext {
  public:
    BorExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BrtExprContext : public ExprContext {
  public:
    BrtExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *BRT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  MulTermContext : public TermContext {
  public:
    MulTermContext(TermContext *ctx);

    TermContext *term();
    antlr4::tree::TerminalNode *MUL();
    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DivTermContext : public TermContext {
  public:
    DivTermContext(TermContext *ctx);

    TermContext *term();
    antlr4::tree::TerminalNode *DIV();
    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PrimaryTermContext : public TermContext {
  public:
    PrimaryTermContext(TermContext *ctx);

    PrimaryContext *primary();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TermContext* term();
  TermContext* term(int precedence);
  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PrimaryContext() = default;
    void copyFrom(PrimaryContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FactPrimaryContext : public PrimaryContext {
  public:
    FactPrimaryContext(PrimaryContext *ctx);

    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MinusPrimaryContext : public PrimaryContext {
  public:
    MinusPrimaryContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  PlusPrimaryContext : public PrimaryContext {
  public:
    PlusPrimaryContext(PrimaryContext *ctx);

    antlr4::tree::TerminalNode *PLUS();
    FactorContext *factor();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PrimaryContext* primary();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariableFactorContext : public FactorContext {
  public:
    VariableFactorContext(FactorContext *ctx);

    VariableContext *variable();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BracketFactorContext : public FactorContext {
  public:
    BracketFactorContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *LBRACKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FunctionFactorContext : public FactorContext {
  public:
    FunctionFactorContext(FactorContext *ctx);

    FunctionContext *function();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NumberFactorContext : public FactorContext {
  public:
    NumberFactorContext(FactorContext *ctx);

    NumberContext *number();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionContext() = default;
    void copyFrom(FunctionContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  FunctionCallContext : public FunctionContext {
  public:
    FunctionCallContext(FunctionContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FunctionContext* function();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    VariableContext() = default;
    void copyFrom(VariableContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VarNameContext : public VariableContext {
  public:
    VarNameContext(VariableContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  VariableContext* variable();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() = default;
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  RealNumberContext : public NumberContext {
  public:
    RealNumberContext(NumberContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> INT();
    antlr4::tree::TerminalNode* INT(size_t i);
    antlr4::tree::TerminalNode *DOT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IntNumberContext : public NumberContext {
  public:
    IntNumberContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

