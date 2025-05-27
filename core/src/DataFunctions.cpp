#include <vector>
#include <cmath>

#include "DataFunctions.hpp"
#include "ProgramMemory.hpp"

namespace DataFunctions {

	Data uminus(Data lhs) {
		lhs.makeNumber();

		if (lhs.getDataType() == DataType::INTEGER) {
			lhs.setData(-lhs.as<integer_t>());
		}
		if (lhs.getDataType() == DataType::REAL) {
			lhs.setData(-lhs.as<real_t>());
		}

		return lhs;
	}

	Data add(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			result.setData(lhs.as<integer_t>() + rhs.as<integer_t>());
		}
		else {

			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() + rhs.as<real_t>());
		}

		return result;
	}

	Data sub(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			result.setData(lhs.as<integer_t>() - rhs.as<integer_t>());
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() - rhs.as<real_t>());
		}

		return result;
	}

	Data mul(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			result.setData(lhs.as<integer_t>() * rhs.as<integer_t>());
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() * rhs.as<real_t>());
		}

		return result;
	}

	Data div(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			if (rhs.as<integer_t>() == 0) {
				throw std::runtime_error("It is forbidden to divide by an integer 0!");
			}
			result.setData(lhs.as<integer_t>() / rhs.as<integer_t>());
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			result.setDataType(DataType::REAL);
			result.setData(lhs.as<real_t>() / rhs.as<real_t>());
		}

		return result;
	}

	Data mdiv(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		Data result;

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			result.setDataType(DataType::INTEGER);
			if (rhs.as<integer_t>() == 0) {
				throw std::runtime_error("It is forbidden to divide by an integer 0!");
			}
			result.setData(lhs.as<integer_t>() % rhs.as<integer_t>());
		}
		else {
			throw std::runtime_error("It is forbidden to use % operator with real numbers!");
		}

		return result;
	}

	Data bnot(Data lhs) {
		lhs.makeBool();

		integer_t result = lhs.as<integer_t>();

		result ^= static_cast<integer_t>(1);

		lhs.setData(result);

		return lhs;
	}

	Data beq(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		Data result(DataType::INTEGER, static_cast<integer_t>(0));

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			if (lhs.as<integer_t>() == rhs.as<integer_t>()) {
				result.setData(static_cast<integer_t>(1));
			}
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			if (std::abs(lhs.as<real_t>() - rhs.as<real_t>()) < EPS) {
				result.setData(static_cast<integer_t>(1));
			}
		}
		return result;
	}

	Data bneq(Data lhs, Data rhs) {
		return bnot(beq(lhs, rhs));
	}

	Data blt(Data lhs, Data rhs) {
		lhs.makeNumber();
		rhs.makeNumber();

		Data result(DataType::INTEGER, static_cast<integer_t>(0));

		if (lhs.getDataType() == DataType::INTEGER && rhs.getDataType() == DataType::INTEGER) {
			if (lhs.as<integer_t>() < rhs.as<integer_t>()) {
				result.setData(static_cast<integer_t>(1));
			}
		}
		else {
			lhs.makeReal();
			rhs.makeReal();

			if (lhs.as<real_t>() < rhs.as<real_t>()) {
				result.setData(static_cast<integer_t>(1));
			}
		}
		return result;
	}

	Data brt(Data lhs, Data rhs) {
		return blt(rhs, lhs);
	}

	Data blte(Data lhs, Data rhs) {
		return bor(blt(lhs, rhs), beq(lhs, rhs));
	}

	Data brte(Data lhs, Data rhs) {
		return blte(rhs, lhs);
	}

	Data bor(Data lhs, Data rhs) {
		lhs.makeBool();
		rhs.makeBool();

		integer_t l = lhs.as<integer_t>();
		integer_t r = rhs.as<integer_t>();

		Data result(DataType::INTEGER, static_cast<integer_t>(l || r));

		return result;
	}

	Data band(Data lhs, Data rhs) {
		lhs.makeBool();
		rhs.makeBool();

		integer_t l = lhs.as<integer_t>();
		integer_t r = rhs.as<integer_t>();

		Data result(DataType::INTEGER, static_cast<integer_t>(l && r));

		return result;
	}

	Data SUM(std::vector<Data> args) {
		int N = args.size();

		if (N == 0) {
			throw std::runtime_error("Invalid count of args in SUM() function!");
		}

		for (int i = 0; i < N; i++) {
			args[i].makeNumber();
		}

		bool any_real = false;
		for (int i = 0; i < N; i++) {
			if (args[i].getDataType() == DataType::REAL) {
				any_real = true;
			}
		}

		Data result;

		if (any_real) {
			for (int i = 0; i < N; i++) {
				args[i].makeReal();
			}

			result.setDataType(DataType::REAL);

			real_t sum = 0;
			for (int i = 0; i < N; i++) {
				sum += args[i].as<real_t>();
			}

			result.setData(sum);
		}
		else {
			result.setDataType(DataType::INTEGER);

			integer_t sum = 0;
			for (int i = 0; i < N; i++) {
				sum += args[i].as<integer_t>();
			}

			result.setData(sum);
		}

		return result;
	}

	Data ABS(std::vector<Data> args) {
		int N = args.size();

		if (N != 1) {
			throw std::runtime_error("Invalid count of args in ABS() function!");
		}
		
		Data arg = args[0];
		arg.makeNumber();

		if (arg.getDataType() == DataType::INTEGER) {
			integer_t value = arg.as<integer_t>();
			if (value < 0) {
				value = -value;
			}
			arg.setData(value);
		}
		if (arg.getDataType() == DataType::REAL) {
			real_t value = arg.as<real_t>();
			if (value < 0) {
				value = -value;
			}
			arg.setData(value);
		}
		return arg;
	}

	Data PRINT(std::vector<Data> args) {

		for (Data data : args) {
			std::cout << ">> " << data << std::endl;
		}

		return Data();
	}

	Data DEL_VAR(std::vector<Data> args) {

		int N = args.size();

		if (N != 1) {
			throw std::runtime_error("Invalid count of args in DEL_VAR() function!");
		}

		Data arg = args[0];
		if (arg.getDataType() != DataType::VARIABLE) {
			throw std::runtime_error("Invalid type of arg in DEL_VAR() function!");
		}

		std::string vname = arg.as<std::string>();

		Data result = ProgramMemory.getVariableValue(vname);
		
		ProgramMemory.destroyVariable(vname);

		return result;
	}
}