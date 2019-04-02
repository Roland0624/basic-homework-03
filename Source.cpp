#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	float wight ;
	float height ;
	cout << "身高: ";
	cin >> height;
	cout << "體重: ";
	cin >> wight;

	cout << "BMI: " << wight / (height*height / 10000);

	system("pause");
	return 0;
}

