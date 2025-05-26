
// Generated from Calc.g4 by ANTLR 4.13.1


#include "CalcListener.h"
#include "CalcVisitor.h"

#include "CalcParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcParserStaticData final {
  CalcParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcParserStaticData(const CalcParserStaticData&) = delete;
  CalcParserStaticData(CalcParserStaticData&&) = delete;
  CalcParserStaticData& operator=(const CalcParserStaticData&) = delete;
  CalcParserStaticData& operator=(CalcParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcParserStaticData *calcParserStaticData = nullptr;

void calcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcParserStaticData>(
    std::vector<std::string>{
      "program", "line", "expr", "term", "primary", "factor", "function", 
      "number"
    },
    std::vector<std::string>{
      "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'.'", "','", "'('", "')'", 
      "';'"
    },
    std::vector<std::string>{
      "", "WS", "INT", "NAME", "PLUS", "MINUS", "MUL", "DIV", "DOT", "COMMA", 
      "LBRACKET", "RBRACKET", "SEP"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,12,92,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,7,
  	7,7,1,0,1,0,1,0,5,0,20,8,0,10,0,12,0,23,9,0,1,0,1,0,1,1,1,1,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,38,8,2,10,2,12,2,41,9,2,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,5,3,52,8,3,10,3,12,3,55,9,3,1,4,1,4,1,4,1,4,1,4,3,
  	4,62,8,4,1,5,1,5,1,5,1,5,1,5,1,5,3,5,70,8,5,1,6,1,6,1,6,1,6,1,6,5,6,77,
  	8,6,10,6,12,6,80,9,6,3,6,82,8,6,1,6,1,6,1,7,1,7,1,7,1,7,3,7,90,8,7,1,
  	7,0,2,4,6,8,0,2,4,6,8,10,12,14,0,0,95,0,21,1,0,0,0,2,26,1,0,0,0,4,28,
  	1,0,0,0,6,42,1,0,0,0,8,61,1,0,0,0,10,69,1,0,0,0,12,71,1,0,0,0,14,89,1,
  	0,0,0,16,17,3,2,1,0,17,18,5,12,0,0,18,20,1,0,0,0,19,16,1,0,0,0,20,23,
  	1,0,0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,24,1,0,0,0,23,21,1,0,0,0,24,25,
  	5,0,0,1,25,1,1,0,0,0,26,27,3,4,2,0,27,3,1,0,0,0,28,29,6,2,-1,0,29,30,
  	3,6,3,0,30,39,1,0,0,0,31,32,10,3,0,0,32,33,5,4,0,0,33,38,3,6,3,0,34,35,
  	10,2,0,0,35,36,5,5,0,0,36,38,3,6,3,0,37,31,1,0,0,0,37,34,1,0,0,0,38,41,
  	1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,5,1,0,0,0,41,39,1,0,0,0,42,43,
  	6,3,-1,0,43,44,3,8,4,0,44,53,1,0,0,0,45,46,10,3,0,0,46,47,5,6,0,0,47,
  	52,3,10,5,0,48,49,10,2,0,0,49,50,5,7,0,0,50,52,3,10,5,0,51,45,1,0,0,0,
  	51,48,1,0,0,0,52,55,1,0,0,0,53,51,1,0,0,0,53,54,1,0,0,0,54,7,1,0,0,0,
  	55,53,1,0,0,0,56,57,5,4,0,0,57,62,3,10,5,0,58,59,5,5,0,0,59,62,3,10,5,
  	0,60,62,3,10,5,0,61,56,1,0,0,0,61,58,1,0,0,0,61,60,1,0,0,0,62,9,1,0,0,
  	0,63,64,5,10,0,0,64,65,3,4,2,0,65,66,5,11,0,0,66,70,1,0,0,0,67,70,3,12,
  	6,0,68,70,3,14,7,0,69,63,1,0,0,0,69,67,1,0,0,0,69,68,1,0,0,0,70,11,1,
  	0,0,0,71,72,5,3,0,0,72,81,5,10,0,0,73,78,3,4,2,0,74,75,5,9,0,0,75,77,
  	3,4,2,0,76,74,1,0,0,0,77,80,1,0,0,0,78,76,1,0,0,0,78,79,1,0,0,0,79,82,
  	1,0,0,0,80,78,1,0,0,0,81,73,1,0,0,0,81,82,1,0,0,0,82,83,1,0,0,0,83,84,
  	5,11,0,0,84,13,1,0,0,0,85,90,5,2,0,0,86,87,5,2,0,0,87,88,5,8,0,0,88,90,
  	5,2,0,0,89,85,1,0,0,0,89,86,1,0,0,0,90,15,1,0,0,0,10,21,37,39,51,53,61,
  	69,78,81,89
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcParserStaticData = staticData.release();
}

}

CalcParser::CalcParser(TokenStream *input) : CalcParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CalcParser::CalcParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CalcParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcParserStaticData->atn, calcParserStaticData->decisionToDFA, calcParserStaticData->sharedContextCache, options);
}

CalcParser::~CalcParser() {
  delete _interpreter;
}

const atn::ATN& CalcParser::getATN() const {
  return *calcParserStaticData->atn;
}

std::string CalcParser::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcParser::getRuleNames() const {
  return calcParserStaticData->ruleNames;
}

const dfa::Vocabulary& CalcParser::getVocabulary() const {
  return calcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcParser::getSerializedATN() const {
  return calcParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

CalcParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ProgramContext::getRuleIndex() const {
  return CalcParser::RuleProgram;
}

void CalcParser::ProgramContext::copyFrom(ProgramContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExProgramContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::ExProgramContext::EOF() {
  return getToken(CalcParser::EOF, 0);
}

std::vector<CalcParser::LineContext *> CalcParser::ExProgramContext::line() {
  return getRuleContexts<CalcParser::LineContext>();
}

CalcParser::LineContext* CalcParser::ExProgramContext::line(size_t i) {
  return getRuleContext<CalcParser::LineContext>(i);
}

std::vector<tree::TerminalNode *> CalcParser::ExProgramContext::SEP() {
  return getTokens(CalcParser::SEP);
}

tree::TerminalNode* CalcParser::ExProgramContext::SEP(size_t i) {
  return getToken(CalcParser::SEP, i);
}

CalcParser::ExProgramContext::ExProgramContext(ProgramContext *ctx) { copyFrom(ctx); }

void CalcParser::ExProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExProgram(this);
}
void CalcParser::ExProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExProgram(this);
}

std::any CalcParser::ExProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExProgram(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::ProgramContext* CalcParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, CalcParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::ExProgramContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1084) != 0)) {
      setState(16);
      line();
      setState(17);
      match(CalcParser::SEP);
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(24);
    match(CalcParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

CalcParser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::LineContext::getRuleIndex() const {
  return CalcParser::RuleLine;
}

void CalcParser::LineContext::copyFrom(LineContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExpressionLineContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::ExpressionLineContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

CalcParser::ExpressionLineContext::ExpressionLineContext(LineContext *ctx) { copyFrom(ctx); }

void CalcParser::ExpressionLineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionLine(this);
}
void CalcParser::ExpressionLineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionLine(this);
}

std::any CalcParser::ExpressionLineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitExpressionLine(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::LineContext* CalcParser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, CalcParser::RuleLine);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::ExpressionLineContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(26);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CalcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::ExprContext::getRuleIndex() const {
  return CalcParser::RuleExpr;
}

void CalcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TermExprContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::TermExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::TermExprContext::TermExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::TermExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTermExpr(this);
}
void CalcParser::TermExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTermExpr(this);
}

std::any CalcParser::TermExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitTermExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubExprContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::SubExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::SubExprContext::MINUS() {
  return getToken(CalcParser::MINUS, 0);
}

CalcParser::TermContext* CalcParser::SubExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::SubExprContext::SubExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::SubExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubExpr(this);
}
void CalcParser::SubExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubExpr(this);
}

std::any CalcParser::SubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddExprContext ------------------------------------------------------------------

CalcParser::ExprContext* CalcParser::AddExprContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::AddExprContext::PLUS() {
  return getToken(CalcParser::PLUS, 0);
}

CalcParser::TermContext* CalcParser::AddExprContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

CalcParser::AddExprContext::AddExprContext(ExprContext *ctx) { copyFrom(ctx); }

void CalcParser::AddExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExpr(this);
}
void CalcParser::AddExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExpr(this);
}

std::any CalcParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::ExprContext* CalcParser::expr() {
   return expr(0);
}

CalcParser::ExprContext* CalcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  CalcParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, CalcParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<TermExprContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(29);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(39);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(37);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(31);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(32);
          match(CalcParser::PLUS);
          setState(33);
          term(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<SubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(34);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(35);
          match(CalcParser::MINUS);
          setState(36);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(41);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

CalcParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::TermContext::getRuleIndex() const {
  return CalcParser::RuleTerm;
}

void CalcParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MulTermContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::MulTermContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

tree::TerminalNode* CalcParser::MulTermContext::MUL() {
  return getToken(CalcParser::MUL, 0);
}

CalcParser::FactorContext* CalcParser::MulTermContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::MulTermContext::MulTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::MulTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulTerm(this);
}
void CalcParser::MulTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulTerm(this);
}

std::any CalcParser::MulTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMulTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivTermContext ------------------------------------------------------------------

CalcParser::TermContext* CalcParser::DivTermContext::term() {
  return getRuleContext<CalcParser::TermContext>(0);
}

tree::TerminalNode* CalcParser::DivTermContext::DIV() {
  return getToken(CalcParser::DIV, 0);
}

CalcParser::FactorContext* CalcParser::DivTermContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::DivTermContext::DivTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::DivTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivTerm(this);
}
void CalcParser::DivTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivTerm(this);
}

std::any CalcParser::DivTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitDivTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrimaryTermContext ------------------------------------------------------------------

CalcParser::PrimaryContext* CalcParser::PrimaryTermContext::primary() {
  return getRuleContext<CalcParser::PrimaryContext>(0);
}

CalcParser::PrimaryTermContext::PrimaryTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::PrimaryTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryTerm(this);
}
void CalcParser::PrimaryTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryTerm(this);
}

std::any CalcParser::PrimaryTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPrimaryTerm(this);
  else
    return visitor->visitChildren(this);
}

CalcParser::TermContext* CalcParser::term() {
   return term(0);
}

CalcParser::TermContext* CalcParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CalcParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  CalcParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 6;
  enterRecursionRule(_localctx, 6, CalcParser::RuleTerm, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<PrimaryTermContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(43);
    primary();
    _ctx->stop = _input->LT(-1);
    setState(53);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(51);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(45);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(46);
          match(CalcParser::MUL);
          setState(47);
          factor();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(48);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(49);
          match(CalcParser::DIV);
          setState(50);
          factor();
          break;
        }

        default:
          break;
        } 
      }
      setState(55);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

CalcParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::PrimaryContext::getRuleIndex() const {
  return CalcParser::RulePrimary;
}

void CalcParser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FactPrimaryContext ------------------------------------------------------------------

CalcParser::FactorContext* CalcParser::FactPrimaryContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::FactPrimaryContext::FactPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }

void CalcParser::FactPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactPrimary(this);
}
void CalcParser::FactPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactPrimary(this);
}

std::any CalcParser::FactPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFactPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusPrimaryContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::MinusPrimaryContext::MINUS() {
  return getToken(CalcParser::MINUS, 0);
}

CalcParser::FactorContext* CalcParser::MinusPrimaryContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::MinusPrimaryContext::MinusPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }

void CalcParser::MinusPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMinusPrimary(this);
}
void CalcParser::MinusPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMinusPrimary(this);
}

std::any CalcParser::MinusPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitMinusPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusPrimaryContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::PlusPrimaryContext::PLUS() {
  return getToken(CalcParser::PLUS, 0);
}

CalcParser::FactorContext* CalcParser::PlusPrimaryContext::factor() {
  return getRuleContext<CalcParser::FactorContext>(0);
}

CalcParser::PlusPrimaryContext::PlusPrimaryContext(PrimaryContext *ctx) { copyFrom(ctx); }

void CalcParser::PlusPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusPrimary(this);
}
void CalcParser::PlusPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusPrimary(this);
}

std::any CalcParser::PlusPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitPlusPrimary(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::PrimaryContext* CalcParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 8, CalcParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::PLUS: {
        _localctx = _tracker.createInstance<CalcParser::PlusPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(56);
        match(CalcParser::PLUS);
        setState(57);
        factor();
        break;
      }

      case CalcParser::MINUS: {
        _localctx = _tracker.createInstance<CalcParser::MinusPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(58);
        match(CalcParser::MINUS);
        setState(59);
        factor();
        break;
      }

      case CalcParser::INT:
      case CalcParser::NAME:
      case CalcParser::LBRACKET: {
        _localctx = _tracker.createInstance<CalcParser::FactPrimaryContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(60);
        factor();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

CalcParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::FactorContext::getRuleIndex() const {
  return CalcParser::RuleFactor;
}

void CalcParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BracketFactorContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::BracketFactorContext::LBRACKET() {
  return getToken(CalcParser::LBRACKET, 0);
}

CalcParser::ExprContext* CalcParser::BracketFactorContext::expr() {
  return getRuleContext<CalcParser::ExprContext>(0);
}

tree::TerminalNode* CalcParser::BracketFactorContext::RBRACKET() {
  return getToken(CalcParser::RBRACKET, 0);
}

CalcParser::BracketFactorContext::BracketFactorContext(FactorContext *ctx) { copyFrom(ctx); }

void CalcParser::BracketFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBracketFactor(this);
}
void CalcParser::BracketFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBracketFactor(this);
}

std::any CalcParser::BracketFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitBracketFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionFactorContext ------------------------------------------------------------------

CalcParser::FunctionContext* CalcParser::FunctionFactorContext::function() {
  return getRuleContext<CalcParser::FunctionContext>(0);
}

CalcParser::FunctionFactorContext::FunctionFactorContext(FactorContext *ctx) { copyFrom(ctx); }

void CalcParser::FunctionFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionFactor(this);
}
void CalcParser::FunctionFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionFactor(this);
}

std::any CalcParser::FunctionFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFunctionFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberFactorContext ------------------------------------------------------------------

CalcParser::NumberContext* CalcParser::NumberFactorContext::number() {
  return getRuleContext<CalcParser::NumberContext>(0);
}

CalcParser::NumberFactorContext::NumberFactorContext(FactorContext *ctx) { copyFrom(ctx); }

void CalcParser::NumberFactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberFactor(this);
}
void CalcParser::NumberFactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberFactor(this);
}

std::any CalcParser::NumberFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitNumberFactor(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::FactorContext* CalcParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 10, CalcParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CalcParser::LBRACKET: {
        _localctx = _tracker.createInstance<CalcParser::BracketFactorContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(63);
        match(CalcParser::LBRACKET);
        setState(64);
        expr(0);
        setState(65);
        match(CalcParser::RBRACKET);
        break;
      }

      case CalcParser::NAME: {
        _localctx = _tracker.createInstance<CalcParser::FunctionFactorContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(67);
        function();
        break;
      }

      case CalcParser::INT: {
        _localctx = _tracker.createInstance<CalcParser::NumberFactorContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(68);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

CalcParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::FunctionContext::getRuleIndex() const {
  return CalcParser::RuleFunction;
}

void CalcParser::FunctionContext::copyFrom(FunctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::FunctionCallContext::NAME() {
  return getToken(CalcParser::NAME, 0);
}

tree::TerminalNode* CalcParser::FunctionCallContext::LBRACKET() {
  return getToken(CalcParser::LBRACKET, 0);
}

tree::TerminalNode* CalcParser::FunctionCallContext::RBRACKET() {
  return getToken(CalcParser::RBRACKET, 0);
}

std::vector<CalcParser::ExprContext *> CalcParser::FunctionCallContext::expr() {
  return getRuleContexts<CalcParser::ExprContext>();
}

CalcParser::ExprContext* CalcParser::FunctionCallContext::expr(size_t i) {
  return getRuleContext<CalcParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> CalcParser::FunctionCallContext::COMMA() {
  return getTokens(CalcParser::COMMA);
}

tree::TerminalNode* CalcParser::FunctionCallContext::COMMA(size_t i) {
  return getToken(CalcParser::COMMA, i);
}

CalcParser::FunctionCallContext::FunctionCallContext(FunctionContext *ctx) { copyFrom(ctx); }

void CalcParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}
void CalcParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

std::any CalcParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::FunctionContext* CalcParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 12, CalcParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<CalcParser::FunctionCallContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(CalcParser::NAME);
    setState(72);
    match(CalcParser::LBRACKET);
    setState(81);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1084) != 0)) {
      setState(73);
      expr(0);
      setState(78);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == CalcParser::COMMA) {
        setState(74);
        match(CalcParser::COMMA);
        setState(75);
        expr(0);
        setState(80);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(83);
    match(CalcParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

CalcParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CalcParser::NumberContext::getRuleIndex() const {
  return CalcParser::RuleNumber;
}

void CalcParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RealNumberContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> CalcParser::RealNumberContext::INT() {
  return getTokens(CalcParser::INT);
}

tree::TerminalNode* CalcParser::RealNumberContext::INT(size_t i) {
  return getToken(CalcParser::INT, i);
}

tree::TerminalNode* CalcParser::RealNumberContext::DOT() {
  return getToken(CalcParser::DOT, 0);
}

CalcParser::RealNumberContext::RealNumberContext(NumberContext *ctx) { copyFrom(ctx); }

void CalcParser::RealNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRealNumber(this);
}
void CalcParser::RealNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRealNumber(this);
}

std::any CalcParser::RealNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitRealNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntNumberContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IntNumberContext::INT() {
  return getToken(CalcParser::INT, 0);
}

CalcParser::IntNumberContext::IntNumberContext(NumberContext *ctx) { copyFrom(ctx); }

void CalcParser::IntNumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntNumber(this);
}
void CalcParser::IntNumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntNumber(this);
}

std::any CalcParser::IntNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitIntNumber(this);
  else
    return visitor->visitChildren(this);
}
CalcParser::NumberContext* CalcParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 14, CalcParser::RuleNumber);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(89);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CalcParser::IntNumberContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(85);
      match(CalcParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CalcParser::RealNumberContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(86);
      match(CalcParser::INT);
      setState(87);
      match(CalcParser::DOT);
      setState(88);
      match(CalcParser::INT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool CalcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);
    case 3: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CalcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CalcParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void CalcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcParserInitialize();
#else
  ::antlr4::internal::call_once(calcParserOnceFlag, calcParserInitialize);
#endif
}
