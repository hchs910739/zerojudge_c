#include<iostream>
using namespace std;
main(){
       int x;
       int a[1000];
       while(cin>>x)
       {
                    if(x==0)break;
                    a[1]=1;
                    a[2]=1;
                    for(int i=3;i<=x;i++)
                    {
                            a[i]=a[i-a[i-1]]+a[i-1-a[i-2]];
                    }
                    cout<<a[x]<<endl;
       }
system("pause");
return 0;
}
