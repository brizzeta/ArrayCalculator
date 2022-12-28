#pragma once
#include "ArraySizeException.h"
#include "ArrayDataException.h"

class ArrayValueCalculator {
public:
	ArrayValueCalculator() = default;

	int doCalc(string mass[4][4], int rows, int cols) {
		int res = 0;

		try {
			if (rows != 4 || cols != 4) {
				ArraySizeException SizeObj;
				throw SizeObj.Print();
			}
		}
		catch (int Error) {
			if (Error == -1) {
				cout << "ArraySizeException: ";
				return Error;
			}
		}
		
		int mass2[4][4];

		for (short i = 0; i < rows; i++) {
			for (short j = 0; j < cols; j++) {

				mass2[i][j] = atoi(mass[i][j].c_str());

				try {
					if (mass2[i][j] == 0) {
						ArrayDataException DataObj;
						throw DataObj.Print();
					}
				}
				catch (short Err) {
					if (Err == -2) {
						cout << "ArrayDataException: ";
						return Err;
					}
				}
				res += mass2[i][j];
			}
		}
		return res;
	}
};