#include <iostream>
#include <vector>
#include <array>

void print_array(const int data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		// cant change the memory data, because of const modifier
		// data[i]++;
		std::cout << data[i] << std::endl;
	}
}
int main() {

	//int data[] = { 1, 2, 3, 4, 5, 6 };
	//std::vector<int> data_v = { 1, 2, 3, 4, 5, 6 };
	//std::array<int, 6> data_stl = { 1, 2, 3, 4, 5, 6 };

	//for (int n : data) // foreach loop (range based for loop, in C++)
	//{
	//	std::cout << n << std::endl;
	//}
	// it is hard to run a C type array on the function,
	// this is because the param decays the array into pointer.
	// So it loses its size of capability.
	// so it is useful at the function where the array declared
	// or rather use vector, STL array ...

	/*std::vector<std::vector<int>> grades =
	{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};*/

	// const modifier : dont change initialized data
	int data[] = { 1, 2, 3 };
	print_array(data, 3);

	return 0;
}