#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,c=1,max=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[j]<=a[j+1])
			{
				
				c++;
			}
			else
				break;
		}
		
		if(c>max)
			max=c;
		c=0;
	}
	cout<<max;
	return 0;
}
