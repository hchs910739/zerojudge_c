#include<iostream>
using namespace std;
main(){
       int x,y,z,i,max=1;
       while(cin>>x>>y)
       {
          if(x<=y)
          {
                       for(int j=x;j<=y;j++)
                       {
                          z=j;
                                               for(i=1;;i++)
                                               {
                                                             if(z==1)break;
                                                             else if(z%2==1)z=z*3+1;
                                                             else z=z/2;
                                               }
                          if(max>i)max=max;
                          else max=i;
                       }
                       cout<<x<<" "<<y<<" "<<max<<endl;
                       max=1;
          }
          else
          {
              for(int j=x;j>=y;j--)
                       {
                          z=j;
                                               for(i=1;;i++)
                                               {
                                                             if(z==1)break;
                                                             else if(z%2==1)z=z*3+1;
                                                             else z=z/2;
                                               }
                          if(max>i)max=max;
                          else max=i;
                       }
                       cout<<x<<" "<<y<<" "<<max<<endl;
                       max=1;
          }
       }
system("pause");
return 0;
}
