#include<iostream>
using namespace std;
int main(){
    int a,k;
    int b[100];
    int c[100];
    while(cin>>a)
    {
                 for(int i=1;i<=a;i++)
                 {
                         cin>>b[i]>>c[i];
                 }
                 for(int i=1;i<=a;i++)
                 {
                         for(int j=1;j<=c[i];j++)
                         {
                                 for(k=1;k<=b[i];k++)
                                 {
                                         for(int l=1;l<=k;l++)
                                         {
                                                 cout<<k;
                                         }
                                         cout<<endl;
                                 }
                                 for(int k=b[i]-1;k>=1;k--)
                                 {
                                         for(int l=1;l<=k;l++)
                                         {
                                                 cout<<k;
                                         }
                                         cout<<endl;
                                 }
                                 cout<<endl;
                         }
                 }
    }
system("pause");
return 0;
}
