#include <vector>
#include <cmath>

#include "DataMath.hpp"

namespace DataMath {

	Data uminus(Data lhs) {
		lhs.makeNumber();

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::uminus() function!");
		}

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

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::add() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of rhs in DataMath::add() function!");
		}

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

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::sub() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of rhs in DataMath::sub() function!");
		}

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

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::mul() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of rhs in DataMath::mul() function!");
		}

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

		if (!lhs.isCorrect()) {
			throw std::runtime_error("Invalid type of lhs in DataMath::div() function!");
		}
		if (!rhs.isCorrect()) {
			throw std::runtime_error("Invalid type of rhs in DataMath::div() function!");
		}

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

	Data SUM(std::vector<Data> args) {
		int N = args.size();

		if (N == 0) {
			throw std::runtime_error("Invalid count of args in DataMath::SUM() function!");
		}

		for (int i = 0; i < N; i++) {
			args[i].makeNumber();
		}

		for (int i = 0; i < N; i++) {
			if (!args[i].isCorrect()) {
				throw std::runtime_error("Invalid type of arg in DataMath::SUM() function!");
			}
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
}