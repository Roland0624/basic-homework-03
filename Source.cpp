#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	float wight ;
	float height ;
	cout << "����: ";
	cin >> height;
	cout << "�魫: ";
	cin >> wight;

	cout << "BMI: " << wight / (height*height / 10000);

	system("pause");
	return 0;
}

