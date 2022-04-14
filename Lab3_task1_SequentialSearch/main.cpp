#include <iostream>
#include <string>

using namespace std;

void search(string data[], string ayat, int s)
{
    int isExist = 0;
    for(int j = 0; j < s; j++)
    {
        if(data[j] == ayat)
        {
            cout << "output: " << data[j] << ", in index: " << j+1 << endl;
            isExist = 1;
        }
    }
    if(!isExist)
    {
        cout << "There no such name! " << endl;
    }
}

int main()
{
    string ayat;
    string data[10] =  {"Mrym", "Ali", "Mona", "Randa"};
    int size = sizeof(data)/sizeof(data[0]);

    cout << "Enter string: " << endl;
    getline(cin, ayat);
    search(data, ayat, size);

    return 0;
}
