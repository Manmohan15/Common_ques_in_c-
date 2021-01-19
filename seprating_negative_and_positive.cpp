#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int i,j;
	i=j=0;
	while(j<n)
	{
	    if(arr[j]<0)
	    {
	        int temp=arr[j];
	        arr[j]=arr[i];
	        arr[i]=temp;
	        i+=1;
	        j+=1;
	    }
	    else{
	        j+=1;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" "
	}
	
	return 0;
}
