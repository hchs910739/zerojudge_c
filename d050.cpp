#include<iostream>
using namespace std;
main(){
       int h;
       while(cin>>h)
       {
                    if(h>=15)
                    {
                             cout<<h-15<<endl;
                    }
                    if(h<15)
                    {
                            cout<<h+9<<endl;
                    }
       }
system("pause");
return 0;
}
