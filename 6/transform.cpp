#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	int num = 0;
	int num2 = 0;
	string binary = "";
	
	cout << "Enter the number: ";
	cin >> num;
		
	while (num != 0) {
		if (num % 2 == 0){
			binary += "0";
		}
		else {
			binary += "1";
		}
		num /= 2;
	}
	
	for (int i = binary.size() - 1; i >= 0; i--){
		cout << binary[i];
	}
	
	reverse(binary.begin(), binary.end());
	cout << binary;
	
	cout << endl;
	
 	int binaryNum = atoi(binary.c_str());

    for (int i = 0; i < binary.size(); i++){
        int temp = binaryNum % 10;
        num2 += temp * pow(2, i);
        binaryNum /= 10;
    }

    cout << endl << num2;
	
	
	/*reverse(binary.begin(), binary.end());
	cout << binary;*/
	
	return 0;
}
