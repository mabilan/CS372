// TDDfunctions.h
// Created by mabilan on 3/14/2019.
// This file is for the HW2 TDD Kata exercise.
// This is for TDD Kata from: https://osherove.com/tdd-kata-1

#ifndef HW2_TDDFUNCTIONS_H
#define HW2_TDDFUNCTIONS_H

#include <string>

int Add(const std::string &param1="", const std::string &param2=""){
    int term1, term2;

    if (param1.empty()){
        term1 = 0;
    }
    else{
        term1 = std::stoi(param1);
    }

    int sum = term1;

    return sum;
}

#endif //HW2_TDDFUNCTIONS_H
