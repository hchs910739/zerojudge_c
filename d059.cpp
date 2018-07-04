#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
main(){
       double n[10];
       int ans[5]={0,1,0,0,0};
       while(cin>>n[1]>>n[2]>>n[3]>>n[4]>>n[5]>>n[6])
       {
                                                                 for(int k=1;k<=n[2];k++)
                                                                 {
                                                                       ans[1]=ans[1]*n[1];  
                                                                 }
                                                                 cout<<ans[1]<<endl;
                                                                 printf("%.3f\n",sqrt(n[3]));
                                                                 if(n[4]>0)
                                                                 {
                                                                           cout<<n[4]<<endl;
                                                                 }
                                                                 else if(n[4]<0)
                                                                 {
                                                                           cout<<-n[4]<<endl;
                                                                 }
                                                                 cout<<n[5]<<endl;
                                                                 ans[1]=1;                                             
       }
system("pause");
return 0;
}
