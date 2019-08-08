#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && b+c>a && c+a>=b)
	{
		if(pow(a,2)+pow(b,2)==pow(c,2) || pow(c,2)+pow(b,2)==pow(a,2) || pow(a,2)+pow(c,2)==pow(b,2) )
			cout<<"yes";
		else
			cout<<"no";
	}
	else
		cout<<"no";
	return 0;
}
