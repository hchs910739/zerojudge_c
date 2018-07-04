#include<iostream>
using namespace std;
main()
{
      int x;
      while(cin>>x)
      {
                   if(x%3==0)
                   {
                             cout<<x/3<<endl;
                   }
                   if(x%3==1)
                   {
                             cout<<(x+2)/3<<endl;
                   }
                   if(x%3==2)
                   {
                             cout<<(x+1)/3<<endl;
                   }
      }
system("pause");
return 0;
}
