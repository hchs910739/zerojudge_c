#include<iostream>
#include<cmath>
using namespace std;
main(){
       int a,x,y,z,ans=0,b;
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>x>>y;
                            if(sqrt(x)-int(sqrt(x))!=0)b=int(sqrt(x))+1;
                            else b=sqrt(x);
                            for(int j=b;j<=sqrt(y);j++)
                            {
                               z=j*j;
                               ans=ans+z;
                            }
                            cout<<"Case "<<i<<": "<<ans<<endl;
                            ans=0;
                            }
       }
system("pause");
return 0;
}
