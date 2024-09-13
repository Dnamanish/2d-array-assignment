// Write a C++ program to find the largest element of a given 2D array of integers.
#include <iostream>
using namespace std;
int main()
{
    int arr[4][4]={1,3,4,6,2,4,5,7,3,5,6,8,4,6,7,9};
    
    int largest=arr[0][0];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)   // input
        {
          if(arr[i][j] > largest)
           {
             largest=arr[i][j];
           } 
        }
    }
    cout<<largest;
     
}