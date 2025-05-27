#include <gtest/gtest.h>

#include <cmath>

#include "Interpreter.hpp"
#include "ProgramMemory.hpp"

TEST(Interpreter, IntegerNumber1) {

    std::string input = "1;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 1);
}

TEST(Interpreter, IntegerNumber2) {

    std::string input = "+1;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 1);
}

TEST(Interpreter, NegativeInteger) {

    std::string input = "-1;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, -1);
}

TEST(Interpreter, IntegerAdd) {

    std::string input = "10+35;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 10+35);
}

TEST(Interpreter, IntegerSub) {

    std::string input = "1-3;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 1-3);
}

TEST(Interpreter, IntegerMul) {

    std::string input = "20*30;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 20*30);
}

TEST(Interpreter, IntegerDiv) {

    std::string input = "45/16;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 45/16);
}

TEST(Interpreter, IntegerBrackets1) {

    std::string input = "(1);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, (1));
}

TEST(Interpreter, IntegerBrackets2) {

    std::string input = "(1+10);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, (1+10));
}

TEST(Interpreter, IntegerBrackets3) {

    std::string input = "100+(1+10);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 100+(1+10));
}

TEST(Interpreter, IntegerBrackets4) {

    std::string input = "100*(1+10);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 100*(1+10));
}

TEST(Interpreter, IntegerBrackets5) {

    std::string input = "100*(1+(10));";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 100*(1+(10)));
}

TEST(Interpreter, RealNumber1) {

    std::string input = "1.0;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs(1.0 - result) < EPS);
}

TEST(Interpreter, RealNumber2) {

    std::string input = "+1.0;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs(1.0 - result) < EPS);
}

TEST(Interpreter, NegativeReal) {

    std::string input = "-1.0;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs(-1.0 - result) < EPS);
}

TEST(Interpreter, RealSum) {

    std::string input = "10.5+3;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs((10.5+3.0) - result) < EPS);
}

TEST(Interpreter, RealSub) {

    std::string input = "10-30.3;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs((10.0-30.3) - result) < EPS);
}

TEST(Interpreter, RealMul) {

    std::string input = "10.2*30.3;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs((10.2*30.3) - result) < EPS);
}

TEST(Interpreter, RealDiv) {

    std::string input = "16.2/3;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs((16.2/3.0) - result) < EPS);
}

TEST(Interpreter, ComplexTest1) {

    std::string input = "-(5*4-(2+2));";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(-(5*4-(2+2)), result);
}

TEST(Interpreter, ComplexTest2) {

    std::string input = "-((9-8)*(5+1));";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(-((9-8)*(5+1)), result);
}

TEST(Interpreter, WrongInput1) {

    std::string input = "-";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));
}

TEST(Interpreter, WrongInput2) {

    std::string input = "-+5";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));
}

TEST(Interpreter, WrongInput3) {

    std::string input = "-5(6)";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));
}

TEST(Interpreter, SumFunction1) {

    std::string input = "sum(1);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 1);
}

TEST(Interpreter, SumFunction2) {

    std::string input = "sum();";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));
}

TEST(Interpreter, SumFunction3) {

    std::string input = "sum(3,30,33);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 3+30+33);
}

TEST(Interpreter, SumFunction4) {

    std::string input = "sum(3,30.3,33);";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE((3.0 + 30.3 + 33.0 - result) < EPS);
}

TEST(Interpreter, AbsFunction1) {

    std::string input = "abs(1);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 1);
}

TEST(Interpreter, AbsFunction2) {

    std::string input = "abs(-1);";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 1);
}

TEST(Interpreter, AbsFunction3) {

    std::string input = "abs();";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));
}

TEST(Interpreter, AbsFunction4) {

    std::string input = "abs(1,2);";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));
}

TEST(Interpreter, AbsFunction5) {

    std::string input = "abs(-5.5);";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE((-5.5 - result) < EPS);
}

TEST(Interpreter, Variable1) {

    std::string input = "a=1;a;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result1;
    EXPECT_NO_THROW(result1 = result_vector[0].as<integer_t>());

    integer_t result2;
    EXPECT_NO_THROW(result2 = result_vector[1].as<integer_t>());

    EXPECT_EQ(result1, 1);
    EXPECT_EQ(result2, 1);

    clearMemory();
}

TEST(Interpreter, Variable2) {

    std::string input = "a=b=1;a;b;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result1;
    EXPECT_NO_THROW(result1 = result_vector[0].as<integer_t>());

    integer_t result2;
    EXPECT_NO_THROW(result2 = result_vector[1].as<integer_t>());

    integer_t result3;
    EXPECT_NO_THROW(result3 = result_vector[2].as<integer_t>());

    EXPECT_EQ(result1, 1);
    EXPECT_EQ(result2, 1);
    EXPECT_EQ(result3, 1);

    clearMemory();
}

TEST(Interpreter, Variable3) {

    std::string input = "a;";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));

    clearMemory();
}

TEST(Interpreter, Variable4) {

    std::string input = "a=5;a+b;";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));

    clearMemory();
}

TEST(Interpreter, Variable5) {

    std::string input = "a=5;delete(a);a;";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));

    clearMemory();
}

TEST(Interpreter, Variable6) {

    std::string input = "delete(a);";

    EXPECT_ANY_THROW(std::vector<Data> result_vector = processProgram(input));

    clearMemory();
}