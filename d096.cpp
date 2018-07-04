#include<iostream>
using namespace std;
int main(){
    long long int x,a;
    while(cin>>x)
    {
                 a=(x+1)/2;
                 cout<<((a*a)*2-1)+(((a*a)-1)*2-1)+(((a*a)-2)*2-1)<<endl;
    }
system("pause");
return 0;
}
