#include <iostream>
#include <math.h>
using namespace std;
int getMaxSum(int matrix[][3], int row, int cols)
{
    int rowMaxSum = INT16_MIN;

    for (int i = 0; i < row; i++)
    {
        int getSUMI = 0;
        for (int j = 0; j < cols; j++)
        {
            getSUMI += matrix[i][j];
        }
        rowMaxSum = max(rowMaxSum, getSUMI);
    }
    return rowMaxSum;
}
int main()
{
    int matrix[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int cols = 3;
    cout << getMaxSum(matrix, row, cols);
    return 0;
}