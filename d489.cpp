#include<iostream>
using namespace std;
main()
{
      int x,y,z,a=0,s;
      while(cin>>x>>y>>z)
      {
                         s=(x+y+z)/2;
                         a=(s*(s-x)*(s-y)*(s-z));
                         cout<<a<<endl;
      }
system("pause");
return 0;
}
