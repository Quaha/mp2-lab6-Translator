#pragma once

#define DEBUG

#ifdef DEBUG:
#include <iostream>

using namespace std;

#endif

using real_t = long double;
using integer_t = long long;

const real_t EPS = 1e-6;

enum DataType {
	NONE,
	REAL,
	INTEGER,
	VARIABLE,
};