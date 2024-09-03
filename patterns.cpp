#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main() {
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<i;
			
		}
		std::cout<<"\n";
	}
	return 0;
}*/

/*int main() {
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			std::cout<<char(64+j);
			
		}
		std::cout<<"\n";
	}
	return 0;
}*/

/*int main() {
	int i,j,k;
	for (i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
				std::cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			std::cout<<j;
			
		}
		std::cout<<"\n";
	}
	return 0;
}*/

/*int main() {
	int i,j,k,l;
	for (i=1;i<=5;i++)
	{
		for(l=5;l>i;l--)
		{
			std::cout<<" ";
		}
		for(k=1;k<=i;k++)
		{
			std::cout<<k;
		}
		for(j=i-1;j>0;j--)
		{
			std::cout<<j;
			
		}
		std::cout<<"\n";
	}
	return 0;
}*/

/*int main() 
{
	int n=5,a;
	for (a=1;a<=10;a++)
	{
		std::cout<<n<<"*"<<a<<"="<<n*a;
		std::cout<<"\n";
	}
	return 0;
}*/

/*int main()
{
	int a,b,i,j,k;
	cout<<"give the hieght and width of the box";
	cin>>i;
	cin>>j;
	for(b=1;b<=i;b++)
	{
		if(b==1)
		{
			for(a=1;a<=j;a++)
			{
				cout<<"*";
			}
		}
		else if(b==i)
		{
			for(a=1;a<=j;a++)
			{
				cout<<"*";
			}
		}
		else
		{
			if(b%2!=0)
			{
				for(a=1;a<=j;a++)
			{
				if(a==1)
				{
					cout<<"!";
				}
				else if(a==j)
				{
					cout<<"!";
				}
				else
				{
					cout<<" ";
				}
			}
			}
			else
			{
				for(a=1;a<=j;a++)
				{
					cout<<" ";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}*/

/*int main() {
	int i,j,k,l;
	for (i=1;i<=5;i++)
	{
		for(l=5;l>i;l--)
		{
			std::cout<<" ";
		}
		for(k=i;k>=2;k--)
		{
			cout<<k;
		}
		for(j=1;j<=i;j++)
		{
			cout<<j;
			
		}
		std::cout<<"\n";
	}
	return 0;
}*/
/*
int main() {
	int i,j,k,l;
	l=10;
	for (i=1;i<=l;i++)
	{
		for(k=i;k>=1;k--)
		{
			cout<<"*";
		}
		std::cout<<"\n";
	}
	for (j=l-1;j>=1;j--)
	{
		for(k=j;k>=1;k--)
		{
			cout<<"*";
		}
		std::cout<<"\n";
	}
	return 0;
}
*/