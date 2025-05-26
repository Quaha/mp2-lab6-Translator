#include <gtest/gtest.h>

#include <cmath>

#include "Interpreter.hpp"

TEST(Interpreter, IntegerNumber) {

    std::string input = "1;";

    std::vector<Data> result_vector = processProgram(input);

    integer_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<integer_t>());

    EXPECT_EQ(result, 1);
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

TEST(Interpreter, RealNumber) {

    std::string input = "1.0;";

    std::vector<Data> result_vector = processProgram(input);

    real_t result;
    EXPECT_NO_THROW(result = result_vector[0].as<real_t>());

    EXPECT_TRUE(abs(1.0 - result) < EPS);
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