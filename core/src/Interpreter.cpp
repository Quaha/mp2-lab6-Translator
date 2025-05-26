#include "Interpreter.hpp"

#include "antlr4-runtime.h"
#include "CalcLexer.h"
#include "CalcParser.h"
#include "CalcEvalVisitor.hpp"

std::vector<Data> processProgram(const std::string& input) {

    antlr4::ANTLRInputStream stream(input);

    CalcLexer lexer(&stream);
    antlr4::CommonTokenStream tokens(&lexer);
    CalcParser parser(&tokens);

    auto tree = parser.program();

    CalcEvalVisitor visitor;
    std::vector<Data> result = std::any_cast<std::vector<Data>>(visitor.visit(tree));

	return result;
}