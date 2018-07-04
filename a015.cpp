#include<iostream>
using namespace std;
main(){
       int x,y;
       while(cin>>x>>y)
       {
                       int a[x][y];
                       for(int i=0;i<x;i++)
                       {
                               for(int j=0;j<y;j++)
                               {
                                       cin>>a[i][j];
                               }
                       }
                       for(int k=0;k<y;k++)
                       {
                               for(int l=0;l<x;l++)
                               {
                                       cout<<a[l][k]<<" ";
                               }
                               cout<<endl;
                       }
       }
system("pause");
return 0;
}
