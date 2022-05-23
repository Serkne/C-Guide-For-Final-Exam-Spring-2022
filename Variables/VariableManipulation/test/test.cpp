// Indicates that the `main` function is need to be set.
// Add this directive only in a one test file!
#define CATCH_CONFIG_MAIN

#include <catch.hpp>

// Headers of objects that student should implement:
int changeValue(int a, int b);

// Tests:
// todo: replace this with an actual test
TEST_CASE("Values_are_changed", "[changeValueTest]") {
int number1, number2, count = 0;

    while(count <= 10){
        number1 = rand();
        number2 = rand();
        REQUIRE(changeValue(number1, number2)
        == number2);
        count += 1;
    }
}