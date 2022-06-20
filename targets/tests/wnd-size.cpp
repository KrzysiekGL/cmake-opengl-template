#include <catch2/catch_test_macros.hpp>

#include <example-lib.hpp>

TEST_CASE("Window tests", "[example-lib]") {
	exlib::Window w(600, 400, "Test Window");

	auto size = w.getWindowSize();

	REQUIRE(size.first==600);
	REQUIRE(size.second==400);
}
