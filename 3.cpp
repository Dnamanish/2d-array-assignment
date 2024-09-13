#include <iostream>
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

    int l1,r1,l2,r2;
    cout<<"enter number for l1:";
    cin>>l1;
    cout<<"enter number for r1:";
    cin>>r1;
    cout<<"enter number for l2:";
    cin>>l2;
    cout<<"enter number for r2:";
    cin>>r2;
    int sum=0;
    for (int i = l1; i <=l2; i++)
    {
        for (int j = r1; j <=r2; j++) // input
        {
            sum+= arr[i][j];
        }
    }
    cout<<sum;
}