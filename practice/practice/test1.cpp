// preprocessor
#include <iostream>
#include <string>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>


// if you use this, you will use std's function
// directly, so we dont need to write std::
// but this cannot keep you away from conflict.

// using namespace std;

// you can set more directly

using std::cout;

// declaration, every calling before this will not work.
void foo();

int main() {
	
	int slices;
	// hard coded

	std::cin >> slices;
	cout << "Hello world\n" << slices << '\n';
	cout << slices << std::endl;

	// most c functions can use at c++
	// c++ is much easier, b/c no need to write down type.
	printf("%d\n", slices);
	
	//cout << "Hello world\n";
	// what is std? namespace
	// basically grouping of code.
	// if David and Jack has share same named function which is
	// Naming conflict.
	// So we need to identify th function.
	// David::function, Jack::function
	// like this.
	// So this prefix means where the function belongs to.
	// We can use this without namespace, but its not good habit.

	// cout is object which is come from class.
	// 'cout' birth from 'ostream'
	// 'cout' and "Hello world\n" is operand, << is operator
	// you can play with this things too.

	// Convetion : bunch of people agree to do something proper way to develop in C++
	// 4 spaces, or tab (indented)
	// C++ is case sensitive (SLICES, slices, Slices all diff)
	// white space, compiler dont compile it
	// https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md
	// this will show you how to use those rules


	// nature C
	// "Caleb\0"
	char name[] = "Caleb";
	// also you cant reassign this by other char
	// name = "t" b/c its pointer

	// 19. Escape sequence

	foo();

	std::string greeting = "hello";
	// if you didnt init value cpp init it by ""

	// print char
	std::cout << greeting[0] << std::endl;

	// string concat
	std::string complete_greeting = greeting + " there";
	complete_greeting += "!";
	std::cout << complete_greeting << std::endl;

	// length
	// func comes from class, you can call it by '.'
	// which so called, method == member function
	std::cout << complete_greeting.length() << std::endl;

	// input
	// object realize the end of line by white space
	// if you enter "hello there"
	// result will be "hello"
	std::string greet;
	std::cin >> greet;
	std::cout << greet;

	// so real input what demands will shown like this
	std::string greet1;
	// cin.getline();
	getline(std::cin, greet1);
	std::cout << greet1 << std::endl;

	// string modifier method
	// length
	// size
	std::string test = "test";
	// append
	test.append(" for me");
	// insert
	test.insert(2, "a");
	// erase
	test.erase(test.length() - 1);
	// pop_back
	// replace
	
	std::cout << greet1 << std::endl;

	test = "what the hell?";
	test.replace(test.find("hell"), 4, "****");

	std::cout << test << std::endl;

	// substr (start index, length)
	// find_first_of()

	std::cout << test.find_first_of("*") << std::endl;
	// if it doesnt find npos(huge number) == -1

	// == (recommend) Java not use
	std::string test1 = "what up";
	if(test1 == "what up") std::cout << "same" << std::endl;

	// or like this
	if(test1.compare("what up:") == 0) std::cout << "same" << std::endl;

	return 0;
}

// function's identifier is foo
void foo() {
	cout << "hi" << std::endl;
}