//�p��BMI
#include <iostream>  
#include <cstring>
using namespace std;

int main()
{
	float wight;                                             //�ŧi�ɰ��魫
	float height;
	cout << "����: ";
	cin >> height;
	cout << "�魫: ";
	cin >> wight;

	cout << "BMI: " << wight / (height * height / 10000);   //BMI=�魫�����谣�H���� 

	system("pause");
	return 0;
}
