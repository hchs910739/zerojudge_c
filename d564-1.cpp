#include<iostream>
using namespace std;
int main(){
    char a[100][10];
    int b[100];
    int i;
    for(i=0;;i++)
    {
            cin>>a[i];
            if(a[i][0]=='E')
            {
                            break;
            }
            cin>>b[i];
    }
    for(int j=0;j<i;j++)
    {
            if(a[j][2]=='+')
            {
                            cout<<'"'<<"C++"<<'"'<<" can use cout<<n; to show integer like "<<b[j]<<"."<<endl;
            }
            else if(a[j][0]=='J')
            {
                 cout<<'"'<<"Java"<<'"'<<" can use System.out.print(n); to show integer like "<<b[j]<<"."<<endl;
            }
            else if(a[j][0]=='P')
            {
                 cout<<'"'<<"Pascal"<<'"'<<" can use Write(n); to show integer like "<<b[j]<<"."<<endl;
            }
            else if(a[j][0]=='B')
            {
                 cout<<'"'<<"Basic"<<'"'<<" can use Print n to show integer like "<<b[j]<<"."<<endl;
            }
            else
            {
                cout<<'"'<<"C"<<'"'<<" can use printf("<<'"'<<"%d"<<'"'<<",n); to show integer like "<<b[j]<<"."<<endl;
            }
    }
system("pause");
return 0;
}
