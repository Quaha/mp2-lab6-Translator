
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
      "program", "line", "expr", "term"
    },
    std::vector<std::string>{
      "", "", "'+'", "'-'", "'*'", "'/'", "';'"
    },
    std::vector<std::string>{
      "", "INT", "PLUS", "MINUS", "MUL", "DIV", "SEP", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,7,49,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,0,5,0,12,8,0,10,0,
  	12,0,15,9,0,1,0,1,0,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,30,
  	8,2,10,2,12,2,33,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,44,8,3,10,
  	3,12,3,47,9,3,1,3,0,2,4,6,4,0,2,4,6,0,0,49,0,13,1,0,0,0,2,18,1,0,0,0,
  	4,20,1,0,0,0,6,34,1,0,0,0,8,9,3,2,1,0,9,10,5,6,0,0,10,12,1,0,0,0,11,8,
  	1,0,0,0,12,15,1,0,0,0,13,11,1,0,0,0,13,14,1,0,0,0,14,16,1,0,0,0,15,13,
  	1,0,0,0,16,17,5,0,0,1,17,1,1,0,0,0,18,19,3,4,2,0,19,3,1,0,0,0,20,21,6,
  	2,-1,0,21,22,3,6,3,0,22,31,1,0,0,0,23,24,10,3,0,0,24,25,5,2,0,0,25,30,
  	3,6,3,0,26,27,10,2,0,0,27,28,5,3,0,0,28,30,3,6,3,0,29,23,1,0,0,0,29,26,
  	1,0,0,0,30,33,1,0,0,0,31,29,1,0,0,0,31,32,1,0,0,0,32,5,1,0,0,0,33,31,
  	1,0,0,0,34,35,6,3,-1,0,35,36,5,1,0,0,36,45,1,0,0,0,37,38,10,3,0,0,38,
  	39,5,4,0,0,39,44,5,1,0,0,40,41,10,2,0,0,41,42,5,5,0,0,42,44,5,1,0,0,43,
  	37,1,0,0,0,43,40,1,0,0,0,44,47,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,
  	7,1,0,0,0,47,45,1,0,0,0,5,13,29,31,43,45
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
    setState(13);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CalcParser::INT) {
      setState(8);
      line();
      setState(9);
      match(CalcParser::SEP);
      setState(15);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(16);
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
    setState(18);
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

    setState(21);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(31);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(29);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(23);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(24);
          match(CalcParser::PLUS);
          setState(25);
          term(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<SubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(26);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(27);
          match(CalcParser::MINUS);
          setState(28);
          term(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(33);
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

tree::TerminalNode* CalcParser::MulTermContext::INT() {
  return getToken(CalcParser::INT, 0);
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

tree::TerminalNode* CalcParser::DivTermContext::INT() {
  return getToken(CalcParser::INT, 0);
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
//----------------- IntTermContext ------------------------------------------------------------------

tree::TerminalNode* CalcParser::IntTermContext::INT() {
  return getToken(CalcParser::INT, 0);
}

CalcParser::IntTermContext::IntTermContext(TermContext *ctx) { copyFrom(ctx); }

void CalcParser::IntTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntTerm(this);
}
void CalcParser::IntTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<CalcListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntTerm(this);
}

std::any CalcParser::IntTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CalcVisitor*>(visitor))
    return parserVisitor->visitIntTerm(this);
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
    _localctx = _tracker.createInstance<IntTermContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(35);
    match(CalcParser::INT);
    _ctx->stop = _input->LT(-1);
    setState(45);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(43);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(37);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(38);
          match(CalcParser::MUL);
          setState(39);
          match(CalcParser::INT);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(40);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(41);
          match(CalcParser::DIV);
          setState(42);
          match(CalcParser::INT);
          break;
        }

        default:
          break;
        } 
      }
      setState(47);
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
