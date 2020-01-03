// preprocessor
#include <iostream>

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


	// 19. Escape sequence

	foo();

	return 0;
}

// function's identifier is foo
void foo() {
	cout << "hi" << std::endl;
}