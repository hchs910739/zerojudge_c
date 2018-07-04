#include<iostream>
using namespace std;
int main(){
    int a;
    int b[100];
    int c[100];
    int d[100];
    while(cin>>a)
    {
                 for(int i=1;i<=a;i++)
                 {
                         cin>>b[i]>>c[i];
                 }
                 for(int j=1;j<=a;j++)
                 {
                         if(b[j]%2==1&&c[j]%2==1)
                         {
                                                 for(int k=b[j];k<=c[j];k=k+2)
                                                 {
                                                         d[j]=d[j]+k;
                                                 }
                         }
                         else if(b[j]%2==0&&c[j]%2==1)
                         {
                              for(int k=b[j]+1;k<=c[j];k=k+2)
                                                 {
                                                         d[j]=d[j]+k;
                                                 }
                         }
                         else if(b[j]%2==1&&c[j]%2==0)
                         {
                              for(int k=b[j];k<=c[j]-1;k=k+2)
                                                 {
                                                         d[j]=d[j]+k;
                                                 }
                         }
                         else
                         {
                             for(int k=b[j]+1;k<=c[j]-1;k=k+2)
                                                 {
                                                         d[j]=d[j]+k;
                                                 }
                         }
                 }
                 for(int l=1;l<=a;l++)
                 {
                         cout<<"Case "<<l<<": "<<d[l]<<endl;
                 }
    }
system("pause");
return 0;
}
