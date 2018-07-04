#include<iostream>
using namespace std;
main(){
       int a,i;
       int x,y,z;
       while(cin>>a)
       {
                    for(i=1;i<=a;i++)
                    {
                            cin>>x>>y>>z;
                    }
                    if(x==y&&y==z)
                    {
                                  cout<<"Case "<<i<<": "<<"Equilateral"<<endl;
                    }
       }
system("pause");
return 0;
}
