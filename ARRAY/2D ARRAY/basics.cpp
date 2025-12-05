#include <iostream>
using namespace std;

void printAray(int arr[3][3],int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl ;
    }
}
int main()
{
    // access the matrix
    int matrix[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << matrix[2][-1] << endl;

    int arr[3][3];
    int row = 3;
    int col = 3 ;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << " Enter the input for row index "<<i<<" column index " << j << " : ";
            cin>>arr[i][j];
        }
    }
    printAray(arr,row,col);
    return 0;
}