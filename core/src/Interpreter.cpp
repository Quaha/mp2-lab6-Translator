#include "Interpreter.hpp"

#include "antlr4-runtime.h"

#include "CalcLexer.h"
#include "CalcParser.h"
#include "CalcEvalVisitor.hpp"

#include "ThrowingErrorListener.hpp"
#include "ProgramMemory.hpp"

std::vector<Data> processProgram(const std::string& input) {

    initMemory();

    antlr4::ANTLRInputStream stream(input);

    CalcLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CalcParser parser(&tokens);

    lexer.removeErrorListeners();
    parser.removeErrorListeners();

    auto errorListener = std::make_shared<ThrowingErrorListener>();
    lexer.addErrorListener(errorListener.get());
    parser.addErrorListener(errorListener.get());

    auto tree = parser.program();

    CalcEvalVisitor visitor;
    std::vector<Data> result = std::any_cast<std::vector<Data>>(visitor.visit(tree));

	return result;
}