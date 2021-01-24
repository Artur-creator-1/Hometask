#include <iostream>

using namespace std;

void inputData(int &day, int &month, int &year);
int getSum(int day, int month, int year);
int valueCount(int sum);
int getValue(int sum, int count);
bool checkData(int day, int month, int year);

int main()
{
	int day = 0, month = 0, year = 0, sum = 0, count = 0, value = 0;
	
	inputData(day, month, year);
	
	while (true)
	{
		if (checkData(day, month, year))
		{
			sum = getSum(day, month, year);
			cout << "Sum of birthday digits = " << sum << endl; 
					
			count = valueCount(sum);
			cout << "Number of digits = " << count << endl; 
					
			value = getValue(sum, count);
			cout << "Sum of all digits of the number = " << value; 
			break;
		}
		else
		{
			inputData(day, month, year);
		}
	}


	
	return 0;
}

void inputData(int &day, int &month, int &year)
{
	int d, m, y;

	cout << "Input day of birthday: ";
	cin >> d;
	cout << "Input month of birthday: ";
	cin >> m;
	cout << "Input year of birthday: ";
	cin >> y;
	cout << endl;
		
	day = d;
	month = m;
	year = y;
	
	if ((d < 0) && (d > 9))
	{
		cout << "error" << endl;
	}

	
}

int getSum(int day, int month, int year)
{
	int value = 0, temp = 0;
	
	value = day + month + year;
	
	return value;
}

int valueCount(int sum)
{
	int count = 0;
	
	while (sum != 0)
	{
		sum /= 10;
		count++;
	}
	
	return count;
}

int getValue(int sum, int count)
{
	int res = 0;
	
	if (count != 1)
	{
		while (sum != 0)
		{
			res += sum % 10;
			sum /= 10;
		}
	}
	return res;
}

bool checkData(int day, int month, int year)
{
		if ((day >= 1 && day <= 31) and (month >= 1 && month <= 12) and (year >= 1980 && year <= 2020))
			return true;		
		else
		{
			cout << "Input a day of the range [1..31]" << endl;
			cout << "Input a month of the range [1..12]" << endl;
			cout << "Input a year of the range [1980..2020]" << endl << endl;
		}
			return false;
		
}
