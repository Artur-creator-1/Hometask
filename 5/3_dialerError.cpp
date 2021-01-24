#include <iostream>
#include <cstring>

#define N 128

using namespace std;

bool isSeparator(char c);
char wordInText(char text[]);


int main()
{
	char text[N], word[N];
	int i, iw = 0, wordsCount = 0;
	char tempArrayForWord[N] = " ";
	
	int LengthCounter[N];
	
	cout << "Input text: ";
	cin.getline(text, N);
	
	for (i = 0; text[i] != '\0'; i++){
		if (!isSeparator(text[i])){
			word[iw] = text[i];
			iw++;
			
			if (isSeparator(text[i+1]) or text[i+1] == '\0'){
				word[iw] = '\0';
				
				if (strlen(tempArrayForWord) <= strlen(word)){
					for (int i = 0; i < N; i++){
						tempArrayForWord[i] = word[i];
					}
				}
			
				cout << word << endl;
				wordsCount++;
				iw = 0;
				
				
			}
			
		}
		else{
			;
		}
	}
	
	cout << wordInText(text);
	return 0;
}

bool isSeparator(char c)
{
    char s[] = ",.! ?";
    for (int i = 0; s[i] != '\0'; i++) 
        if (c == s[i])
            return true;
    return false;
}

char wordInText(char text[])
{
	text = strlwr(text);
	char letter = 'a';
	char letter2;
	int counter = 0;
	int counter2 = 0;
	
	while (letter <= 'z'){
		counter = 0;
		for (int i = 0; i < strlen(text); i++){
			if (text[i] == letter){
				counter++;
			}
		}
		if (counter > counter2){
			letter2 = letter;
			counter2 = counter;
		}
		
		letter++;
	}
	return letter2;
}

