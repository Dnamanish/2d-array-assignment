// Write a program to print the row number having the maximum sum in a given matrix.

#include <iostream>
#include<climits>   /// always declare when you want to use INT_MIN
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the no of rows:";
    cin >> m;
    cout << "Enter the no of columns:";
    cin >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) // input
        {
            cin >> arr[i][j];
        }
    }
    int maxsum = INT_MIN;
    int maxrow;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++) 
        {
            sum += arr[i][j];
        }
        if(sum>maxsum)
        {
            maxsum=sum;
            maxrow=i;
        }
    }
    cout << maxsum<<endl;
    cout<<maxrow;
}