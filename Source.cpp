#include<iostream>
using namespace std;
int main()
{
	double physics = 0, chemistery = 0, biology = 0, mathematics = 0, computer = 0, average = 0, total = 500, percent = 0, marks = 0;

	cout << "Enter degrees for every subject in rang 0<subject<100" << endl;
	cout << "Enter marks of physics" << endl;
	cin >> physics;
	cout << "Enter marks of chemistery" << endl;
	cin >> chemistery;
	cout << "Enter marks of biology" << endl;
	cin >> biology;
	cout << "Enter marks of mathematics" << endl;
	cin >> mathematics;
	cout << "Enter marks of computer" << endl;
	cin >> computer;
	marks = physics + chemistery + biology + mathematics + computer;
	percent = (marks / 5.0);
	cout << "precent =" << percent << "%" << endl;
	if (percent >= 90)
	{
		cout << "Grade A";
	}
	else if (percent >= 80)
	{
		cout << "Grade B";
	}
	else if (percent >= 70)
	{
		cout << "Grade C";
	}
	else if (percent >= 60)
	{
		cout << "Grade D";
	}
	else if (percent >= 40)
	{
		cout << "Grade E";
	}
	else
	{
		cout << ("Grade F");
	}

	system("pause");
	return 0;

}