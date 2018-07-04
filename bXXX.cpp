#include<iostream>
using namespace std;
main(){
       int a,b,c,d,i;
       int ans[100];
       while(1)
       {
               for(i=1;;i++)
               {
                            cin>>a>>b>>c>>d;
                            if(a==0&&b==0&&c==0&&d==0)
                            {
                                                      break;
                            }
                            else if((a*b)%(c*d)==0)
                            {
                                 ans[i]=(a*b)/(c*d);
                            }
                            else if((a*b)%(c*d)!=0)
                            {
                                 ans[i]=-1;
                            }
               }
               for(int j=1;j<i;j++)
               {
                       cout<<ans[j]<<endl;
               }
       }
system("pause");
return 0;
}
