#include<iostream>
using namespace std;
main(){
       int x;
       while(cin>>x)
       {
                    if(0<=x&&x<=5)
                    {
                                cout<<0<<endl;
                    }
                    if(6<=x&&x<=11)
                    {
                                cout<<590<<endl;
                    }
                    if(12<=x&&x<=17)
                    {
                                cout<<790<<endl;
                    }
                    if(18<=x&&x<=59)
                    {
                                cout<<890<<endl;
                    }
                    if(60<=x)
                    {
                                cout<<399<<endl;
                    }
       }
system("pause");
return 0;
}
