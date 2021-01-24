#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <ctime>

#define N 128

using namespace std;

bool isDigit(char dig);

int main()
{
	char string[N] = "";
	char updatedString[N] = "";
	char test[N];
	int upIndex = 0;
	
	
	cout << "Input string: " << endl;
	cin.getline(string, N);
	
	for (int i = 0; string[i] != '\0'; i++){
		if (isDigit(string[i])){
			int count = int(string[i] - 48);
			
			for (int j = 0; j < count; j++){
				if (count % 2 == 0){
					updatedString[upIndex] = '+';
				}
				else{
					updatedString[upIndex] = '-';
				}
				upIndex++;
			}
		}	
		else{
			updatedString[upIndex] = string[i];
			upIndex++;
		}
	}

	cout << updatedString;
	
	return 0;
}

bool isDigit(char dig)
{
	if (dig > '0' && dig <= '9'){
		return true;
	}
	else{
		return false;
	}
}


