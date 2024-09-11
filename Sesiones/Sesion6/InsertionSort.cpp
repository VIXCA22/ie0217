// Insetion sort in C++

#include <iostream>
using namespace std;

// Funtion to print an array

void printArray(int array[], int size){
    for(int i= 0 ; size ; i++){
        cout << array [i] << " ";
    }
    cout << endl;
}

void insertionSort(int array[], int size){
    for (int step = 1; step < size ; step++){
        int key = array[step];
        int j = step -1 ;

        //Compare key with each element on the left of it until an element smaller than 
        //it is found.
        //For descendig order , change key<arrat[j] to key>array[j].
        while (key < array[j] && j >=0){
            array [j + 1] = array[j];
            --j
        }
        array[j + 1]= key;
    }
}

// Driver code

int main(){
    int data[] = {9,5,1,4,3};
    int size = sizeof(data) / sizeof(data[0]);
    insertionSort(data,size);
    cout << "Sorted array in ascending order:\n";
    printArray(data, size);

    return 0;
}