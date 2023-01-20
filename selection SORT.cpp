#include<iostream>
using namespace std;

int main()
{
	int arr[5]={0,51,28,34,49};
	for(int i=0;i<5-1;i++)
	{
		int min=i;
		for(int j = i+1;j<5;j++)
		{
			if (arr[j]<arr[min])
			{
				min=j;
				//cout<<min<<endl;
			}
		}
		swap(arr[min],arr[i]);
		
	}
	
	
}
