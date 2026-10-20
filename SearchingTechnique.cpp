#include <iostream>
using namespace std;
int main() {
    int n, key;
    int a[100];
    int found = -1; //here the search operations begins form the -1 where it is the state which we can say the search operation has not started yet and if started and ended with -1 then it has not dfound the element needed.

    cout << "Enter the number of elements: ";
    cin >> n;

   


//checking the array should be valid
    if (n < 1 || n > 100){
        cout << "Invalid array";
        return 0;
    }

    //user input 
    cout << "Enter the elements of the array : ";
    for (int i =0; i < n; i++){
        cin >> a[i];
    }

    //linear search 

     cout << "Enter the element to be searched :";
    cin >> key;

    for(int i = 0; i < n; i++){
        if (a[i] == key){
            found = i; //chnaging the value of found when the element is equal to the key 
            break;;
        }

    }
    //printing the found element.
        if (found != -1){
            cout << "Element is found";
        }
        else {
            "Element is not found";
        }

    return 0;


}