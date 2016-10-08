#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "myclass.hpp"

SCENARIO( "Smoke Test", "[myclass]" ) {

    GIVEN( "A smoke test" ) {
        MyClass myclass;

        WHEN( "we start" ) {
            THEN( "make smoke test" ) {
                REQUIRE( 1 == 1 );
            }
        }
    }
}
