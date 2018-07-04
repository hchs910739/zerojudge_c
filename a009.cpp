#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char a[1000];
    int b,c;
    while(cin.getline(a,1000))
    {
                 b=strlen(a);
                 for(int i=0;i<b;i++)
                 {
                         c=a[i];
                         c=c-7;
                         a[i]=c;
                         cout<<a[i];
                 }
                 cout<<endl;
                 
    }
system("pause");
return 0;
}
