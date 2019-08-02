#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)	
			cout<<a[0];
		else
			cout<<" "<<a[i];
	}
	
	return 0;
}
