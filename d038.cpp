#include<iostream>
using namespace std;
long long int a[1000]={0};
int main(){
    int x;
    while(cin>>x)
    {
    if(x==0)
    {
            break;
    }
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=x;i++)
    {
            a[i]=a[i]+(a[i-1]+a[i-2]);
    }
    cout<<a[x]<<endl;
    for(int i=3;i<=x;i++)
    {
            a[i]=0;
    }
    }
system("pause");
return 0;
}
