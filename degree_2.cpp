#include <iostream>
#include <cstdlib>
#include <ctime>

int N = 10;

using namespace std;

void fillingArray(int array[]);
void outputArray(int array[]);
bool isDegreeTwo(int N);
void outputArrayOfDegreeTwo(int array[]);

using namespace std;

int main()
{
	int array[N];
	
	fillingArray(array);
	
	cout << "Array: " << endl;
	outputArray(array);
	cout << endl;
	
	cout << "Array of degree of 2: " << endl;
	outputArrayOfDegreeTwo(array);
	cout << endl;

	return 0;
}

void fillingArray(int array[])
{
	srand(time(NULL));
	for (int i = 0; i < N; i++){
		array[i] = rand() % 11;
	}
}

void outputArray(int array[])
{
	for (int i = 0; i < N; i++){
		cout << array[i] << " ";
	}
}

bool isDegreeTwo(int N)
{
	for (int i = 1; i <= N; i *= 2){
		if (i == N){
			return true;
		}
	}
	return false;
}

void outputArrayOfDegreeTwo(int array[])
{
	for (int i = 0; i < N; i++){
		if (isDegreeTwo(array[i])){
			cout << array[i] << " ";
		}
	}	
}
