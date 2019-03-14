// TDDfunctions.h
// Created by mabilan on 3/14/2019.
// This file is for the HW2 TDD Kata exercise.
// This is for TDD Kata from: https://osherove.com/tdd-kata-1

#ifndef HW2_TDDFUNCTIONS_H
#define HW2_TDDFUNCTIONS_H

#include <string>
#include <iostream>
#include <sstream>

int Add(const std::string &parameterList){
    int sum = 0;
    std::istringstream stringStream(parameterList);
    std::string token;

    while(false){
        sum += std::stoi(token);
    }
    return sum;
}

#endif //HW2_TDDFUNCTIONS_H
