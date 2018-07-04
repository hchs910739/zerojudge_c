#include<iostream>
using namespace std;
main(){
       long long int x,y;
       while(cin>>x>>y)
       {
                       if(x>=y)
                       {
                               cout<<x-y<<endl;
                       }
                       
                       if(x<y)
                       {
                               cout<<y-x<<endl;
                       }
       }
system("pause");
return 0;
}
