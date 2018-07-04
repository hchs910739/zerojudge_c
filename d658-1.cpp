#include<iostream>
using namespace std;
main(){
       int a[1000];
       int i;
       int b[1000];
       for(i=1;;i++)
       {
               cin>>a[i];
               if(a[i]<0)
               {
                         break;
               }
       }
       for(int j=1;j<i;j++)
       {
               for(int k=1;;k=k*2)
               {
                       if(k>=a[j])
                       {
                                 break;
                       }
                       b[j]++;
               }
       }
       for(int l=1;l<i;l++)
       {
               cout<<"Case "<<l<<": "<<b[l]<<endl;
       }
system("pause");
return 0;
}
