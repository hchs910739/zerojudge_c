#include<iostream>
using namespace std;
main(){
       int m;
       while(cin>>m)
       {
                    if(m%4==0&&m%100!=0||m%400==0)
                    {
                           cout<<"¶|¦~"<<endl;                       
                    }
                    else{
                         cout<<"¥­¦~"<<endl;
                         }
                         
       }
system("pause");
return 0;
}
