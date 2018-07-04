#include<iostream>
using namespace std;
main(){
 int x;
 while(cin>>x)
 {
   for(int k=1;k<=x;k=k+1)
   {
      if(x%k==0)
      {
      cout<<k<<" ";
      }
   }
   cout<<endl;
 }
system("pause");
return 0;
}
