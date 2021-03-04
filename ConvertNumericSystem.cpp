//
// Created by whitfie on 04.03.21.
//

#include "ConvertNumericSystem.h"

std::string decToOctal(int value){
    std::string binary;
    while (value > 0) {
        binary += std::to_string(value % 8);
        value /= 8;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}

std::string decToHex(int value){
    std::string binary;
    while (value > 0) {
        switch (value % 16) {
            case 10: binary += "A"; break;
            case 11: binary += "B"; break;
            case 12: binary += "C"; break;
            case 13: binary += "D"; break;
            case 14: binary += "E"; break;
            case 15: binary += "F"; break;
            default:
                binary += std::to_string(value % 16);
        }
        value /= 16;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

std::string decToBinary(int value){
    std::string binary;
    while (value > 0) {
        binary += std::to_string(value % 2);
        value /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}