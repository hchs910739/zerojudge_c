#include<iostream>
using namespace std;
int main(){
	int x,a,b;
	while(cin>>x)
	{
		for(int i=1;i<=x;i++)
		{
			cin>>a>>b;
			if(a>=b)
			{
				for(int j=a;;j++)
				{
					if(j%a==0&&j%b==0)
					{
						cout<<j<<endl;
						break;
					}
				}
			}
			else
			{
				for(int k=b;;k++)
				{
					if(k%a==0&&k%b==0)
					{
						cout<<k<<endl;
						break;
					}
				}
			}
		}
	}
system("pause");
return 0;
}
