#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "variables.h"
#include "../src/homework/02_expressions/expressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

//Test case scenario for sales tax
TEST_CASE("Test get sales tax")
{
	REQUIRE(get_sales_tax_amount(10) == 0.675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}


//Test case scenario for tip amount
TEST_CASE("Test get tip amount")
{
	REQUIRE(get_tip_amount(20,0.15) == 3);
	REQUIRE(get_tip_amount(20,0.20) == 4);
}