#include <iostream>

#define one_kilo_cost 10

using namespace std;

int main()
{
	double data = 0, cost = 0;
	
	cout << "Input data of meter" << endl;
	cin >> data;
	
	cost = one_kilo_cost * data;
	
	cout << "Cost of electricity = " << cost << endl;
	return 0;
	
	
}


