// TDDfunctions.h
// Created by mabilan on 3/14/2019.
// This file is for the HW2 TDD Kata exercise.
// This is for TDD Kata from: https://osherove.com/tdd-kata-1

#ifndef HW2_TDDFUNCTIONS_H
#define HW2_TDDFUNCTIONS_H

#include <string>
#include <sstream>
#include <vector>

int Add(const std::string &parameterList){
    int sum = 0;
    std::istringstream stringStream(parameterList);
    std::string token;
    char delimiter = ',';
    std::vector<int> badValues;
    bool willThrow = false;

    while(std::getline(stringStream, token)){
        if (token.length()==3){
            if(token.substr(0,2)=="//") {
                delimiter = token[2];
                continue;
            }
        }

        std::istringstream tempStream(token);
        while(std::getline(tempStream, token, delimiter)){
            int tempVal = std::stoi(token);

            if(tempVal<0){
                badValues.push_back(tempVal);
                willThrow = true;
            }

            sum += tempVal;
        }
    }
    if (willThrow){
        std::string message = "Negative values are not allowed [ ";
        for(auto value : badValues){
            message += std::to_string(value) + " ";
        }
        message += "]";
        throw std::runtime_error(message);
    }

    return sum;
}

#endif //HW2_TDDFUNCTIONS_H
