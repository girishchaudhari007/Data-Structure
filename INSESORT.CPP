#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[100];
	int i,j,size,temp;
	clrscr();

	cout<<"enter the array size\n";
	cin>>size;

	cout<<"enter the element \n";
	for(i=0;i<size;i++)
	{
	 cin>>arr[i];
	}
	cout<<"your array\n";
	for(i=0;i<size;i++)
	{
	 cout<<arr[i]<<"\n";
	}

	for(i=1;i<size;i++)
	{
	 j=i+1;
	 while(arr[j-1]>arr[j])
	 {
	  temp=arr[j];
	  arr[j]=arr[j-1];
	  arr[j-1]=temp;
	  j--;
	 }
	}

	cout<<"after the insertion sort\n";
	for(i=0;i<size;i++)
	{
	 cout<<arr[i]<<"\n";
	}
	getch();
}

