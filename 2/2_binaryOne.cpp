#include <iostream>

using namespace std;

void binaryOnes(int n);
void convert(int n);

int main()
{
	int n = 0;
	
	cout << "Input n: ";
	cin >> n;

	cout << "Numbers with all ones: ";
	binaryOnes(n);
	
	cout << endl;
	cout << "Numbers table: " << endl;
	convert(n);
	
	return 0;
}

void binaryOnes(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int bin = 0, k = 1, m = i, flag = true;
		
		while (m > 0)
		{
			bin += (m % 2) * k;
			k *= 10;
			m /= 2;
		}
		
		while (bin > 0)
		{
			if (bin % 10 == 0) {flag = false; break;}
			bin /= 10;
		}
		
		if (flag == false);
		else
		{
			cout << i << " ";
		}
			
	}
}

void convert(int n)
{
	for (int i = 1; i <= n; i++)
	{
		int bin = 0, k = 1, m = i, flag = true;
		
		while (m > 0)
		{
			bin += (m % 2) * k;
			k *= 10;
			m /= 2;
		}
		cout << i << "(10) = " << bin << "(2)" << endl;
	}
}
