#pragma once

#include "Data.hpp"

namespace DataFunctions {

	Data uminus(Data lhs); // operator -

	Data add(Data lhs, Data rhs); // operator +
	Data sub(Data lhs, Data rhs); // operator -
	Data mul(Data lhs, Data rhs); // operator *
	Data div(Data lhs, Data rhs); // operator /
	Data mdiv(Data lhs, Data rhs); // operator %

	Data bnot(Data lhs);			// operator !
	Data beq(Data lhs, Data rhs);   // operator ==
	Data bneq(Data lhs, Data rhs);  // operator !=
	Data blt(Data lhs, Data rhs);   // operator <
	Data brt(Data lhs, Data rhs);   // operator >
	Data blte(Data lhs, Data rhs);  // operator <=
	Data brte(Data lhs, Data rhs);  // operator >=
	Data bor(Data lhs, Data rhs);   // operator ||
	Data band(Data lhs, Data rhs);  // operator &&

	Data SUM(std::vector<Data> args); // function sum() inf
	Data ABS(std::vector<Data> args); // function abs() 1

	Data PRINT(std::vector<Data> args); // function print() 1

	Data DEL_VAR(std::vector<Data> args); // function delete() 1
}