#include <iostream>
#include <cmath>
using namespace std;

// tax rate
/*int main() {
	int a,b,c;
	cout<<"what is your total income:";
	cin>>a;
	if (a<=150000)
	{b=10;
	}
	else if (a<=300000)
	{b=15;
	}
	else if (a<=500000)
	{b=20;
	}
	else
	{b=25;
	}
	c=(a/100)*b;
	cout<<"the tax payment is :";
	cout<<c;
	return 0;
}*/

// greatest number
/*int main() {
	int a,b,c,d;
	cout<<"what is first number:";
	cin>>a;
	cout<<"what is second number:";
	cin>>b;
	cout<<"what is third number:";
	cin>>c;
	d=a;
	if (d<b)
	{d=b;
	}
	if(d<c)
	{d=c;
	}
	cout<<"the greatest number is :";
	cout<<d;
	return 0;
}*/

// average
/*int main(){
	int a,b,c,d=0,e;
	cout<<"give the amout of numbers to be given:";
	cin>>b;
	a=b-1;
	int n[a];
	cout<<"enter all the numbers ";
	for(c=0;c<=a;c++)
	{cin>>n[c];
	d=d+n[c];
	}
	e=d/b;
	cout<<"the avearage of these numbers is:";
	cout<<e;
	return 0;
}*/

// squareroot
/*int main(){
	float a,b,c;
	cout<<"give the number to be squarerooted :";
	cin>>a;
	b=sqrt(a);
	cout<<"the square root is:";
	cout<<b;
	return 0;
}*/

// leapyear
/*int main(){
	int a,b,c;
	cout<<"give the starting year:";
	cin>>a;
	cout<<"give the ending year:";
	cin>>b;
	for(c=a;c<=b;c++)
	{
		if(c%4==0)
		{
			cout<<c;
			cout<<",";
		}
	}
	return 0;
}*/

// reverse of the numbers
/*int main()
{
	int a, b, c;
	a=123;
	b=a;
	c=0;
	while(b!=0)
	{
		c = (c * 10) + (b % 10);
		b=b/10;
	}
	cout << c;
	return 0;
}*/

// factorial of a number
/*int fac(int n)
{
	int f=1,i;
	if (n<0)
	{
		cout<<"A negative number cannot have a factorial";
		return 0;
	}
	else if(n==0)
	{
		cout<<n;
		return 0;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		return f;
	}
}

int main()
{
	int a;
	cout<<"enter the number to have the factorial :";
	cin>>a;
	cout<<fac(a);
	return 0;
}*/

/*class numbs
{
	int n, m, o, p;

public:
	void palc(int n);
	void armc(int n);
	int is_prime(unsigned n);
    void monthnu(unsigned n);
    int gcd(unsigned n, unsigned m);
	float hypo(int n , int m);
};

void numbs ::palc(int n)
{
	m = n;
	o = 0;
	while (m != 0)
	{
		o = (o * 10) + (m % 10);
		m = m / 10;
	}
	if (n == o)
	{
		cout << "Yes,This is a palindrome number.";
	}
	else
	{
		cout << "No,This is not a palindrome number.";
	}
}
void numbs ::armc(int n)
{
	m = n;
	o = 0;
	while (m != 0)
	{
		p = m % 10;
		o = o + (p * p * p * p);
		m = m / 10;
	}
	if (n == o)
	{
		cout << "Yes,This is a armstrong number.";
	}
	else
	{
		cout << "No,This is not a armstrong number.";
	}
}
int numbs ::gcd(unsigned n,unsigned m)
{
	if ( n > m )
	{
		o = n % m ;
		if (o != 0)
		{
			return gcd(o,m);
		}
		if (o == 0)
		{
			return m;
		}
	}
	else if ( m > n )
	{
		o = m % n ;
		if (o != 0)
		{
			return gcd(n,o);
		}
		if (o == 0)
		{
			return n;
		}
	}
	else if (m == n)
	{
		return n;
	}
	
}
float numbs::hypo(int n, int m)
{
	float r;
	r=sqrt((n*n)+(m*m));
    return r;
}
int numbs ::is_prime(unsigned n)
{
	if(n == 0 || n == 1)
	{
		return false;
	}
	if(n == 2)
	{
		return 1;
	}
	else
	{
		for(m=2;m<n;m++)
		{
			if(n%m==0)
			{
				o=1;
				break;
			}
			else 
			{o=0;
			}
		}
	}
	if (o==1)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
void numbs :: monthnu(unsigned n)
{
	if (n==1)
	{
		cout<<"January";
	}
	else if (n==2)
	{
		cout<<"Febuary";
	}
	else if (n==3)
	{
		cout<<"March";
	}
	else if (n==4)
	{
		cout<<"April";
	}
	else if (n==5)
	{
		cout<<"May";
	}
	else if (n==6)
	{
		cout<<"June";
	}
	else if (n==7)
	{
		cout<<"July";
	}
	else if (n==8)
	{
		cout<<"August";
	}
	else if (n==9)
	{
		cout<<"September";
	}
	else if (n==10)
	{
		cout<<"October";
	}
	else if (n==11)
	{
		cout<<"November";
	}
	else if (n==12)
	{
		cout<<"December";
	}
	else
	{
		cout<<"Enter a usable number";                                                                                                                 
	}
}
int main()
{
	int a,b,c;
	numbs n;
	cout << "enter the numbers to be checked :";
	cin >> a;
	n.monthnu(a);
	return 0;
}*/

/*class students
{
	char name[25];
	static int z;
	int b[3];
	
	public :
		void info();
		void marks();
		static int classmean();
		void reader();
};

void students :: info()
{
	cout<<"Enter you name:";
	cin>>gets(name);

}

void students :: marks()
{
	int i,c=0;
	for(i=0;i<=2;i++)
	{
		cout<<"Enter the marks for the three subjects:";
		cin>>b[i];
		c+=b[i];
	}
}

void students :: reader()
{
	int a;
	cout<<"give the roll call:";
	cin>>a;
	students.;
}*/

/*int main()
{	int student[20],a,i;
	cout<<"Enter the amount of students to have records:";
	cin>>a;
	for(i=0;i<=a;i++)
	{
		students student[i];
		cout<<"The roll call assigned is;"<<i;
		student[i].info();
		student[i].marks();
	}


	return 0;
}*/
