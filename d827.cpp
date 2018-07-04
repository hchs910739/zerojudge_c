#include<iostream>
using namespace std;
main(){
       int x,a,b;
       while(cin>>x)
       {
                    a=x%12;
                    b=x/12;
                    cout<<b*50+a*5<<endl;
       }
system("pause");
return 0;
}
