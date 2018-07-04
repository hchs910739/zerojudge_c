#include<iostream>
using namespace std;
main(){
       int a;
       int ans[100000];
       while(cin>>a)
       {
                    for(int i=1;i<=a*2;i=i+2)
                    {
                            cin>>ans[i]>>ans[i+1];
                    }
                    for(int i=1;i<=a*2;i=i+2)
                    {
                            if(ans[i]>ans[i+1])
                            {
                                           cout<<">"<<endl;
                            }
                            if(ans[i]==ans[i+1])
                            {
                                           cout<<"="<<endl;
                            }
                            if(ans[i]<ans[i+1])
                            {
                                           cout<<"<"<<endl;
                            }
                    }
       }
system("pause");
return 0;
}
