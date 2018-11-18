#include<iostream>
using namespace std;

void printArray(int a[], int size)
{
	int i;
	for (i=0; i < size; i++)
    	cout<<a[i]<<"\t";
    cout<<"\n";
}

int partition (int a[], int l, int h)
{
	int pivot = a[h];
	int i = (l - 1),t;

	for (int j = l; j <= h- 1; j++)
	{

		if (a[j] <= pivot)
		{
			i++; 
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[i+1];
	a[i+1]=a[h];
	a[h]=t;
	return (i + 1);
	
}

void quickSort(int a[], int l, int h)
{
  
	if (l < h)
	{
	
		int pi = partition(a, l, h);

		quickSort(a, l, pi - 1);
		quickSort(a, pi + 1, h);
	}
	
}




int main()
{
	int a[] = {10, 6,2,9,11, 1, 5};
	int s = sizeof(a)/sizeof(a[0]);
	quickSort(a, 0, s-1);
	cout<<"\n Sorted Array : \n";
	printArray(a, s);
	return 0;
}
