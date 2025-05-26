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
			throw std::runtime_error("Invalid type of lhs in DataMath::add() function!");
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
			throw std::runtime_error("Invalid type of lhs in DataMath::sub() function!");
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
			throw std::runtime_error("Invalid type of lhs in DataMath::mul() function!");
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
			throw std::runtime_error("Invalid type of lhs in DataMath::div() function!");
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
}