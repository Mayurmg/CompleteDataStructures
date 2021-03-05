#include <bits/stdc++.h>
#include<iostream>
using namespace std;

void print2ndlargest(int arr[], int arr_size)
{
    int i, first, second;
    if (arr_size < 2)
    {
        cout << " Invalid Input ";
        return;
    }

    first = second = INT_MIN;
    for(i = 0; i < arr_size; i++)
    {
       if (arr[i] > first)
       {
           second = first;
           first = arr[i];
       }

       else if (arr[i] > second &&
                arr[i] != first)
       {
           second = arr[i];
       }
    }
    if (second == INT_MIN)
        cout << "There is no second largest"
                "element\n";
    else
        cout << "The second largest element is "
             << second;
}

// Driver code
int main()
{
    int n;
    cout<<"Enter Size Of Array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
            cin>>arr[i];
    print2ndlargest(arr, n);
    return 0;
}
