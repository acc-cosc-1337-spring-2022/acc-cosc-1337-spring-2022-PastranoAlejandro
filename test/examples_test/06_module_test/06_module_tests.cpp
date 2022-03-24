#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Account get balance")
{
	BankAccount account(500);
	REQUIRE(500 == account.get_balance());
}
TEST_CASE("Test Account deposit ")
{
	BankAccount account(500);
	account.deposit(50);
	REQUIRE(550 == account.get_balance());
}
TEST_CASE("Test account withdraw")
{
	BankAccount account(500);
	account.withdraw(50);
	REQUIRE(450 == account.get_balance());
}