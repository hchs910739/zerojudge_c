#include<iostream>
using namespace std;
main(){
       int x,k;
       int a[101];
       int b[101];
       while(cin>>x)
       {
                    for(k=1;k<=x;k++)
                    {
                            cin>>a[k]>>b[k];
                    }
                    for(int i=1;i<=x;i++)
                    {
                            cout<<(a[i]+b[i])*2<<endl;
                    }
       }
system("pause");
return 0;
}
