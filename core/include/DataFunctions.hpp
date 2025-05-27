#pragma once

#include "Data.hpp"

namespace DataFunctions {

	Data uminus(Data lhs); // operator u-

	Data add(Data lhs, Data rhs); // operator b+
	Data sub(Data lhs, Data rhs); // operator b-
	Data mul(Data lhs, Data rhs); // operator b*
	Data div(Data lhs, Data rhs); // operator b/

	Data SUM(std::vector<Data> args); // function sum() inf
	Data ABS(std::vector<Data> args); // function abs() 1

	Data DEL_VAR(std::vector<Data> args); // function delete() 1
}