#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,y,r,x;
  while(n!=0)
  {
    r=n%10;
    sum+=r;
    n=n/10;
  }
  sum=y;
  if(y/10==0)
    cout<<"YES";
  else
  {
      while (y!=0)
      {
        r=y%10;
        x=(x*10)+r;
        y=y/10;
      }
      if(x==y)
       cout<<"YES":
      else
      cout<<"NO";
   }

return 0;
  
  
}
