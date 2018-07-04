#include<iostream>
using namespace std;
main()
{
      long long int a,n,x=1;
      while(cin>>a>>n)
      {
                      if(n>0)
                      {
                      for(long long int k=1;k<=n;k++)
                      {
                             x=a*x;
                      }
                      cout<<x<<endl;
                      x=1;
                      }
      }
system("pause");
return 0;
}
