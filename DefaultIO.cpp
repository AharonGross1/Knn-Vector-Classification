//
// Created by asaf9 on 1/9/2023.
//
#include "DefaultIO.h"
#include <iostream>
using namespace std;
std::string DefaultIO::read() {
    std::string s;
    std::cin >> s;
    return s;
}

void DefaultIO::write(std::string string) {
}


