#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
	// your code goes here
	char a[30];
	cin.getline(a,30);
	for(int i=0;a[i]!='\0';i++)
	{
		if(isupper(a[i]))
			{a[i]=tolower(a[i]);
				
			}
			
		else if(islower(a[i]))
			{a[i]=toupper(a[i]);
				
			}
	
	}
	cout<<a;
	return 0;
}
