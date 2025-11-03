#include <iostream>
using namespace std;

void selectionSort(int a[], int length){
    for(int i = 0; i < length - 1; i++)
    {
        int MinPos = i;
        for(int j = i + 1; j < length; j++){
            if (a[j] > a[MinPos])
            {
                MinPos = j;
            }
        }
        if(MinPos != i){
            int temp = a[i];
            a[i] = a[MinPos];
            a[MinPos] = temp;
        }
    }
}

int main() {
    int a[] = {6, 5, 3, 2, 1, 4};
    int length = 6;
    
    selectionSort(a, length);
    
    for (int i = 0; i < length; i++){
        cout << "a[" << i << "] = " << a[i] << endl; 
    }

    return 0;
}