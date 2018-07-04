#include<iostream>
using namespace std;
main(){
       int n[100];
       int a=0;
       while(cin>>n[1]>>n[2]>>n[3]>>n[4]>>n[5]>>n[6]>>n[7]>>n[8]>>n[9]>>n[10]>>n[11]>>n[12]>>n[13]>>n[14]>>n[15])
       {
               for(int k=1;k<=15;k=k+3)
               {
                       if(n[k]+n[k+1]>n[k+2] && n[k+1]+n[k+2]>n[k] && n[k]+n[k+2]>n[k+1])
                       {
                              a=a+1;
                       }
                       else
                       {
                           a=a;
                       }
               }
               cout<<a<<endl;
               a=0;
       }
system("pause");
return 0;
}
