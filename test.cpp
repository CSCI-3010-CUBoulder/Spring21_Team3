#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Factorial are computed", "[factorial]"){
    REQUIRE(Factorial(0)==0);
    REQUIRE(Factorial(1)==1);
}