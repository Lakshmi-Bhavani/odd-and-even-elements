#include<stdio.h>
void main()
{
	int a[10],b[10],c[10];
	int i,j=0,k=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;	
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("the even elements are");
	for(i=0;i<j;i++)
	{
		printf("\t%d\t",b[i]);
		
	}
	printf("\nthe odd elements are");
	for(i=0;i<k;i++)
	{
		printf("\t%d\t",c[i]);
		
	}
}
