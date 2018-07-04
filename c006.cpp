#include<iostream>
using namespace std;
main(){
       int a,b,c,d,i;
       int ans[100000];
       for(i=1;;i++)
       {
                    cin>>a>>b>>c>>d;
                    if(a==0&&b==0&&c==0&&d==0)
                    {
                                              break;
                    }
                    if(a>b)
                    {
                           ans[i]=ans[i]+(a-b)*9;
                    }
                    else if(a<b)
                    {
                           ans[i]=ans[i]+(40+a-b)*9;
                    }
                    if(c>b)
                    {
                           ans[i]=ans[i]+(c-b)*9;
                    }
                    else if(c<b)
                    {
                           ans[i]=ans[i]+(40+c-b)*9;
                    }
                    if(d>c)
                    {
                           ans[i]=ans[i]+((40+c-d)*9)+1080;
                    }
                    if(d<c)
                    {
                           ans[i]=ans[i]+((c-d)*9)+1080;
                    }
       }
       for(int j=1;j<=i-1;j++)
       {
               cout<<ans[j]<<endl;
       }
system("pause");
return 0;
}
