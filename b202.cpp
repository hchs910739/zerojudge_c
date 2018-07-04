#include<iostream>
using namespace std;
main(){
       int x;
       int p[901];
       int ans[301];
       while(cin>>x)
       {
                    for(int i=1;i<=x*3;i=i+3)
                    {
                            cin>>p[i]>>p[i+1]>>p[i+2];
                            if(p[i]==p[i+1]||p[i+1]==p[i+2]||p[i+2]==p[i])
                            {
                                                                          ans[i]=0;
                            }
                            else
                            {
                                ans[i]=1;
                            }
                    }
                    for(int k=1;k<=x*3;k=k+3)
                    {
                            if(ans[k]==0)
                            {
                                         cout<<"NO"<<endl;
                            }
                            else
                            {
                                cout<<"YES"<<endl;
                            }
                    }
                    
       }
system("pause");
return 0;
}
