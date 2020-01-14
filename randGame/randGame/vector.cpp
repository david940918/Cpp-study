#include <iostream>
#include <vector>

void print_vector(std::vector<int> &data)
{
	data.push_back(12);
	for (int i = 0; i < data.size(); i++)
	{
		std::cout << data[i] << "\t";
	}
	std::cout << std::endl;
}

void use_vector()
{
	int a = 0;
	int b = 1;
	std::vector<int> data = { 1,2,3 };
	data.push_back(12);
	std::cout << data[data.size() - 1] << std::endl;
	data.pop_back();
	std::cout << data.size() << std::endl;

	print_vector(data);
}