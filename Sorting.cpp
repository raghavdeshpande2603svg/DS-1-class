#include <iostream>
using namespace std;


void BubbleSort(int arr[], int n) {
	 for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    } 


void SelectionSort (int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void InsertionSort {
	for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

}
int main(){
	
	int n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\n===== SORTING TECHNIQUES =====\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
//    cout << "4. Merge Sort\n";
//    cout << "5. Quick Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            bubbleSort(arr, n);
            break;

        case 2:
            selectionSort(arr, n);
            break;

        case 3:
            insertionSort(arr, n);
            break;

//        case 4:
//            mergeSort(arr, 0, n - 1);
//            break;
//
//        case 5:
//            quickSort(arr, 0, n - 1);
//            break;

        default:
            cout << "Invalid choice!" << endl;
            delete[] arr;
            return 0;
    }

    display(arr, n);

    delete[] arr;

    return 0;
	
}