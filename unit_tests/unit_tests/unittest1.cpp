#include "stdafx.h"
#include "CppUnitTest.h"

#include "catch.hpp"
#include "singelton.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_tests
{		
	TEST_CASE("before_mar")
	{
		string n = singelton::instance()->get_name();
		REQUIRE(n == "no wife still...");
	};

	TEST_CASE("after_mar")
	{
	    singelton::instance()->set_name("Sara");
		string n = singelton::instance()->get_name();
		REQUIRE(n == "Sara");
	};

}