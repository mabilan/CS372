// TDDfunctions.h
// Created by mabilan on 3/14/2019.
// This file is for the HW2 TDD Kata exercise.
// This is for TDD Kata from: https://osherove.com/tdd-kata-1

#ifndef HW2_TDDFUNCTIONS_H
#define HW2_TDDFUNCTIONS_H

#include <string>

int Add(const std::string &paramList){
    return paramList.empty() ? 0 : std::stoi(paramList);
}

#endif //HW2_TDDFUNCTIONS_H
