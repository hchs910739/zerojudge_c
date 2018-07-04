#include<iostream>
#include<cstring>
using namespace std;
main()
{
      char c[1000000];
      int a,b=1;
      while(cin>>c)
      {
          a=strlen(c);
          for(int i=a-1;i>=0;i--)
          {
                  if(c[i]==48&&b==1)
                  {
                                    if(c[i-1]==48)
                                    {
                                                  b=1;
                                    }
                                    else
                                    {
                                        b=0;
                                    }
                                    continue;
                  }
                  cout<<c[i];
                  b=2;
          }
          cout<<endl;
          b=1;
      }
system("pause");
return 0;
}

