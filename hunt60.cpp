    
#include<iostream>
using namespace std;
int main()
{
    int n,k,temp,f=0;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    
    for(int j=1;;j++)
    {
        temp=a[0];
        for(int i=0;i<n-1;i++)
            a[i]=a[i+1];
        a[n-1]= temp;
        for(int i=0;i<n;i++)
	    {
	       if(a[i]==b[i])
	    	{
	    		cout<<j;
	    		f++;
	    		break;
	    	}
	    }
	    if(f==1)
	    {
	    	break;
	    }

    }
    
}
