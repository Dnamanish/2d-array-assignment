// Write a program to add two matrices and save the result in one of the given matrices.

#include <iostream>
using namespace std;
int main()
{
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3] = {4, 5, 8, 0, 0, 8, 1, 2, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr1[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) // output
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}