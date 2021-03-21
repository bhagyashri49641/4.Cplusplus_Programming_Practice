/*
1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17, ……..
This series is a mixture of 2 series – all the odd terms in this series form a Fibonacci series and all the even terms are the prime numbers in ascending order.

Write a program to find the Nth term in this series.

The value N is a Positive integer that should be read from STDIN.
The Nth term that is calculated by the program should be written to STDOUT.
Other than the value of Nth term, no other characters/strings or message should be written to STDOUT.
For example, when N = 14, the 14th term in the series is 17. So only the value 17 should be printed to STDOUT.

*/
#include<iostream>
using namespace std;
#define MAX 9999

void PrimeSeries(int);
void FibonacciSeries(int);

int main()
{
	int N=0;
	//cout<<"Enter Position: ";
	cin>>N;
	if(N%2==0)
	{
		PrimeSeries(N/2);
	}
	else
	{
		FibonacciSeries((N/2)+1);
	}
	return 0;
}

void PrimeSeries(int Num)
{
	int flag = 0;
	int Pos=0;
	int i,j=0;
	for (i=2; i<=MAX; i++)   // 2 pasun 9999 pryant sgle number check krt ja jovr tuzya position sathi yogya to number milt nahi
	{
		flag = 0; // juna flag jr 1 asel tr next iteration la pn 1 ch deil as hou naye mnun tyala 0 kel

		for(j=2;j<=(i/2);j++) // select kelela number prime ahe ka nahi bgh
		{
			if(i%j==0)
			{
				flag = 1; // prime nsel tr flag 1 kr
				break;
			}
		}

		if (flag==0) // flag 0 ch ahe mnje ghetlela number prime ahe
		{
			Pos++; // prime sapdla tr count vadhv
			if (Pos==Num)   //jr apla count dilelya position vr bst asel tr break kr ... this is you ans
			{
				cout<<i; // select kelela number as a output mnun display kr
				break;
			}
		}

		
	}
}
void FibonacciSeries(int Pos)
{
	int a=0; 
	int b=1;
	int c=0;
	//the below code is for fibonacci series till nth position
	for(int i=1;i<=Pos;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	cout<<a;
}