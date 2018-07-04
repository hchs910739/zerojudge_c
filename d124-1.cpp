#include<iostream>
using namespace std;
main(){
       long long int x,a=0,b=0;
       while(cin>>x)
       {
                    for(int i=10;i<=x;i=i*10)
                    {
                            a=x%i;
                            b=b+a;
                    }
                    if(b%3==0)
                    {
                              cout<<"yes"<<endl;
                    }
                    else
                    {
                        cout<<"no"<<endl;
                    }
                    a=0;
                    b=0;
       }
system("pause");
return 0;
}
