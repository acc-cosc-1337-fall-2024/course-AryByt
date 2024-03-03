#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("GetGCContentTest - Example 1", "[get_gc_content]") {
    REQUIRE(get_gc_content("AGCTATAG") == 0.375);
}

TEST_CASE("GetGCContentTest - Example 2", "[get_gc_content]") {
    REQUIRE(get_gc_content("CGCTATAG") == 0.5);
}

TEST_CASE("GetDNAComplementTest - Example 1", "[get_dna_complement]") {
    REQUIRE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
}

TEST_CASE("GetDNAComplementTest - Example 2", "[get_dna_complement]") {
    REQUIRE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");
}
