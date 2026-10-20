#include <iostream>
using namespace std;

int main(){
    int n, a[100];

    cout << "Enter the no. of elements of array : ";
    cin >> n;

    if (n < 1 || n > 100){
        cout << "invalid input";
        return 0;
    }

    cout << "enter the array : ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    //selection sort :
    //Selection Sort has \(O(n^2)\) best, average, and worst-case time complexity.
    /*Selection sort is basically the algo which sorts the elements by checking the minumum element keep it in the index 0 then again checking for the min among unsorted elements and loop goes on till the array is sorted*/

    for (int i = 0; i < n - 1; i++){

        int minIndex = i;

        for (int j = 1; j < n; j++){
            if (a[j] < a[minIndex]){
                minIndex = j;
            }
        }

        int temp =a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
    cout << "sorted array";
    for (int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;
}
