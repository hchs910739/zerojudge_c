#include<iostream>
using namespace std;
main(){
       long long int a,b;
       long long int c=0;
       while(cin>>a>>b)
       {
       for(int i=a;i<=b;i=i+1)
       {
                         c=c+i;
                         if(c>b)
                         {
                                cout<<i-a+1<<endl;
                                break;
                         }
       }
       c=0;
       }
system("pause");
return 0;
}
