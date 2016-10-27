#include <iostream>

using namespace std;

//Task 1 - Sorting

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

//Task 2 - Bisection
