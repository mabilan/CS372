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

    SECTION("Testing single parameter sum return"){
        REQUIRE(Add("1") == 1);
    }

    SECTION("Testing double parameter sum return"){
        REQUIRE(Add("1,2") == 3);
    }

    SECTION("Test for indeterminate amount of numbers entered"){
        REQUIRE(Add("1,2,3") == 6);
        REQUIRE(Add("1,2,3,4") == 10);
        REQUIRE(Add("1,2,3,4,5") == 15);
    }

    SECTION("Allow ',' and '\\n' to delimit entered numbers"){
        REQUIRE(Add("1,2,3") == 6);
        REQUIRE(Add("1\n2\n3") == 6);
        REQUIRE(Add("1\n2,3") == 6);
        REQUIRE(Add("1\n4,4,\n10")==19);
    }

    SECTION("Allow for custom delimiter by preceding parameters with '//[delimiter]\\n'"){
        REQUIRE(Add("//;\n1;2;3")==6);
        REQUIRE(Add("//a\n1a2a3")==6);
    }

    SECTION("Negative values should throw an exception"){
        CHECK_THROWS_WITH(Add("-1"),"Negative values are not allowed [-1]");
        CHECK_THROWS_WITH(Add("-1,-2"),"Negative values are not allowed [-1,-2]");
        CHECK_THROWS_WITH(Add("-1,2,-3"),"Negative values are not allowed [-1,-3]");
    }
}