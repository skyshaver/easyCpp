#include "catch.hpp"
#include "../warm_up_1.cpp"


// sleepIn
// The parameter weekday is true if it is a weekday, 
// and the parameter vacation is true if we are on vacation. 
// We sleep in if it is not a weekday or we're on vacation. Return true if we sleep in.
// bool sleepIn(bool weekday, bool vacation)

TEST_CASE( "WU1_sleepIn", "[sleepIn]" ) 
{
    REQUIRE( sleepIn(false, false) == true );
    REQUIRE( sleepIn(false, true) == true );
    REQUIRE( sleepIn(true, false) == false );
    REQUIRE( sleepIn(true, true) == true );
}


// monkeyTrouble
// We have two monkeys, a and b, and the parameters aSmile and bSmile indicate if each is smiling. 
// We are in trouble if they are both smiling or if neither of them is smiling. Return true if we are in trouble.
// monkeyTrouble(true, true) → true
// monkeyTrouble(false, false) → true
// monkeyTrouble(true, false) → false
// bool monkeyTrouble(bool aSmile, bool bSmile) 

TEST_CASE("WU1_moneyTrouble", "[monkeyTrouble]")
{
	REQUIRE( monkeyTrouble(false, false) == true );
	REQUIRE( monkeyTrouble(false, true) == false );
	REQUIRE( monkeyTrouble(true, false) == false );
	REQUIRE( monkeyTrouble(true, true) == true );

}


// sumDouble
// Given two int values, return their sum. Unless the two values are the same, then return double their sum.
// sumDouble(1, 2) → 3	
// sumDouble(3, 2) → 5	
// sumDouble(2, 2) → 8	
// sumDouble(-1, 0) → -1
// sumDouble(3, 3) → 12
// sumDouble(0, 0) → 0	
// sumDouble(0, 1) → 1	
// sumDouble(3, 4) → 7
// int sumDouble(int a, int b)

TEST_CASE("WU1_sumDouble", "[sumDouble]")
{
	REQUIRE( sumDouble(1, 2) == 3);
	REQUIRE( sumDouble(3, 2) == 5);
	REQUIRE( sumDouble(2, 2) == 8);
	REQUIRE( sumDouble(-1, 0) == -1);
	REQUIRE( sumDouble(3, 3) == 12);
	REQUIRE( sumDouble(0, 0) == 0);
	REQUIRE( sumDouble(0, 1) == 1);
	REQUIRE( sumDouble(3, 4) == 7);
}


// diff21
// Given an int n, return the absolute difference between n and 21, except return double the absolute difference if n is over 21.
// diff21(19) → 2	
// diff21(10) → 11	
// diff21(21) → 0	
// diff21(22) → 2	
// diff21(25) → 8	
// diff21(30) → 18	
// diff21(0) → 21	
// diff21(1) → 20	
// diff21(2) → 19	
// diff21(-1) → 22	
// diff21(-2) → 23	
// diff21(50) → 58

TEST_CASE("WU1_diff21", "[diff21]")
{
	REQUIRE(diff21(19) == 2);
	REQUIRE(diff21(10) == 11);
	REQUIRE(diff21(21) == 0);
	REQUIRE(diff21(22) == 2);
	REQUIRE(diff21(25) == 8);
	REQUIRE(diff21(30) == 18);
	REQUIRE(diff21(0) == 21);
	REQUIRE(diff21(1) == 20);
	REQUIRE(diff21(2) == 19);
	REQUIRE(diff21(-1) == 22);
	REQUIRE(diff21(-2) == 23);
	REQUIRE(diff21(50) == 58);
}


// parrotTrouble
// We have a loud talking parrot. The "hour" parameter is the current hour time in the range 0..23.
// We are in trouble if the parrot is talking and the hour is before 7 or after 20. Return true if we are in trouble.
// parrotTrouble(true, 6) → true	
// parrotTrouble(true, 7) → false	
// parrotTrouble(false, 6) → false	
// parrotTrouble(true, 21) → true	
// parrotTrouble(false, 21) → false
// parrotTrouble(false, 20) → false
// parrotTrouble(true, 23) → true	
// parrotTrouble(false, 23) → false
// parrotTrouble(true, 20) → false	
// parrotTrouble(false, 12) → false

TEST_CASE("WU1_parrotTrouble", "[parrotTrouble]")
{
	REQUIRE(parrotTrouble(true, 6) == true);
	REQUIRE(parrotTrouble(true, 7) == false);
	REQUIRE(parrotTrouble(false, 6) == false);
	REQUIRE(parrotTrouble(true, 21) == true);
	REQUIRE(parrotTrouble(false, 21) == false);
	REQUIRE(parrotTrouble(false, 20) == false);
	REQUIRE(parrotTrouble(true, 23) == true);
	REQUIRE(parrotTrouble(false, 23) == false);
	REQUIRE(parrotTrouble(true, 20) == false);
	REQUIRE(parrotTrouble(false, 12) == false);
}


// makes10
// Given 2 ints, a and b, return true if one if them is 10 or if their sum is 10.
// makes10(9, 10) → true	
// makes10(9, 9) → false	
// makes10(1, 9) → true	
// makes10(10, 1) → true	
// makes10(10, 10) → true	
// makes10(8, 2) → true	
// makes10(8, 3) → false	
// makes10(10, 42) → true	
// makes10(12, -2) → true

TEST_CASE("WU1_makes10", "[makes10]")
{
	REQUIRE(makes10(9, 10) == true);
	REQUIRE(makes10(9, 9) == false);
	REQUIRE(makes10(1, 9) == true);
	REQUIRE(makes10(10, 1) == true);
	REQUIRE(makes10(10, 10) == true);
	REQUIRE(makes10(8, 2) == true);
	REQUIRE(makes10(8, 3) == false);
	REQUIRE(makes10(10, 42) == true);
	REQUIRE(makes10(12, -2) == true);
}


// nearHundred
// Given an int n, return true if it is within 10 of 100 or 200. Note: std::abs(num) computes the absolute value of a number.
// nearHundred(93) → true	
// nearHundred(90) → true	
// nearHundred(89) → false	
// nearHundred(110) → true	
// nearHundred(111) → false	
// nearHundred(121) → false	
// nearHundred(-101) → false	
// nearHundred(-209) → false	
// nearHundred(190) → true	
// nearHundred(209) → true	
// nearHundred(0) → false	
// nearHundred(5) → false	
// nearHundred(-50) → false
// nearHundred(191) → true	
// nearHundred(189) → false
// nearHundred(200) → true	
// nearHundred(210) → true	
// nearHundred(211) → false
// nearHundred(290) → false

TEST_CASE("WU1_nearHundred", "[nearHundred]")
{
	REQUIRE(nearHundred(93) == true);
	REQUIRE(nearHundred(90) == true);
	REQUIRE(nearHundred(89) == false);
	REQUIRE(nearHundred(110) == true);
	REQUIRE(nearHundred(111) == false);
	REQUIRE(nearHundred(121) == false);
	REQUIRE(nearHundred(-101) == false);
	REQUIRE(nearHundred(-209) == false);
	REQUIRE(nearHundred(190) == true);
	REQUIRE(nearHundred(209) == true);
	REQUIRE(nearHundred(0) == false);
	REQUIRE(nearHundred(5) == false);
	REQUIRE(nearHundred(-50) == false);
	REQUIRE(nearHundred(191) == true);
	REQUIRE(nearHundred(189) == false);
	REQUIRE(nearHundred(200) == true);
	REQUIRE(nearHundred(210) == true);
	REQUIRE(nearHundred(211) == false);
	REQUIRE(nearHundred(290) == false);

}


// posNeg
// Given 2 int values, return true if one is negative and one is positive. 
// Except if the parameter "negative" is true, then return true only if both are negative.
// posNeg(1, -1, false) → true	
// posNeg(-1, 1, false) → true	
// posNeg(-4, -5, true) → true	
// posNeg(-4, -5, false) → false	
// posNeg(-4, 5, false) → true	
// posNeg(-4, 5, true) → false	
// posNeg(1, 1, false) → false	
// posNeg(-1, -1, false) → false	
// posNeg(1, -1, true) → false	
// posNeg(-1, 1, true) → false	
// posNeg(1, 1, true) → false	
// posNeg(-1, -1, true) → true	
// posNeg(5, -5, false) → true	
// posNeg(-6, 6, false) → true	
// posNeg(-5, -6, false) → false	
// posNeg(-2, -1, false) → false	
// posNeg(1, 2, false) → false
// posNeg(-5, 6, true) → false
// posNeg(-5, -5, true) → true

TEST_CASE("WU1_posNeg", "[posNeg]")
{
	REQUIRE(posNeg(1, -1, false) == true);
	REQUIRE(posNeg(-1, 1, false) == true);
	REQUIRE(posNeg(-4, -5, true) == true);
	REQUIRE(posNeg(-4, -5, false) == false);
	REQUIRE(posNeg(-4, 5, false) == true);
	REQUIRE(posNeg(-4, 5, true) == false);
	REQUIRE(posNeg(1, 1, false) == false);
	REQUIRE(posNeg(-1, -1, false) == false);
	REQUIRE(posNeg(1, -1, true) == false);
	REQUIRE(posNeg(-1, 1, true) == false);
	REQUIRE(posNeg(1, 1, true) == false);
	REQUIRE(posNeg(-1, -1, true) == true);
	REQUIRE(posNeg(5, -5, false) == true);
	REQUIRE(posNeg(-6, 6, false) == true);
	REQUIRE(posNeg(-5, -6, false) == false);
	REQUIRE(posNeg(-2, -1, false) == false);
	REQUIRE(posNeg(1, 2, false) == false);
	REQUIRE(posNeg(-5, 6, true) == false);
	REQUIRE(posNeg(-5, -5, true) == true);

}


// notString
// Given a string, return a new string where "not " has been added to the front.
// However, if the string already begins with "not", return the string unchanged. 
// Note: use == to compare 2 strings.
// use .substr(startIndex, length) to get part of a string,
// std::string hello = "Hello";
// hello.substr(0,3); // returns "Hel"
// notString("candy") → "not candy"	
// notString("x") → "not x"	
// notString("not bad") → "not bad"	
// notString("bad") → "not bad"	
// notString("not") → "not"	
// notString("is not") → "not is not"
// notString("no") → "not no"

TEST_CASE("WU1_notString", "[notString]")
{
	REQUIRE(notString("candy") == "not candy");
	REQUIRE(notString("x") == "not x");
	REQUIRE(notString("not bad") == "not bad");
	REQUIRE(notString("bad") == "not bad");
	REQUIRE(notString("not") == "not");
	REQUIRE(notString("is not") == "not is not");
	REQUIRE(notString("no") == "not no");
}


// missingChar
// Given a non-empty string and an int n, return a new string where the char at index n has been removed. 
// The value of n will be a valid index of a char in the original string 
// (i.e. n will be in the range 0..str.length()-1 inclusive).
// .substr(n) will go from n to the end of the string
// missingChar("kitten", 1) → "ktten"	
// missingChar("kitten", 0) → "itten"	
// missingChar("kitten", 4) → "kittn"	
// missingChar("Hi", 0) → "i"
// missingChar("Hi", 1) → "H"	
// missingChar("code", 0) → "ode"	
// missingChar("code", 1) → "cde"	
// missingChar("code", 2) → "coe"	
// missingChar("code", 3) → "cod"	
// missingChar("chocolate", 8) → "chocolat"

TEST_CASE("WU1_missingChar", "[missingChar]")
{
	REQUIRE(missingChar("kitten", 1) == "ktten");
	REQUIRE(missingChar("kitten", 0) == "itten");
	REQUIRE(missingChar("kitten", 4) == "kittn");
	REQUIRE(missingChar("Hi", 0) == "i");
	REQUIRE(missingChar("Hi", 1) == "H");
	REQUIRE(missingChar("code", 0) == "ode");
	REQUIRE(missingChar("code", 1) == "cde");
	REQUIRE(missingChar("code", 2) == "coe");
	REQUIRE(missingChar("code", 3) == "cod");
	REQUIRE(missingChar("chocolate", 8) == "chocolat");
}


// frontBack
// Given a string, return a new string where the first and last chars have been exchanged.
// frontBack("code") → "eodc"	
// frontBack("a") → "a"	
// frontBack("ab") → "ba"	
// frontBack("abc") → "cba"	
// frontBack("") → ""	""	
// frontBack("Chocolate") → "ehocolatC"	
// frontBack("aavJ") → "Java"	
// frontBack("hello") → "oellh"	

TEST_CASE("WU1_frontBack", "[frontBack]")
{
	REQUIRE(frontBack("code") == "eodc");
	REQUIRE(frontBack("a") == "a");
	REQUIRE(frontBack("ab") == "ba");
	REQUIRE(frontBack("abc") == "cba");
	REQUIRE(frontBack("") == "");
	REQUIRE(frontBack("Chocolate") == "ehocolatC");
	REQUIRE(frontBack("Stroustrup") == "ptroustruS");
	REQUIRE(frontBack("hello") == "oellh");
}


// front3
// Given a string, we'll say that the front is the first 3 chars of the string.
// If the string length is less than 3, the front is whatever is there. Return a new string which is 3 copies of the front.
// front3("Java") → "JavJavJav"	
// front3("Chocolate") → "ChoChoCho"
// front3("abc") → "abcabcabc"	
// front3("abcXYZ") → "abcabcabc"
// front3("ab") → "ababab"	
// front3("a") → "aaa"	"aaa"
// front3("") → ""	""

TEST_CASE("WU1_front3", "[front3]")
{
	REQUIRE(front3("Bjarne") == "BjaBjaBja");
	REQUIRE(front3("Chocolate") == "ChoChoCho");
	REQUIRE(front3("abc") == "abcabcabc");
	REQUIRE(front3("abcXYZ") == "abcabcabc");
	REQUIRE(front3("ab") == "ababab");
	REQUIRE(front3("a") == "aaa");
	REQUIRE(front3("") == "");
}


// backAround
// Given a string, take the last char and return a new string with the last char added at the front and back,
// so "cat" yields "tcatt". The original string will be length 1 or more.
// backAround("cat") → "tcatt"	
// backAround("Hello") → "oHelloo"	
// backAround("a") → "aaa"	
// backAround("abc") → "cabcc"
// backAround("read") → "dreadd"
// backAround("boo") → "obooo"

TEST_CASE("WU1_backAround", "[backAround]")
{
	REQUIRE(backAround("cat") == "tcatt");
	REQUIRE(backAround("Hello") == "oHelloo");
	REQUIRE(backAround("a") == "aaa");
	REQUIRE(backAround("abc") == "cabcc");
	REQUIRE(backAround("read") == "dreadd");
	REQUIRE(backAround("boo") == "obooo");
}


// or35
// Return true if the given non-negative number is a multiple of 3 or a multiple of 5. 
// Use the % "mod" operator
// or35(3) → true	
// or35(10) → true	
// or35(8) → false	
// or35(15) → true	
// or35(5) → true	
// or35(9) → true	
// or35(4) → false	
// or35(7) → false	
// or35(6) → true	
// or35(17) → false
// or35(18) → true	
// or35(29) → false
// or35(20) → true	
// or35(21) → true	
// or35(22) → false	
// or35(45) → true		
// or35(99) → true		
// or35(100) → true	
// or35(101) → false
// or35(121) → false
// or35(122) → false
// or35(123) → true

TEST_CASE("WU1_or35", "[or35]")
{
	REQUIRE(or35(3) == true);
	REQUIRE(or35(10) == true);
	REQUIRE(or35(8) == false);
	REQUIRE(or35(15) == true);
	REQUIRE(or35(5) == true);
	REQUIRE(or35(9) == true);	
	REQUIRE(or35(4) ==false);
	REQUIRE(or35(7) ==false);
	REQUIRE(or35(6) ==true);	
	REQUIRE(or35(17) == false);
	REQUIRE(or35(18) == true);
	REQUIRE(or35(29) == false);
	REQUIRE(or35(20) == true);
	REQUIRE(or35(21) == true);
	REQUIRE(or35(22) == false);	
	REQUIRE(or35(45) == true);	
	REQUIRE(or35(99) == true);	
	REQUIRE(or35(100)== true);	
	REQUIRE(or35(101)== false);
	REQUIRE(or35(121)== false);
	REQUIRE(or35(122)== false);
	REQUIRE(or35(123)== true);
}


// front22
// Given a string, take the first 2 chars and return the string with the 2 chars added at both the front and back, 
// so "kitten" yields"kikittenki". If the string length is less than 2, use whatever chars are there.
// front22("kitten") → "kikittenki"	
// front22("Ha") → "HaHaHa"	
// front22("abc") → "ababcab"	
// front22("ab") → "ababab"	
// front22("a") → "aaa"
// front22("") → ""
// front22("Logic") → "LoLogicLo"

TEST_CASE("WU1_front22", "[front22]")
{
	REQUIRE(front22("kitten") == "kikittenki");
	REQUIRE(front22("Ha") == "HaHaHa");
	REQUIRE(front22("abc") == "ababcab");
	REQUIRE(front22("ab") == "ababab");
	REQUIRE(front22("a") == "aaa");
	REQUIRE(front22("") == "");
	REQUIRE(front22("Logic") == "LoLogicLo");
}


// startHi
// Given a string, return true if the string starts with "hi" and false otherwise.
// startHi("hi there") → true		
// startHi("hi") → true	
// startHi("hello hi") → false	
// startHi("he") → false	
// startHi("h") → false	
// startHi("") → false	
// startHi("ho hi") → false
// startHi("hi ho") → true	

TEST_CASE("WU1_startHi", "[startHi]")
{
	REQUIRE(startHi("hi there") == true);
	REQUIRE(startHi("hi") == true);
	REQUIRE(startHi("hello hi") == false);
	REQUIRE(startHi("he") == false);
	REQUIRE(startHi("h") == false);
	REQUIRE(startHi("") == false);
	REQUIRE(startHi("ho hi") == false);
	REQUIRE(startHi("hi ho") == true);
}

// icyHot
// Given two temperatures, return true if one is less than 0 and the other is greater than 100.
// icyHot(120, -1) → true	
// icyHot(-1, 120) → true	
// icyHot(2, 120) → false	
// icyHot(-1, 100) → false	
// icyHot(-2, -2) → false	
// icyHot(120, 120) → false

TEST_CASE("WU1_icyHot", "[icyHot]")
{
	REQUIRE(icyHot(120, -1) == true);
	REQUIRE(icyHot(-1, 120) == true);
	REQUIRE(icyHot(2, 120) == false);
	REQUIRE(icyHot(-1, 100) == false);
	REQUIRE(icyHot(-2, -2) == false);
	REQUIRE(icyHot(120, 120) == false);
}


// in1020
// Given 2 int values, return true if either of them is in the range 10..20 inclusive.
// in1020(12, 99) → true	
// in1020(21, 12) → true	
// in1020(8, 99) → false	
// in1020(99, 10) → true	
// in1020(20, 20) → true	
// in1020(21, 21) → false	
// in1020(9, 9) → false	

TEST_CASE("WU1_in1020","[in1020]")
{
	REQUIRE(in1020(12, 99) == true);
	REQUIRE(in1020(21, 12) == true);
	REQUIRE(in1020(8, 99) == false);
	REQUIRE(in1020(99, 10) == true);
	REQUIRE(in1020(20, 20) == true);
	REQUIRE(in1020(21, 21) == false);
	REQUIRE(in1020(9, 9) == false);
}





