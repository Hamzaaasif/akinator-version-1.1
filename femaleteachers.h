#include <iostream>
using namespace std;
#include "vf.h"
#include "pf.h"
#include <string>
class female{
public:
	void question3(void)
	{
		cout << "is your teacher is in a visiting faculty?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == "yes")
		{
			visiting.visitingfaculty();
		}
		else{
			pri.perfaculty();
		}

	}
private:
	string ans;
	pf pri;
	vf visiting;
	
};