#include<iostream>
using namespace std;
main(){
       int x,a=0;
       while(cin>>x)
       {
                    for(int k=1;k<x;k++)
                    {
                            if(x%k==0)
                            {
                            a=a+k;
                            }
                    }
                    if(a<x)
                    {
                           cout<<"����"<<endl;
                    }
                    if(a==x)
                    {
                           cout<<"������"<<endl;
                    }
                    if(a>x)
                    {
                           cout<<"�ռ�"<<endl;
                    }
                    a=0;
       }
system("pause");
return 0;
}
