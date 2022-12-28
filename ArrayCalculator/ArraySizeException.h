#pragma once
#include "Exaption.h"

class ArraySizeException :public Exeption {
public:
	ArraySizeException() = default;
	short Print() { return -1; }
};