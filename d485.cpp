#include<iostream>
using namespace std;
main(){
       int x,y,a=0;
       while(cin>>x>>y)
       {
                       if(x%2==0&&y%2==0)
                       {
                                 cout<<(y-x)/2+1<<endl;
                       }
                       else if(x%2==1&&y%2==0)
                       {
                                 cout<<(y-(x+1))/2+1<<endl;
                       }
                       else if(x%2==1&&y%2==1)
                       {
                                 cout<<((y-1)-(x+1))/2+1<<endl;
                       }
                       else if(x%2==0&&y%2==1)
                       {
                                 cout<<((y-1)-x)/2+1<<endl;
                       }
       }
system("pause");
return 0;
}
