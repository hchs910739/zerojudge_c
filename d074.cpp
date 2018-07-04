#include<iostream>
using namespace std;
main(){
       int x,a,k;
       int n[1000];
       while(cin>>x)
       {
                    for(k=1;k<=x;k++)
                    {
                            cin>>n[k];
                    }
                    for(int i=1;i<=x;i++)
                    {
                            if(n[i]>a)
                            {
                                      a=n[i];
                            }
                    }
                    cout<<a<<endl;
       }
system("pause");
return 0;
}
