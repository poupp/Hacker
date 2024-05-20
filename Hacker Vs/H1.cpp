#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string name;
	string password;
	while (1) {

		system("cls");//Çå¿ÕÆÁÄ»

		cout << "ÇëÊäÈëÕËºÅ: ";
		cin >> name;

		cout << "ÇëÊäÈëÃÜÂë: ";
		cin >> password;

		if (name == "poupp" && password == "ycg159..") {
			break;
		}
		else {
			cout << "ÓÃ»§Ãû»òÃÜÂëÊäÈë´íÎó!" << endl;
			system("pause");
		}
	}
	system("cls");
	cout << "1.ÍøÕ¾404¹¥»÷" << endl;
	cout << "2.ÍøÕ¾´Û¸Ä¹¥»÷" << endl;
	cout << "3.ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl;
	cout << "4.DNS¹¥»÷" << endl;
	cout << "5.·þÎñÆ÷ÖØÆô¹¥»÷" << endl;

	system("pause");
	return 0;
}