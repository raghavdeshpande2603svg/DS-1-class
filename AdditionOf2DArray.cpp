#include <iostream>
using namespace std;
int main(){
   int row = 3, col = 3;
   
   int arr1[row][col];
   int arr2[row ][col];
   int sum[row][col];
    cout << "Enter the elements of first array: " << endl;
    for(int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
                cin >> arr1[i][j];
          }
     }
    cout << "Enter the elements of second array: " << endl;
    for(int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
                cin >> arr2[i][j];
          }
     }
    for(int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
                sum[i][j] = arr1[i][j] + arr2[i][j];
          }
     }
    cout << "The sum of the two arrays is: " << endl;
    for(int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
                cout << sum[i][j] << " ";
          }
          cout << endl;
     }

    return 0;
}
