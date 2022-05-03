#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"
#include "ref_pointers.h"
#include "vector.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test references and pointer paramters")
{
	int num1 = 1;
	int num2 = 2;
	ref_ptr(num1, &num2);

	REQUIRE(num1 == 10);
	REQUIRE(num2 == 20);

}

TEST_CASE("Test initalize vector")
{
	Vector v(3);//constructor creates dynamic array
	
	REQUIRE(v.Size() == 3);
	//when function exits, dynamic array is cleared/deleted
}

TEST_CASE("Test Vector memberwise copy for stack and pointer class variables")
{
	Vector v(3);
	Vector v1 = v;
 
	

	
}

TEST_CASE("Test my vector size function with memberwise/stack/pointer privat vars copy")//trying to see if changes made to v1 changes v
{
	Vector v(3);//our constructor -- Vector(std::size_t s);

	Vector v1 = v;//copy constructor -- Vector(const Vector& v); because itll fix the memory issue where a copy was changing value


	REQUIRE(v1[0] == 0);

	v1[0] = 10;


	REQUIRE(v1[0] == 0);




}