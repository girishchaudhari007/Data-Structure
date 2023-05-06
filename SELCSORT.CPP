#include<iostream.h>
#include<conio.h>
void main()
{
	int arr[100];
	int i,j,temp,size;
	clrscr();

	cout<<"enter arry size\n";
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
	 for(j=0;j<size;j++)
	 {
	  if(arr[j]>arr[i])
	  {
	   temp=arr[i];
	   arr[i]=arr[j];
	   arr[j]=temp;
	   }
	  }
	 }
	 cout<<"after selection sorting\n";
	 for(i=0;i<size;i++)
	 {
	  cout<<arr[i]<<"\n";
	 }
	 getch();
	}














