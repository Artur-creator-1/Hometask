#include <iostream>
#include <cstdlib>
#define N 10

using namespace std;

void changeDirection (char array[]);
void printArray(char array[]);

int main()
{
    char array[N] = {'>', '<', '>', '<', '>'};

    printArray(array);
    changeDirection(array);
    printArray(array);

    return 0;
}

void changeDirection (char array[]){
    for(int j = 0; j < N - 1; j++){
        for(int i = 0; i < N - 1; i++){
            if(array[i] == '>' and array[i + 1] == '<'){
                array[i] = '<';
                array[i + 1] = '>';
            }
        }
    }

    cout << endl;
}

void printArray(char array[]){
    for(int i = 0; i < N; i++){
        cout << array[i] << ' ';
    }
}
