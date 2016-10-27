#include <iostream>
#include <math.h>
using namespace std;

//_______Task 1 - Sorting_______

int A[]={31, 30, 69, 8, 74, 11, 40, 7, 48, 26, 65, 43, 73, 89, 44, 67, 41, 95, 55, 68};

int main()
{
	int i,j,C;
	for (j=0;j<20;j++)
	{
		for (i=0;i<20-j-1;i++)
		{
			if (A[i]>A[i+1])
			{
				C=A[i];
				A[i]=A[i+1];
				A[i+1]=C;
			}
		}
	}
	for (i=0;i<20;i++)
	{
		cout<<A[i]<<' ';
	}
	system("pause");
}

//_______Task 2 - Bisection_______

float f(float x)
{
	return (exp(x)-cos(x)-1);
}

int main()
{
	float a=0,b=1,l,c,x=0;		// a,b - коннцы отрезка; c - середина отрезка; l - длина отрезка; x - искомая точка
	l=b-a;
	if (f(a)*f(b)<0)
		cout<<"OK"<<endl;	// можем использовать метод бисекции
	while (l>0.001)
	{
		l=l/2;
		c=b-l;
		x=c;
		if (f(c)*f(b)<0)
			a=c;
		else if (f(a)*f(c)<0)
			b=c;
		else
			break;
	}
	x=(float((int(x*10000))))/10000;		// округление в меньшую сторону с точночтью 0.0010
	cout<<"f(x)=0 in x="<<x<<endl;
	system("pause");
}
