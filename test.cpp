#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>
#include <random>

TEST_CASE("Factorials are computed","[factorial]"){
    REQUIRE( Factorial(0) == 1);
    REQUIRE( Factorial(1) == 1);
    REQUIRE( Factorial(2) == 2);
    REQUIRE( Factorial(10) == 3628800);
}

TEST_CASE("incrementing values in integer vector" , "[addN]"){
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    
    SECTION("checking with +ve n"){
        int n=5;
        std::vector<int> res = AddN(v,n);
        srand(time(NULL));
        int random = rand()%v.size();
        REQUIRE(v.size() == res.size());
        REQUIRE( res[0] == 6);
        REQUIRE( res[v.size()-1] == 15);
        REQUIRE( res[random] == v[random]+n);
    }
    SECTION("checking with -ve n"){
        int n=-5;
        std::vector<int> res = AddN(v,n);
        srand(time(NULL));
        int random = rand()%v.size();
        REQUIRE(v.size() == res.size());
        REQUIRE( res[0] == -4);
        REQUIRE( res[v.size()-1] == 5);
        REQUIRE( res[random] == v[random]+n);
    }    
}

TEST_CASE("Incrementing valeus in double vector", "[addDouble]") {
    std::vector<double> v{1.2, 3.1, 4.5, 8.9, 3, 6.2, 7.2, 8.6, 3.2, 10.0};

    SECTION("Checking with positive n") {
        double n = 5.0;
        std::vector<double> res = AddN(v, n);
        REQUIRE(v.size() == res.size());
        REQUIRE( res[0] == 6.2);
    }
    SECTION("Checking with negative n") {
        double n = -5.0;
        std::vector<double> res = AddN(v, n);
        REQUIRE(v.size() == res.size());
        REQUIRE( res[0] == -3.8); 
    }

}