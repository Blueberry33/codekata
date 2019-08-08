#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	char a[30];
	cin.getline(a,30);
	int n=strlen(a);
	for(int i=0;i<n;i++)
		if(a[i]==' ')
			n--;
	int f=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			f++;
	}
	if(f==0)
		cout<<"yes";
	else
		cout<<"no";
		
	return 0;
}
