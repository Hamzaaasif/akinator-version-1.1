#include <iostream>
using namespace std;
#include "studentadvisor.h"
#include "lecture.h"
#include <string>

class pf{
public:
	void perfaculty(void)
	{
		cout << "have your teacher ever been student advisor?" << endl;
		cout << "a:yes   b:no" << endl  ;
		cin >> ans;
		if (ans == "yes")
		{
			advisor.advisor();
		}
		else
		{
			notl.lecturer();

		}



	}
private:
	string ans;
	studentadvisor advisor;
	lecture notl;
};