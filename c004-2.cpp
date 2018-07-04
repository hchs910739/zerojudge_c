#include<iostream>
using namespace std;
main(){
       float a,b,c,x,y;
       int A,B;
       while(cin>>a)
       {
                    for(int i=1;i<=a+1;i++)
                    {
                            cin>>x>>y;
                            if(x==0&&y==0)
                            {
                                          cout<<0<<" "<<0<<endl;
                                          continue;
                            }
                            else if(x==1&&y==1)
                            {
                                 cout<<1<<" "<<0<<endl;
                                          continue;
                            }
                            a=(x+y)/2;
                            b=(x-y)/2;
                            A=a*10;
                            B=b*10;
                            if(A%10==0&&B%10==0&&a>=b&&b>0)
                            {
                                                   cout<<a<<" "<<b<<endl;
                            }
                            else if(A%10==0&&B%10==0&&a<=b&&a>0)
                            {
                                                   cout<<a<<" "<<b<<endl;
                            }
                            else
                            {
                                cout<<"impossible"<<endl;
                            }
                    }
       }
system("pause");
return 0;
}
