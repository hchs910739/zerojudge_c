#include<iostream>
using namespace std;
main(){
       int i,a=1;
       int n[100];
       while(1)
       {
               for(int l=1;;l++)
               {
                    cin>>n[l];
                    for(i=1;;i++)
                    {
                                 a=a*2;
                                 for(int k=1;;k++)
                                 {
                                      if(a>=n[k])
                                      {
                                              n[k]=i;
                                              break;
                                      }
                                 }
                    }
                    a=1;
               }
       }
system("pause");
return 0;
}
