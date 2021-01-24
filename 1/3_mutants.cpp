#include <iostream>

using namespace std;

int main()
{
	double mutants, kill_mut, persent, days = 1, increase = 0;
	
	cout << "Input amount of mutans" << endl;
	cin >> mutants;
	cout << "Input amount destroed mutants every day" << endl;
	cin >> kill_mut;
	cout << "Input procent of increase" << endl;
	cin >> persent;
	
	increase = (mutants * (1 + (persent / 100))) - mutants;
	
	if(kill_mut > increase)
	{
		while(mutants > kill_mut)
	{
		mutants = (mutants + increase) - kill_mut;
		days++;
	}
	
	cout << "Days for win = " << days << endl;
	
	}
	else
	{
		cout << "Mutants destroed Minsk!!!" << endl;
	}
	
	return 0;
	
}
