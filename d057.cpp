#include<iostream>
using namespace std;
main(){
   int x,y,z;
   while(cin>>x>>y>>z)
   {
        if((x*x+y*y==z*z)||(x*x+z*z==y*y)||(y*y+z*z==x*x))
        {
        cout<<"right triangle"<<endl;
        }
        else if((x*x+y*y>z*z)||(x*x+z*z>y*y)||(y*y+z*z>x*x)||(y*y+x*x>z*z)||(z*z+x*x>y*y)||(z*z+y*y>x*x))
        {
        cout<<"acute triangle"<<endl;
        }
        else
        {
        cout<<"obtuse triangle"<<endl;
        }
    }
system("pause");
return 0;
}
