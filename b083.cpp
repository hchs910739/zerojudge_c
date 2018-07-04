#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int x,y,c[101],d[101],C,D;
	double e[101],E;
	char a[101],b[101][101],A,B[101];
	while(scanf("%d",&x)!=EOF)
	{
		for(int i=1;i<=x;i++)
		{
			scanf("%d",&y);
			for(int j=1;j<=y;j++)
			{
				scanf("%c %s %d %d %lf",&a[j],b[j],&c[j],&d[j],&e[j]);
				printf("%c %s %d %d %lf",a[j],b[j],c[j],d[j],e[j]);
			}
			for(int j=1;j<y;j++)
			{
				for(int k=j+1;k<=y;k++)
				{
					if(a[j]==a[k]&&a[j]=='P')
					{
						if(c[j]==c[k])
						{
							if(d[j]==d[k])
							{
								if(e[j]>e[k])
								{
									A=a[j];
									a[j]=a[k];
									a[k]=A;
									strcpy(B,b[j]);
									strcpy(b[j],b[k]);
									strcpy(b[k],B);
									C=c[j];
									c[j]=c[k];
									c[k]=C;
									D=d[j];
									d[j]=d[k];
									d[k]=D;
									E=e[j];
									e[j]=e[k];
									e[k]=E;
									break;
								}
							}
							else if(d[j]>d[k])
							{
								A=a[j];
								a[j]=a[k];
								a[k]=A;
								strcpy(B,b[j]);
								strcpy(b[j],b[k]);
								strcpy(b[k],B);
								C=c[j];
								c[j]=c[k];
								c[k]=C;
								D=d[j];
								d[j]=d[k];
								d[k]=D;
								E=e[j];
								e[j]=e[k];
								e[k]=E;
								break;
							}
						}
						else if(c[k]>c[j])
						{
							A=a[j];
							a[j]=a[k];
							a[k]=A;
							strcpy(B,b[j]);
							strcpy(b[j],b[k]);
							strcpy(b[k],B);
							C=c[j];
							c[j]=c[k];
							c[k]=C;
							D=d[j];
							d[j]=d[k];
							d[k]=D;
							E=e[j];
							e[j]=e[k];
							e[k]=E;
							break;
						}
					}
					else if(a[j]==a[k]&&a[j]=='B')
					{
						if(c[j]==c[k])
						{
							if(d[j]==d[k])
							{
								if(e[j]<e[k])
								{
									A=a[j];
									a[j]=a[k];
									a[k]=A;
									strcpy(B,b[j]);
									strcpy(b[j],b[k]);
									strcpy(b[k],B);
									C=c[j];
									c[j]=c[k];
									c[k]=C;
									D=d[j];
									d[j]=d[k];
									d[k]=D;
									E=e[j];
									e[j]=e[k];
									e[k]=E;
									break;
								}
							}
							else if(d[j]<d[k])
							{
								A=a[j];
								a[j]=a[k];
								a[k]=A;
								strcpy(B,b[j]);
								strcpy(b[j],b[k]);
								strcpy(b[k],B);
								C=c[j];
								c[j]=c[k];
								c[k]=C;
								D=d[j];
								d[j]=d[k];
								d[k]=D;
								E=e[j];
								e[j]=e[k];
								e[k]=E;
								break;
							}
						}
						else if(c[k]>c[j])
						{
							A=a[j];
							a[j]=a[k];
							a[k]=A;
							strcpy(B,b[j]);
							strcpy(b[j],b[k]);
							strcpy(b[k],B);
							C=c[j];
							c[j]=c[k];
							c[k]=C;
							D=d[j];
							d[j]=d[k];
							d[k]=D;
							E=e[j];
							e[j]=e[k];
							e[k]=E;
							break;
						}
					}
					else if(a[j]=='B'&&a[k]=='P')
					{
						A=a[j];
						a[j]=a[k];
						a[k]=A;
						strcpy(B,b[j]);
						strcpy(b[j],b[k]);
						strcpy(b[k],B);
						C=c[j];
						c[j]=c[k];
						c[k]=C;
						D=d[j];
						d[j]=d[k];
						d[k]=D;
						E=e[j];
						e[j]=e[k];
						e[k]=E;
						break;
					}
				}
			}
			/*for(int z=1;z<=y;z++)
			{
				printf("%c %s",a[z],b[z]);
			}
			printf("\n=====\n");*/
		}
	}
system("pause");
return 0;
}
