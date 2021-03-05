#include <iostream>
#include <cmath>
using namespace std;


void leaders(int arr[], int n)
{
	int currLeader = arr[n - 1];

	cout<<currLeader<<" ";

	for(int i = n - 2; i >= 0; i--)
	{
		if(currLeader< arr[i])
		{
			currLeader = arr[i];

			cout<<currLeader<<" ";
		}
	}
}



int main() {

     int n;
     cout<<"Enter size of array";
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }

      leaders(arr, n);

}
