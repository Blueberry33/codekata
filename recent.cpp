#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int n,k=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[k]=a[i];
				k++;
				break;
			}
		}
	}
	sort(b.begin(),b.end());
	for(int i=0;i<k;i++)
	{
		if(i==0)
			cout<<a[i];
		else
			cout<<" "<<a[i];
	}
	
	return 0;
}
