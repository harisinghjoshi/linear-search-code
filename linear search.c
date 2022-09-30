#include<stdio.h>
void main()
{
	int arr[10],i,search,flag=0;
	printf("enter the elements of array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the elements to be searched ");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(search==arr[i])
		{
		
		flag=1;
		break;
    	}
	}
	if(flag==1)
	printf("elements is at index %d",i+1);
	else
	printf("element is not found");
	
}
