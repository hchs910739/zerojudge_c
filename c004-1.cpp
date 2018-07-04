#include<iostream>
using namespace std;
main(){
       int a,w,x,y,z;
       while(cin>>a)
       {
                    for(int i=1;i<=a;i++)
                    {
                            cin>>w>>x;
                            y=(x+w)/2;
                            z=(w-x)/2;
                    }
                    cout<<y<<z;
       }
system("pause");
return 0;
}
