#include <iostream>
#include <math.h>
using namespace std;
int getColSum(int matrix[][3], int row, int cols)
{
    int colMaxSum = INT16_MIN;

    for (int j = 0; j < cols; j++)
    {
        int getColSum = 0;
        for (int i = 0; i < row; i++)
        {
            getColSum += matrix[i][j];
        }
        colMaxSum = max(colMaxSum, getColSum);
    }
    return colMaxSum;
}
int main()
{
    int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int cols = 3;
    cout << getColSum(matrix, row, cols);
    return 0;
}