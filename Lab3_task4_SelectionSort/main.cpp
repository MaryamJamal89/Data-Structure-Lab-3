#include <iostream>
#include <string.h>

using namespace std;

void selectionSort(char arr[][50], int size){
   int i, j, min;
   char minStr[50];

   for (i = 0; i < size-1; i++){
      int min = i;
      strcpy(minStr, arr[i]);
      for (j = i + 1; j < size; j++){
         if (strcmp(minStr , arr[j]) > 0){
            strcpy(minStr, arr[j]);
            min = j;
         }
      }

      if (min != i){
         char temp[50];
         strcpy(temp, arr[i]);
         strcpy(arr[i], arr[min]);
         strcpy(arr[min], temp);
      }
   }
}

int main(){
   char arr[][50] = {"Mrym", "Ali", "Mona", "Randa", "Bob"};
   int n = sizeof(arr)/sizeof(arr[0]);

   selectionSort(arr, n);
   for (int i = 0; i < n; i++)
      cout << i+1 << ": " << arr[i] << endl;

   return 0;
}
