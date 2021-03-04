#include <iostream>
#include "ConvertNumericSystem.h"

using std::cin;
using std::cout;
using std::endl;

int main() {

    int variant = 0;
    int value = 0;
    std::string result;

    cout << "веди вариант" << endl;
    cin >> variant;
    cout << "веди значение" << endl;
    cin >> value;

    switch (variant) {
        case 1: result = decToOctal(value); break;
        case 2: result = decToHex(value); break;
        case 3: result = decToBinary(value); break;
        default:
            cout << "нету такой системи исчисления" << endl;
    }

    cout << result << endl;

    return 0;
}
