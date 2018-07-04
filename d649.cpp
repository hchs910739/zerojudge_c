#include<iostream>
using namespace std;
main(){
       long long int x;
       while(cin>>x)
       {
                    if(x==0)break;
                    for(int i=1;i<=x;i++)
                    {
                            for(int j=x-i;j>=1;j--)
                            {
                                    cout<<"_";
                            }
                            for(int k=i;k>=1;k--)
                            {
                                    cout<<"+";
                            }
                            cout<<endl;
                    }
       }
system("pause");
return 0;
}
