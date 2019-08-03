#include<iostream>
using namespace std;
#include<cstring>
int main()
{
    char a[50],b[50],j=0,k;
    cin.getline(a,50);
    int n=strlen(a),f=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==' ')
           {
               f++;
               k=i;
           }
        if(a[i]!=' ' && f==1)
        {
            b[j]=a[i];
            j++;
        }

    }

    b[j]='\0';
    cout<<b<<" ";
    for(int i=0;;i++)
    {
        cout<<a[i];
        if(a[i]==' ')
            break;
    }
    return 0;

}
