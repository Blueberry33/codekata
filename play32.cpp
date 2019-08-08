#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,f=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{	cin>>a[i];
		if(a[i]==k)
		{
			f++;
		}
	}
	if(f!=0)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}
