#include <iostream>

using namespace std;

int fib(int n);
int sumFib(int n);

int main()
{
	int n = 0, res = 0, sum_fib = 0;
	cout << "Input n > 1: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cout << fib(i) << " ";
	}
	cout << endl;
	
	res = fib(n);
	cout << "Result = " << res << endl;
	
	sum_fib = sumFib(n);
	cout << "Sum of Fibonacci = " << sum_fib;
	
	return 0;
}

int fib(int n)
{
	if (n < 1)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

int sumFib(int n)
{
	int sum = 0;
	
	for (int i = 1; i <= n; i++)
	{
		sum += fib(i);
	}
	return sum;
}
