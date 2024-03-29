#include <iostream>

using namespace std;

void printArray(int theArray[], int sizeofArray);

int main(){
    
int year = 2023;
int startingDay = ((year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;
cout << startingDay;

int arr[4]={1, 2, 3, 88};
int num[6]={5, 7, 8 , 8, 9, 9};

printArray(num, 6);

return 0;
} 

void printArray(int theArray[], int sizeofArray){
    for (int i = 0; i < sizeofArray; i++){
        cout << theArray[i]<<endl;
    }
    
}