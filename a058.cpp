#include<iostream>
using namespace std;
main(){
       int x,y,a=0,b=0,c=0;
       while(cin>>x)
       {
                    for(int i=1;i<=x;i++)
                    {
                            cin>>y;
                            if(y%3==0)a++;
                            else if(y%3==1)b++;
                            else c++;
                    }
                    cout<<a<<" "<<b<<" "<<c<<endl;
                    a=0;
                    b=0;
                    c=0;
       }
system("pause");
return 0;
}
