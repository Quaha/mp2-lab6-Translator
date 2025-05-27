
// Generated from Calc.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CalcParser : public antlr4::Parser {
public:
  enum {
    WS = 1, INT = 2, IF = 3, ELSE = 4, WHILE = 5, EQ = 6, NAME = 7, PLUS = 8, 
    MINUS = 9, MUL = 10, DIV = 11, MDIV = 12, BAND = 13, BOR = 14, BNOT = 15, 
    BEQ = 16, BNEQ = 17, BLT = 18, BRT = 19, BLTE = 20, BRTE = 21, DOT = 22, 
    COMMA = 23, LBRACKET = 24, RBRACKET = 25, LFBRACKET = 26, RFBRACKET = 27, 
    SEP = 28
  };

  enum {
    RulePstart = 0, RuleProgram = 1, RuleLine = 2, RuleExpr = 3, RuleOexpr = 4, 
    RuleVariable = 5, RuleTerm = 6, RulePrimary = 7, RuleFactor = 8, RuleFunction = 9, 
    RuleNumber = 10
  };

  explicit CalcParser(antlr4::TokenStream *input);

  CalcParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~CalcParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class PstartContext;
  class ProgramContext;
  class LineContext;
  class ExprContext;
  class OexprContext;
  class VariableContext;
  class TermContext;
  class PrimaryContext;
  class FactorContext;
  class FunctionContext;
  class NumberContext; 

  class  PstartContext : public antlr4::ParserRuleContext {
  public:
    PstartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PstartContext() = default;
    void copyFrom(PstartContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProgStartContext : public PstartContext {
  public:
    ProgStartContext(PstartContext *ctx);

    ProgramContext *program();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PstartContext* pstart();

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

    std::vector<LineContext *> line();
    LineContext* line(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEP();
    antlr4::tree::TerminalNode* SEP(size_t i);
    antlr4::tree::TerminalNode *EOF();
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

  class  WhileExprContext : public ExprContext {
  public:
    WhileExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LBRACKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBRACKET();
    antlr4::tree::TerminalNode *LFBRACKET();
    ProgramContext *program();
    antlr4::tree::TerminalNode *RFBRACKET();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfExprContext : public ExprContext {
  public:
    IfExprContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LBRACKET();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBRACKET();
    std::vector<antlr4::tree::TerminalNode *> LFBRACKET();
    antlr4::tree::TerminalNode* LFBRACKET(size_t i);
    std::vector<ProgramContext *> program();
    ProgramContext* program(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RFBRACKET();
    antlr4::tree::TerminalNode* RFBRACKET(size_t i);
    antlr4::tree::TerminalNode *ELSE();
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

  class  OExprContext : public ExprContext {
  public:
    OExprContext(ExprContext *ctx);

    OexprContext *oexpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  OexprContext : public antlr4::ParserRuleContext {
  public:
    OexprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    OexprContext() = default;
    void copyFrom(OexprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TermExprContext : public OexprContext {
  public:
    TermExprContext(OexprContext *ctx);

    TermContext *term();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BrteExprContext : public OexprContext {
  public:
    BrteExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BRTE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BlteExprContext : public OexprContext {
  public:
    BlteExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BLTE();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BneqExprContext : public OexprContext {
  public:
    BneqExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BNEQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BltExprContext : public OexprContext {
  public:
    BltExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BLT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BorExprContext : public OexprContext {
  public:
    BorExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BOR();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SubExprContext : public OexprContext {
  public:
    SubExprContext(OexprContext *ctx);

    OexprContext *oexpr();
    antlr4::tree::TerminalNode *MINUS();
    TermContext *term();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddExprContext : public OexprContext {
  public:
    AddExprContext(OexprContext *ctx);

    OexprContext *oexpr();
    antlr4::tree::TerminalNode *PLUS();
    TermContext *term();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BandExprContext : public OexprContext {
  public:
    BandExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BAND();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BeqExprContext : public OexprContext {
  public:
    BeqExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BEQ();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BnotExprContext : public OexprContext {
  public:
    BnotExprContext(OexprContext *ctx);

    antlr4::tree::TerminalNode *BNOT();
    OexprContext *oexpr();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BrtExprContext : public OexprContext {
  public:
    BrtExprContext(OexprContext *ctx);

    std::vector<OexprContext *> oexpr();
    OexprContext* oexpr(size_t i);
    antlr4::tree::TerminalNode *BRT();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  OexprContext* oexpr();
  OexprContext* oexpr(int precedence);
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

  class  MDivTermContext : public TermContext {
  public:
    MDivTermContext(TermContext *ctx);

    TermContext *term();
    antlr4::tree::TerminalNode *MDIV();
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

  bool oexprSempred(OexprContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

