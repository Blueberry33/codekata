#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && c+a>=b)
	{
		if(a!=b && b!=c && c!=a)
			cout<<"yes";
		else
			cout<<"no";
	}
	else
		cout<<"no";
	return 0;
}
