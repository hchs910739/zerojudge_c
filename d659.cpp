#include<iostream>
using namespace std;
int main(){
    int a;
    int x,y,z;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
            cin>>x>>y>>z;
            if(x>y&&y>z)
            {
                        cout<<"Case "<<i<<": "<<y<<endl;
            }
            if(x>z&&z>y)
            {
                        cout<<"Case "<<i<<": "<<z<<endl;
            }
            if(y>x&&x>z)
            {
                        cout<<"Case "<<i<<": "<<x<<endl;
            }
            if(y>z&&z>x)
            {
                        cout<<"Case "<<i<<": "<<z<<endl;
            }
            if(z>y&&y>x)
            {
                        cout<<"Case "<<i<<": "<<y<<endl;
            }
            if(z>x&&x>y)
            {
                        cout<<"Case "<<i<<": "<<x<<endl;
            }
    }
system("pause");
return 0;
}
