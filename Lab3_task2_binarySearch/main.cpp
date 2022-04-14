#include <iostream>
#include <string.h>

using namespace std;

int searchBinary(int arr[], int s, int key)
{
    int start = 0;
    int end = s - 1;
    int mid;

    while(start <= end)
    {
        mid = (start+end)/2;
        if(arr[mid] == key)
            return mid;
        else if(key > arr[mid])
            start = mid+1;
        else
        {
            end = mid-1;
        }
    }
    return -1;
};

int main()
{
    int input;
    int arr[] = {1, 3, 5, 7, 8, 9, 16, 19, 22};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter value to search: ";
    cin >> input;

    int answer = searchBinary(arr, size, input);
    if(answer == -1)
        cout << "Element is not present in array " << endl;
    else
        cout << "Element is present at index " << answer+1 << endl;
    return 0;
}
