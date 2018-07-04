#include<iostream>
using namespace std;
main(){
       int a,c,d,e;
       int b[1000],f[1000];
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>b[i];
                    }
                    for(int j=1;j<=a;j++)
                    {
                            c=(b[j]%10)+((b[j]%100)/10)+((b[j]%1000)/100)+((b[j]%10000)/1000)+((b[j]%100000)/10000)+((b[j]%1000000)/100000)+(b[j]/10000000);
                            d=(c/10)+(c%10);
                            e=(d%10)+(d/10);
                            f[j]=e;
                    }
                    for(int k=1;k<=a;k++)
                    {
                            if(f[k]==2)cout<<f[k]<<", "<<"Yes"<<endl;
                            else cout<<f[k]<<", "<<"No"<<endl;
                    }
       }
system("pause");
return 0;
}
