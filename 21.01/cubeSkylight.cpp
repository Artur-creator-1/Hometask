#include <iostream>
#include <cstdlib>
#include <ctime>

#define N 5

void printArray(int array[N][N][N]);
bool printResult(int array[N][N][N]);

using namespace std;

int main()
{
	int array[N][N][N] = {0};
	
	printArray(array);
	
	if(printResult(array)){
		cout << "Skylight is visible" << endl;
	}
	else{
		cout << "skylight dosen't visible" << endl;
	}
	
	return 0;
}

void printArray(int array[N][N][N])


{
	srand(time(NULL));
	for (int x = 0; x < N; x++){
		for (int y = 0; y < N; y++){
			for (int z = 0; z < N; z++){
				array[x][y][z] = rand() % 2;
				cout << array[x][y][z] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}

bool printResult(int array[N][N][N])
{
	for (int x = 0; x < N; x++){
		for (int y = 0; y < N; y++){
			for (int z = 0; z < N; z++){
				if (array[x][y][z] == 0){
					return true;
				}
				else{
					return false;
				}
			}
		}
	}
}
