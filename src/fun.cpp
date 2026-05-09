// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cmath>

unsigned int faStr1(const char *str) {
    unsigned int wordsFound = 0;
    int index = 0;
    while (str[index] != '\0') {
        while (str[index] == ' ') {
            index++;
        }
        if (str[index] == '\0') {
            break;
        }
        bool hasNumbers = false;
        while (str[index] != ' ' && str[index] != '\0') {
            if (str[index] >= '0' && str[index] <= '9') {
                hasNumbers = true;
            }
            index++;
        }
        if (!hasNumbers) {
            wordsFound++;
        }
    }
    return wordsFound;
}

unsigned int faStr2(const char *str) {
    unsigned int correctWords = 0;
    int index = 0;
    while (str[index] != '\0') {
        while (str[index] == ' ') {
            index++;
        }
        if (str[index] == '\0') {
            break;
        }
        bool isValid = false;
        if (str[index] >= 'A' && str[index] <= 'Z') {
            isValid = true;
        }
        index++;
        while (str[index] != ' ' && str[index] != '\0') {
            if (str[index] < 'a' || str[index] > 'z') {
                isValid = false;
            }
            index++;
        }
        if (isValid) {
            correctWords++;
        }
    }
    return correctWords;
}

unsigned int faStr3(const char *str) {
    int totalLetters = 0;
    int wordsCount = 0;
    int index = 0;
    while (str[index] != '\0') {
        while (str[index] == ' ') {
            index++;
        }
        if (str[index] == '\0') {
            break;
        }
        wordsCount++;
        while (str[index] != ' ' && str[index] != '\0') {
            totalLetters++;
            index++;
        }
    }
    if (wordsCount == 0) {
        return 0;
    }
    return std::round(static_cast<double>(totalLetters) / wordsCount);
}
