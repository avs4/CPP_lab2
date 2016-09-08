#include <iostream>
#include <math.h>
using namespace std;

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
