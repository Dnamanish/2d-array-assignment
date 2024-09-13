// Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc]

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter size of array and put odd numbers:";
    cin >> m;
    int arr1[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++) // input
        {
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++) // input
        {
            if (i == m / 2 or j == m / 2)
            {
                cout<<arr1[i][j]<<" ";
            }
            else
            {
                cout<<" "<<" ";
            }
        }
        cout<<endl;
    }
}
