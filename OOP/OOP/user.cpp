#include <iostream>
#include <string>
#include <vector>
#include "user.h"

//typedef struct _USER
//{
//	// default public
//	std::string first_name;
//	std::string last_name;
//	std::string get_status()
//	{
//		return status;
//	}
//
//	private :
//		std::string status = "Cool";
//}USER;

	USER::USER()
	{
		std::cout << "constructor" << std::endl;
		user_count++;
	}

	USER::USER(std::string first_name, std::string last_name, std::string status)
	{
		std::cout << "constructor" << std::endl;
		this->first_name = first_name;
		this->last_name = last_name;
		this->status = status;
		user_count++;
	}

	USER::~USER()
	{
		std::cout << "Destructor" << std::endl;
		user_count--;
	}
	int USER::get_user_count()
	{
		return user_count;
	}
	std::string USER::get_status()
	{
		return status;
	}
	void USER::set_status(std::string status)
	{
		this->status = status;
	}
	std::string USER::get_first_name()
	{
		return first_name;
	}
	void USER::set_first_name(std::string first_name)
	{
		this->first_name = first_name;
	}
	std::string USER::get_last_name()
	{
		return last_name;
	}
	void USER::set_last_name(std::string last_name)
	{
		this->last_name = last_name;
	}

	void USER::output()
	{
		std::cout << "I am a User" << std::endl;
	}

int USER::user_count = 0;

//friend function
void output_status(USER user)
{
	// status is private but friend can access it.
	std::cout << user.status << std::endl;
}

int add_user_if_not_exist(std::vector<USER>& users, USER user)
{
	for (int i = 0; i < users.size(); i++)
	{
		if (users[i].get_first_name() == user.get_first_name() &&
			users[i].get_last_name() == user.get_last_name())
		{
			return i;
		}
	}
	users.push_back(user);
	return users.size() - 1;
}

std::ostream& operator << (std::ostream& output, USER user)
{
	output << "First name: " << user.first_name << std::endl;
	output << "Last name: " << user.last_name << std::endl;
	return output;
}

std::istream& operator >> (std::istream& input, USER& user)
{
	std::string temp;

	std::cout << "input First name: ";
	input >> temp;
	user.set_first_name(temp);

	std::cout << "input Last name: ";
	input >> temp;
	user.set_last_name(temp);

	std::cout << "input Status: ";
	input >> temp;
	user.set_status(temp);

	return input;
}