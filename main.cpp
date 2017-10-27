/**
 *  @author Stephen Gilbert
 *  @file main.cpp
 *  @version CS 150 Homework 7 Testing
 */
#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include <exception>
using namespace std;

#include "cs150check.h"

#include "h07.h"

/**
 * Run your program's tests
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for calculating some check-digits //////////////////////
	beginFunctionTest("Calculate some checkDigits"); // function name

	assertEquals(2, checkDigit(90621));
	assertEquals(0, checkDigit(92667));
	assertEquals(9, checkDigit(92659));
	assertEquals(4, checkDigit(92627));
	assertEquals(3, checkDigit(20500));

	// Some tests with only one number, so you can separate summing the digits
	// from calculating the check digit
	assertEquals(9, checkDigit(1));
	assertEquals(8, checkDigit(2));
	assertEquals(7, checkDigit(3));
	assertEquals(6, checkDigit(4));
	assertEquals(5, checkDigit(5));
	assertEquals(4, checkDigit(6));
	assertEquals(3, checkDigit(7));
	assertEquals(2, checkDigit(8));
	assertEquals(1, checkDigit(9));

    endFunctionTest(); // end

    /////// Tests for converting some zip codes. //////////////////////
	beginFunctionTest("Check codeDigit(). Should check for all digits"); // function name

	assertEquals(":::||", codeForDigit(1));
	assertEquals("::|:|", codeForDigit(2));
	assertEquals("::||:", codeForDigit(3));
    assertEquals(":|::|", codeForDigit(4));
    assertEquals(":|:|:", codeForDigit(5));
    assertEquals(":||::", codeForDigit(6));
    assertEquals("|:::|", codeForDigit(7));
    assertEquals("|::|:", codeForDigit(8));
    assertEquals("|:|::", codeForDigit(9));
    assertEquals("||:::", codeForDigit(0));

	// Write the rest yourself

    endFunctionTest(); // end


   /////// Tests for the barCode function //////////////////////
    beginFunctionTest("Checking the barCode() function."); // function name

    assertEquals("||:|::||::::||::::|:|:::||::|:||", barCode(90621)); // example from handout
    assertEquals("||:|::::|:|:||:::||::|:::|||:::|", barCode(92667)); // my house
    assertEquals("||:|::::|:|:||:::|:|:|:|::|:|::|", barCode(92659)); // the Chart House in NB
    assertEquals("||:|::::|:|:||::::|:||:::|:|::||", barCode(92627)); // OCC
    assertEquals("|::|:|||::::|:|:||:::||:::::||:|", barCode(20500)); // the White House

    endFunctionTest(); // end

   ///////// End all test runs /////////////////////////
    endTests();

}

