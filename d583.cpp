#include<iostream>
using namespace std;
main(){
       int a;
       int b[1000];
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>b[i];
                    }
                    for(int j=1;j<=a;j++)
                    {
                            cout<<j<<" ";
                    }
                    cout<<endl;
       }
system("pause");
return 0;
}
