#include<iostream>
using namespace std;
main(){
       int a,M=0;
       int m[100000];
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>m[i];
                    }
                    for(int i=1;i<a;i++)
                    {
                            if(m[i]>m[i+1])
                            {
                                           M=M+(m[i]-m[i+1])*10;
                            }
                            if(m[i]<m[i+1])
                            {
                                           M=M+(m[i+1]-m[i])*20;
                            }
                    }
                    cout<<M<<endl;
                    M=0;
       }
system("pause");
return 0;
}
