// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char *text1 = "my test 123 string with0ut digits";
    std::cout << "Task 1: " << faStr1(text1) << std::endl;

    const char *text2 = "Good morning Dasha and Max!";
    std::cout << "Task 2: " << faStr2(text2) << std::endl;

    const char *text3 = "just some random text";
    std::cout << "Task 3: " << faStr3(text3) << std::endl;

    return 0;
}
