#include <cstdlib>
#include <string>

/********************************************************
 _       _____    ____  __  ___   __  ______  _____    _______
| |     / /   |  / __ \/  |/  /  / / / / __ \/ ___/   <  / / /
| | /| / / /| | / /_/ / /|_/ /  / / / / /_/ /\__ \    / / / / 
| |/ |/ / ___ |/ _, _/ /  / /  / /_/ / ____/___/ /   / /_/_/  
|__/|__/_/  |_/_/ |_/_/  /_/   \____/_/    /____/   /_(_|_)  

*********************************************************/


// sleepIn
// The parameter weekday is true if it is a weekday, 
// and the parameter vacation is true if we are on vacation. 
// We sleep in if it is not a weekday or we're on vacation. Return true if we sleep in.

bool sleepIn(bool weekday, bool vacation)
{
	return (!weekday) || vacation;
}


// monkeyTrouble
// We have two monkeys, a and b, and the parameters aSmile and bSmile indicate if each is smiling. 
// We are in trouble if they are both smiling or if neither of them is smiling. Return true if we are in trouble.
// ** Examples **
// monkeyTrouble(true, true) → true
// monkeyTrouble(false, false) → true
// monkeyTrouble(true, false) → false

bool monkeyTrouble(bool aSmile, bool bSmile) 
{
 	return (aSmile && bSmile) || (!aSmile && !bSmile); 
}


// sumDouble
// Given two int values, return their sum. Unless the two values are the same, then return double their sum.
// ** Examples **
// sumDouble(1, 2) → 3	
// sumDouble(3, 2) → 5	
// sumDouble(2, 2) → 8	
// sumDouble(-1, 0) → -1
// sumDouble(3, 3) → 12
// sumDouble(0, 0) → 0	
// sumDouble(0, 1) → 1	
// sumDouble(3, 4) → 7

int sumDouble(int a, int b)
{
	if(a == b){ return (a + b) * 2; }

	return a + b;
}


// diff21
// Given an int n, return the absolute difference between n and 21, except return double the absolute difference if n is over 21.
// ** Examples **
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

int diff21(int n) 
{
	int t = 21 - n;
  	if(n > 21){ t *= 2; }
  	return t < 0  ? t * - 1 : t * 1;  
}


// parrotTrouble
// We have a loud talking parrot. The "hour" parameter is the current hour time in the range 0..23.
// We are in trouble if the parrot is talking and the hour is before 7 or after 20. Return true if we are in trouble.
// ** Examples **
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

bool parrotTrouble(bool talking, int hour) 
{
   return talking && (hour < 7 || hour > 20);
}


// makes10
// Given 2 ints, a and b, return true if one if them is 10 or if their sum is 10.
// ** Examples **
// makes10(9, 10) → true	
// makes10(9, 9) → false	
// makes10(1, 9) → true	
// makes10(10, 1) → true	
// makes10(10, 10) → true	
// makes10(8, 2) → true	
// makes10(8, 3) → false	
// makes10(10, 42) → true	
// makes10(12, -2) → true

bool makes10(int a, int b)
{	
	return (a == 10 || b == 10) || (a + b == 10);
}


// nearHundred
// Given an int n, return true if it is within 10 of 100 or 200. Note: std::abs(num) computes the absolute value of a number.
// ** Examples **
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

bool nearHundred(int n) 
{	
	return (std::abs(100 - n) <= 10) || (std::abs(200 - n) <= 10);
}


// posNeg
// Given 2 int values, return true if one is negative and one is positive. 
// Except if the parameter "negative" is true, then return true only if both are negative.
// ** Examples **
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

bool posNeg(int a, int b, bool negative) 
{
	return (!negative && ((a < 0 && b >= 0) || (a >= 0 && b < 0) )) || (negative && (a < 0 && b < 0));
}


// notString
// Given a string, return a new string where "not " has been added to the front.
// However, if the string already begins with "not", return the string unchanged. 
// Note: use == to compare 2 strings.
// use .substr(startIndex, length) to get part of a string,
// std::string hello = "Hello";
// hello.substr(0,3); // returns "Hel"
// ** Examples **
// notString("candy") → "not candy"	
// notString("x") → "not x"	
// notString("not bad") → "not bad"	
// notString("bad") → "not bad"	
// notString("not") → "not"	
// notString("is not") → "not is not"
// notString("no") → "not no"

std::string notString(std::string str) 
{
	if(str.size() >= 3 && (str.substr(0,3) == "not")){ return str; }
	return "not " + str;
}


// missingChar
// Given a non-empty string and an int n, return a new string where the char at index n has been removed. 
// The value of n will be a valid index of a char in the original string 
// (i.e. n will be in the range 0..str.length()-1 inclusive).
// .substr(n) will go from n to the end of the string
// ** Examples **
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

std::string missingChar(std::string str, int n) 
{
	std::string front = str.substr(0, n);
  	std::string back = str.substr(n+1);
  	return front + back;
}


// frontBack
// Given a string, return a new string where the first and last chars have been exchanged.
// ** Examples **
// frontBack("code") → "eodc"	
// frontBack("a") → "a"	
// frontBack("ab") → "ba"	
// frontBack("abc") → "cba"	
// frontBack("") → ""	""	
// frontBack("Chocolate") → "ehocolatC"	
// frontBack("aavJ") → "Java"	
// frontBack("hello") → "oellh"	

std::string frontBack(std::string str)
{
	if(str.size() < 2){ return str; }
	std::swap(str[0], str[str.size() -1]);
	return str;
}


// front 3
// Given a string, we'll say that the front is the first 3 chars of the string.
// If the string length is less than 3, the front is whatever is there. Return a new string which is 3 copies of the front.
// ** Examples **
// front3("Java") → "JavJavJav"	
// front3("Chocolate") → "ChoChoCho"
// front3("abc") → "abcabcabc"	
// front3("abcXYZ") → "abcabcabc"
// front3("ab") → "ababab"	
// front3("a") → "aaa"	"aaa"
// front3("") → ""	""

std::string front3(std::string str) 
{
	std::string front = str.size() < 3 ? str : str.substr(0,3);
  	return front + front + front;
}


// backAround
// Given a string, take the last char and return a new string with the last char added at the front and back,
// so "cat" yields "tcatt". The original string will be length 1 or more.
// ** Examples **
// backAround("cat") → "tcatt"	
// backAround("Hello") → "oHelloo"	
// backAround("a") → "aaa"	
// backAround("abc") → "cabcc"
// backAround("read") → "dreadd"
// backAround("boo") → "obooo"

std::string backAround(std::string str) 
{
  	return str[str.size() - 1] + str + str[str.size() - 1];
}


// or35
// Return true if the given non-negative number is a multiple of 3 or a multiple of 5. 
// Use the % "mod" operator
// ** Examples **
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

bool or35(int n)
{
	return (n % 3 == 0) || (n % 5 == 0);
}


// front22
// Given a string, take the first 2 chars and return the string with the 2 chars added at both the front and back, 
// so "kitten" yields"kikittenki". If the string length is less than 2, use whatever chars are there.
// ** Examples **
// front22("kitten") → "kikittenki"	
// front22("Ha") → "HaHaHa"	
// front22("abc") → "ababcab"	
// front22("ab") → "ababab"	
// front22("a") → "aaa"
// front22("") → ""
// front22("Logic") → "LoLogicLo"

std::string front22(std::string str)
{
	std::string head = str.size() < 2 ? str : str.substr(0, 2);
	return head + str + head;
}


// startHi
// Given a string, return true if the string starts with "hi" and false otherwise.
// ** Examples **
// startHi("hi there") → true		
// startHi("hi") → true	
// startHi("hello hi") → false	
// startHi("he") → false	
// startHi("h") → false	
// startHi("") → false	
// startHi("ho hi") → false
// startHi("hi ho") → true	

bool startHi(std::string str)
{
	return str.size() >= 2 && str.substr(0,2) == "hi";
}


// icyHot
// Given two temperatures, return true if one is less than 0 and the other is greater than 100.
// ** Examples **
// icyHot(120, -1) → true	
// icyHot(-1, 120) → true	
// icyHot(2, 120) → false	
// icyHot(-1, 100) → false	
// icyHot(-2, -2) → false	
// icyHot(120, 120) → false

bool icyHot(int temp1, int temp2)
{
	return (temp1 < 0 || temp2 < 0) && (temp1 > 100 || temp2 > 100);
}



// in1020
// Given 2 int values, return true if either of them is in the range 10..20 inclusive.
// ** Examples **
// in1020(12, 99) → true	
// in1020(21, 12) → true	
// in1020(8, 99) → false	
// in1020(99, 10) → true	
// in1020(20, 20) → true	
// in1020(21, 21) → false	
// in1020(9, 9) → false	

bool in1020(int a, int b)
{
	return (a >= 10 && a <= 20) || (b >= 10 && b <= 20);
}
