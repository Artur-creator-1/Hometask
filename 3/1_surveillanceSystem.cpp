#include <iostream>
#include <cstdlib> 
#include <ctime>

#define N 10

using namespace std;

void fillingArrayProfileHeight(int array[]);
void outputArrayProfileHeight(int array[]);
void invisiblePoint(int array[]);


int main()
{
	int arrayHeight[N] = {};
	
	outputArrayProfileHeight(arrayHeight);
	invisiblePoint(arrayHeight);
	
	return 0;
}

void fillingArrayProfileHeight(int array[])
{
	srand(time(NULL));
	for (int i = 0; i < N; i++){
		//array[i] =  rand() % 21 - 10;
		array[i] =  rand() % 10;
	}
}

void outputArrayProfileHeight(int array[])
{
	fillingArrayProfileHeight(array);
	
	cout << "Array of height:" << endl;
	
	for (int i = 0; i < N; i++){
		cout << array[i] << "[" << i << "]" << " ";
	}
	cout << endl << endl;
}

void invisiblePoint(int array[])
{
	fillingArrayProfileHeight(array);
	
	cout << "Point indices invisible to the observer: ";
	
	for (int i = 2; i < N; i++)
	{
		if (array[i] >= array[0]){
			array[0] = array[i];
		}
		else{

			cout << i << " ";
		}
	}
}
