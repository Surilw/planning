#include <iostream>
using namespace std;

int main()
{
	int temp;
	bool sunny;
	cout << "Enter temperature.";
	cin >> temp;
	if (temp <= 0 || temp  >= 30) {
		cout << "The temperature is not good!.""\n";
	}
	else {
		cout << "The temperature is  good"<<"\n";
			
	}
	if (temp <= 0 || temp >= 30) {
		cout << "Is not sunny";
	}
	else {
		cout << "It is sunny";
	}
	
	return 0;

	
}
