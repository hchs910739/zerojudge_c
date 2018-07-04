#include<iostream>
using namespace std;
main(){
       long long int n,a=1;
       while(cin>>n)
       {
                    for(int k=1;k<=n;k=k+1)
                    {
                            a=a*k;
                    }
                    cout<<a<<endl;
                    a=1;
       }
system("pause");
return 0;
}
