#include <iostream>
#include <string>

void swap(int& a, int& b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

// overloading
void swap(std::string& a, std::string& b)
{
	std::string temp;

	temp = a;
	a = b;
	b = temp;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

int main()
{
	// diff between method and static method is...
	// method only can use after you make object
	// static method is attach to the class
	// so you dont need to make any instances.
	// reason is that it is unneccessary to describe
	// a specific action(func) for individual object
	// but it somehow related to its entity.

	// constructor : special function. it doesnt have any return type.
	// this is because, its not going to return any data, 
	// but create the object.
	// destructor : clean up datas when object deleted.

	int a = 5;
	int b = 10;
	std::string name1 = "David";
	std::string name2 = "Caleb";

	std::cout << name1 << std::endl;
	std::cout << name2 << std::endl;

	swap(name1, name2);

	return 0;
}