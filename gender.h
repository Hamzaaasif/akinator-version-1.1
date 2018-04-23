#include <iostream>
using namespace std;
#include "q2.h"
#include "femaleteachers.h"
#include <string>

class gender
{
public:
	void question1(void)
	{
		cout << "is you teacher male?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == "yes")
		{
			phd.question2();
		}
		else{
			femalee.question3();
		}

	}
private:
	string ans;
	q2 phd;
	female femalee;
};