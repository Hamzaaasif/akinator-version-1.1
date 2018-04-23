#include <iostream>
using namespace std;
#include <string>

class lecture{
public:
	void lecturer(void)
	{
		cout << "does your teacher ever teache in PAF KIET?" << endl;
		cout << "a:yes " << endl << "b:no";
		cin >> ans;
		if (ans == "yes")
		{
			cout << "your teacher is urooj waheed";
		}
		else if (ans != "yes"){

			cout << "have your teacher done her MBA in 2009 from KUBS ?" << endl;
			cout << "a:yes " << endl << "b:no";
			cin >> ans;
			if (ans == "yes")
			{
				cout << "your teacher is Maryam Feroz";
			}
			else if (ans != "yes")
			{
				cout << "is your teacher's best scope is operating systems?" << endl;
				cout << "a:yes " << endl << "b:no";
				cin >> ans;
				if (ans == "yes")
				{
					cout << "your teacher is Madiha Khurram";
				}
				else if (ans != "yes")
				{
					cout << "is your teacher new in UBIT?" << endl;
					cout << "a:yes " << endl << "b:no";
					cin >> ans;
					if (ans == "yes")
					{
						cout << "your teacher is Yusra Mansoor";
					}
					else if (ans != "yes")
					{
						cout << "is your teacher full time co-operative?" << endl;
						cout << "a:yes " << endl << "b:no";
						cin >> ans;
						if (ans == "yes")
						{
							cout << "your teacher is Amna Iftikhar";
						}
						else{
							cout << "your teacher is Shaista rais";
						}
					}
				
					}
				}
			}
		}

	
private:
	string ans;
	

};