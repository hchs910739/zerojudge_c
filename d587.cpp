#include<iostream>
using namespace std;
int main(){
    long long int a;
    int b[100000];
    while(cin>>a)
    {
                 for(int i=1;i<=a;i++)
                 {
                         cin>>b[i];
                 }
                 for(int i=1;i<=a;i++)
                 {
                         if(b[i]==1)
                         {
                                    cout<<b[i]<<" ";
                         }
                 }
                 for(int i=1;i<=a;i++)
                 {
                         if(b[i]==2)
                         {
                                    cout<<b[i]<<" ";
                         }
                 }
                 for(int i=1;i<=a;i++)
                 {
                         if(b[i]==3)
                         {
                                    cout<<b[i]<<" ";
                         }
                 }
                 cout<<endl;
    }
system("pause");
return 0;
}
