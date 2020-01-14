#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
void swap(T a[], T b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		T temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

int main()
{
	int a = 10;
	int b = 20;

	swap(a, b);
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::string str1 = "David";
	std::string str2 = "Jake";
	swap(str1, str2);
	std::cout << str1 << std::endl;
	std::cout << str2 << std::endl;

	int nines[] = { 9, 9, 9, 9, 9, 9 };
	int ones[] = { 1, 1, 1, 1, 1, 1 };

	for (int i = 0; i < 6; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";
	}

	std::cout << "\n\n";

	swap(nines, ones, 6);

	for (int i = 0; i < 6; i++)
	{
		std::cout << nines[i] << " " << ones[i] << "\t";
	}

	return 0;
}