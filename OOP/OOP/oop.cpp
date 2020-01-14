#include "user.h"
#include "teacher.h"

int main()
{
	//std::vector<USER> users;
	/*USER user1("David", "Hwang", "nice"), 
		 user2("Jake", "nsee", "good"), 
		 user3("Losa", "Yang", "welldone");*/

	/*users.push_back(user1);
	users.push_back(user2);
	users.push_back(user3);*/

	/*USER user("Jackson", "senab", "hi");

	std::cout << add_user_if_not_exist(users, user) << std::endl;
	std::cout << users.size() << std::endl;*/

	/*std::cout << USER::get_user_count() << std::endl;
	user3.~USER();
	std::cout << USER::get_user_count() << std::endl;*/

	/*USER user;
	user.set_first_name("David");
	user.set_last_name("Hwang");
	user.set_status("Gold");
	std::cout << user;

	USER user1;
	std::cin >> user1;
	std::cout << user1;

	USER user2;
	output_status(user2);*/

	/*Teacher teacher;
	teacher.set_first_name("Teach");
	std::cout << teacher.get_first_name() << std::endl;
	teacher.output();*/

	Teacher teacher;
	USER& user1 = teacher;
	Teacher *teacher1;
	teacher1 = (Teacher *)malloc(sizeof(Teacher));
	
	user1.output();

	return 0;
}