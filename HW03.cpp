//計算BMI
#include <iostream>  
#include <cstring>
using namespace std;

int main()
{
	float wight;                                             //宣告升高體重
	float height;
	cout << "身高: ";
	cin >> height;
	cout << "體重: ";
	cin >> wight;

	cout << "BMI: " << wight / (height * height / 10000);   //BMI=體重的平方除以身高 

	system("pause");
	return 0;
}
