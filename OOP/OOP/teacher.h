#ifndef _TEACHER_H
#define _TEACHER_H

#include <iostream>
#include <vector>
#include <string>
#include "user.h"

class Teacher : public USER
{
public:
	Teacher();
	std::vector<std::string> classes_teaching;
	void output();

};

#endif