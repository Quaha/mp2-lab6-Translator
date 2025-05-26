#pragma once

#define DEBUG

#ifdef DEBUG:
#include <iostream>

using namespace std;

#endif

using real_t = long double;
using integer_t = long long;

const real_t EPS = 1e-6;

using flag_t = uint8_t;

enum DataType {
	NONE,
	REAL,
	INTEGER,
	VARIABLE,
};

enum DataFlags : flag_t {
	None = 1 << 0,
	IncorrectData = 1 << 1,
};