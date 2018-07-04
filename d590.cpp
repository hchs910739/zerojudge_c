#include<iostream>
using namespace std;
main(){
       int n[1001];
       string a[1001];
       int i,j;
       while(1)
       {
               for(i=1;;i=i+2)
               {
                              cin>>n[i]>>n[i+1];
                              if(n[i]==0&&n[i+1]==0)
                              {
                                                    break;
                              }
                              else if(n[j]%n[j+1]==0)
                              {
                                     a[i]="Win";
                              }
                              else if(n[j]%n[j+1]==1)
                              {
                                     a[i]="Loss";
                              }
               }
               for(j=1;j<i;j=j+2)
               {
                                 cout<<a[j]<<endl;
               }
       }
system("pause");
return 0;
}
