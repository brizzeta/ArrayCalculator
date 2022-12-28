#include <iostream>
using namespace std;
#include "ArrayValueCalculator.h"

int main()
{
    ArrayValueCalculator m;
    const int row = 4;
    const int col = 4;
    string mass[col][row] = { {"1", "3", "5", "4"}, {"3", "4", "1", "9"}, {"1", "5", "3", "6"}, {"3", "9", "6", "2"} };
    cout << m.doCalc(mass, col, row) << endl;
}