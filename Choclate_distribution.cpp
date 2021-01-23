#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    int m;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>m;
	    int min_diff=INT_MAX;
	    sort(arr,arr+n);
	    for(int j=0;j+m-1<n;j++)
	    {
	        if(arr[j+m-1]-arr[j]<min_diff)
	        {
	            min_diff=arr[m+j-1]-arr[j];
	        }
	    }
	    cout<<min_diff<<endl;
	    t--;
	}
	return 0;
}
