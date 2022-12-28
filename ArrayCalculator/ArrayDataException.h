#pragma once
#include "Exaption.h"

class ArrayDataException :public Exeption {
public:
	ArrayDataException() = default;
	short Print() { return -2; }
};