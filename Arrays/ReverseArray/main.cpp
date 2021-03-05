#include <iostream>
#include <cmath>
using namespace std;

 void reverse(int arr[], int n)
{
	int low = 0, high = n - 1;

	while(low < high)
	{
		int temp = arr[low];

		arr[low] = arr[high];

		arr[high] = temp;

		low++;
		high--;
	}
}


int main() {

     int n;
    cout<<"Enter Size Of Array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
            cin>>arr[i];

      cout<<"Before Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       reverse(arr, n);

       cout<<"After Reverse"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

}
