#pragma once

#include "Data.hpp"

namespace DataMath {

	Data uminus(Data lhs);

	Data add(Data lhs, Data rhs);
	Data sub(Data lhs, Data rhs);
	Data mul(Data lhs, Data rhs);
	Data div(Data lhs, Data rhs);
}