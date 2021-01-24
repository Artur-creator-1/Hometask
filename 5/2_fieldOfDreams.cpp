#include <iostream>
#include <cstring>
 
#define N 128
#define WORD "test" 
 
using namespace std;

void outputHiddenString(char hiddenStrin[]);
void outputMainString(char hiddenString[]);


int main()
{
	char mainString[N] = WORD, hiddenString[N];
	bool guessWord = false, guessLetter = false; 
	char letter;

	outputHiddenString(hiddenString);

	while (guessWord == false){
		guessLetter = false;
		
		cout << "Please, input symol: " << endl;
		cin >> letter;
		
		for (int i = 0; i < strlen(WORD); i++){
			if (mainString[i] == letter){
				hiddenString[i] = letter;
				guessLetter = true;
			}
		}
		
		if (guessLetter == true){
			outputMainString(hiddenString);
		}
		
		for (int i = 0; i < strlen(WORD); i++){
			if (hiddenString[i] == '*'){
				guessWord = false;
				break;
			}
			else{
				guessWord = true;
			}
		}
	}
	
	//cout << "You won the car!";
	
	return 0;
}

void outputMainString(char hiddenString[])
{
	for (int i = 0; i < strlen(WORD); i++){
		cout << hiddenString[i];
	}
	cout << endl;
}

void outputHiddenString(char hiddenString[])
{
	for (int i = 0; i < strlen(WORD); i++){
		hiddenString[i] = '*';
	}
}
