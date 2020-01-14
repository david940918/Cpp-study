#ifndef _USER_H
#define _USER_H

#include <string>

class USER
{
	// default private
	std::string status = "Cool";
	std::string first_name;
	std::string last_name;
	static int user_count;

public:

	USER();
	USER(std::string first_name, std::string last_name, std::string status);
	~USER();

	static int get_user_count();
	std::string get_status();
	void set_status(std::string status);
	std::string get_first_name();
	void set_first_name(std::string first_name);
	std::string get_last_name();
	void set_last_name(std::string last_name);
	virtual void output();

	friend void output_status(USER user);
	friend std::ostream& operator << (std::ostream& output, USER user);
	friend std::istream& operator >> (std::istream& input, USER& user);
};

#endif