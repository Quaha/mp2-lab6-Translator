
// Generated from Calc.g4 by ANTLR 4.13.1


#include "CalcLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcLexerStaticData final {
  CalcLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcLexerStaticData(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData(CalcLexerStaticData&&) = delete;
  CalcLexerStaticData& operator=(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData& operator=(CalcLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CalcLexerStaticData *calclexerLexerStaticData = nullptr;

void calclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(calclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcLexerStaticData>(
    std::vector<std::string>{
      "INT", "PLUS", "MINUS", "MUL", "DIV", "SEP", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "'+'", "'-'", "'*'", "'/'", "';'"
    },
    std::vector<std::string>{
      "", "INT", "PLUS", "MINUS", "MUL", "DIV", "SEP", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,7,37,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
  	1,0,4,0,17,8,0,11,0,12,0,18,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,
  	6,4,6,32,8,6,11,6,12,6,33,1,6,1,6,0,0,7,1,1,3,2,5,3,7,4,9,5,11,6,13,7,
  	1,0,2,1,0,48,57,3,0,9,10,13,13,32,32,38,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,
  	0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,1,16,1,0,0,0,
  	3,20,1,0,0,0,5,22,1,0,0,0,7,24,1,0,0,0,9,26,1,0,0,0,11,28,1,0,0,0,13,
  	31,1,0,0,0,15,17,7,0,0,0,16,15,1,0,0,0,17,18,1,0,0,0,18,16,1,0,0,0,18,
  	19,1,0,0,0,19,2,1,0,0,0,20,21,5,43,0,0,21,4,1,0,0,0,22,23,5,45,0,0,23,
  	6,1,0,0,0,24,25,5,42,0,0,25,8,1,0,0,0,26,27,5,47,0,0,27,10,1,0,0,0,28,
  	29,5,59,0,0,29,12,1,0,0,0,30,32,7,1,0,0,31,30,1,0,0,0,32,33,1,0,0,0,33,
  	31,1,0,0,0,33,34,1,0,0,0,34,35,1,0,0,0,35,36,6,6,0,0,36,14,1,0,0,0,3,
  	0,18,33,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calclexerLexerStaticData = staticData.release();
}

}

CalcLexer::CalcLexer(CharStream *input) : Lexer(input) {
  CalcLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calclexerLexerStaticData->atn, calclexerLexerStaticData->decisionToDFA, calclexerLexerStaticData->sharedContextCache);
}

CalcLexer::~CalcLexer() {
  delete _interpreter;
}

std::string CalcLexer::getGrammarFileName() const {
  return "Calc.g4";
}

const std::vector<std::string>& CalcLexer::getRuleNames() const {
  return calclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CalcLexer::getChannelNames() const {
  return calclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CalcLexer::getModeNames() const {
  return calclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CalcLexer::getVocabulary() const {
  return calclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CalcLexer::getSerializedATN() const {
  return calclexerLexerStaticData->serializedATN;
}

const atn::ATN& CalcLexer::getATN() const {
  return *calclexerLexerStaticData->atn;
}




void CalcLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(calclexerLexerOnceFlag, calclexerLexerInitialize);
#endif
}
