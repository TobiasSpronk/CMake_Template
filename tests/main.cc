#define CATCH_CONFIG_MAIN

#include "my_lib.h"
#include <catch2/catch.hpp>
#include <string>

TEST_CASE("Factorials are computed run 1", "[factorial]")
{
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}

TEST_CASE("Print_Hello World is evaluated", "[factorial]")
{
    REQUIRE(print_Hello_World() == std::string("Hello World"));
}
