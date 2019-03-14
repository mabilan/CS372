// TDDTests.cpp
// Created by mabilan on 3/14/2019.
// This file is a list of tests for a TDD Kata exercise.
// This is for TDD Kata from: https://osherove.com/tdd-kata-1

#include "catch.hpp"
#include "TDDfunctions.h"


TEST_CASE("Testing for TDD Kata - String Calculator") {
    SECTION("Return sum of 0 string numbers"){
        REQUIRE(Add("") == 0);
    }
}