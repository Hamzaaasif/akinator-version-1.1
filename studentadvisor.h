#include <iostream>
using namespace std;
#include <string>

class studentadvisor{
public:
	void advisor(void)
	{
		cout << "does your teacher teaches statistics?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == "yes")
		{
			cout << "your teacher is Humera Bashir";
		}
		else{
			cout << "your teacher is Humera Tariq?";
		}

	}
private:
	string ans;

};