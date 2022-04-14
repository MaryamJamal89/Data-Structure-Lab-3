#include <iostream>
#include <string.h>

using namespace std;

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void bubbleSort(int arr[], int s)
{
    int flag = 0;
    for(int i = 0; i < s-1; i++){
        flag = 1; //array sorted
        for(int j = 0; j < s-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            return;
    }
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[] = {44, 12, 2, -8, 0, 55, 22};
    int s = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, s);
    cout << "sorted array is: \n";
    printArray(arr, s);

    return 0;
}
