#include<iostream>
using namespace std;

int main()
{
	int i=0, j=0, k=0, l=0;
	int first=0, second=0, third=0, fourth=0;
	int ****p=NULL;

	cout<<"Enter arrray dimensions\n";
	cin>>first;
	cin>>second;
	cin>>third;
	cin>>fourth;

	cout<<"Allocating memory to array:\n";

	p=new int***[first];

	for(i=0;i<first;i++)
	{
		p[i]=new int**[second];
	}

	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			p[i][j]=new int*[third];
		}
	}
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				p[i][j][k]=new int[fourth];
			}
		}
	}


	cout<< "Enter the elements\n";	
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				for(l=0;l<fourth;l++)
					{
						cin>>p[i][j][k][l];
					}
			}
		}
	}

	cout<< "array elements are\n";	
	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				for(l=0;l<fourth;l++)
				{
					cout<<p[i][j][k][l]<<"\t";
				}
				cout<<"\n";
			}
			cout<<"-------------------------\n";
		}
	}

	cout<<"Deallocation of memory \n";

	delete []p;
	cout<<"Deallocation done\n";


}