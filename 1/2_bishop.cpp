#include <iostream>
#include "math.h"

using namespace std;

int main()
{
 
    int x1 = 0, x2 = 0, y1=0, y2=0;
    char let1, let2;
	
	cout << "Coordinates of the first elephant(numerical letter)" << endl;
    cin >> x1 >> let1;
    cout << "Coordinates of the second elephant(numerical letter)" << endl;
    cin>>x2>>let2;
    
    y1 = let1 - 96; 
    y2 = let2 - 96;
    
    if(abs(x1 - x2) == abs(y1 - y2))
    {
    	cout << "Figures strike each other" << endl;
    }
    else
    {
    	cout << "Figures dont strike each other" << endl;
    }
    return 0;
}
