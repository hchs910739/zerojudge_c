#include<iostream>
using namespace std;
int main(){
    int a;
    int b[100];
    int c[1000];
    int h[100]={0};
    int l[100]={0};
    cin>>a;
                 for(int i=1;i<=a;i++)
                 {
                         cin>>b[i];
                         for(int j=1;j<=b[i];j++)
                         {
                                 cin>>c[j];
                         }
                         for(int j=1;j<b[i];j++)
                         {
                                 if(c[j]==c[j+1])
                                 {
                                                 h[i]=h[i];
                                                 l[i]=l[i];
                                 }
                                 else if(c[j+1]>c[j])
                                 {
                                                  h[i]++;
                                 }
                                 else if(c[j+1]<c[j])
                                 {
                                      l[i]++;
                                 }
                         }
                         cout<<"Case "<<i<<": "<<h[i]<<" "<<l[i]<<endl;
                 }
system("pause");
return 0;
}
