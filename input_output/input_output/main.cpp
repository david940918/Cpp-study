#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{

	// input & output goes throughout stream
	// it stack at buffer,
	// and program get it by section
	// if you hit enter, buffer send the chunk to the program

	// you can extend this to Files
	// istream > cin
	// ifstream > input
	// ofstream > output
	// this can expand into DB, excel, etc.

	//string myText;
	//cout << "enter your file name" << endl;
	//cin >> myText;
	////myText.append(".txt");
	//myText = myText + ".txt";

	//// make ofstream instance
	//// std::inputoutput stream:: append
	//ofstream file(myText, std::ios::app);
	//
	////file.open("hello.txt");

	//if (file.is_open())
	//{
	//	cout << "success" << endl;
	//}

	//vector<string> names;
	//names.push_back("David");
	//names.push_back("Echo");
	//names.push_back("Lukas");

	//for (string name : names) {
	//	// it overwrite the text file
	//	file << name << endl;
	//}

	//file.close();

	ifstream file("David.txt");

	vector<string> names;
	string input;

	if (file.is_open())
	{
		cout << "file opened" << endl;

		while (getline(file, input))	// return input
		{
			names.push_back(input);
		}

		for (string name : names)
		{
			cout << name << endl;
		}
	}
	

	file.close();
	return 0;
}