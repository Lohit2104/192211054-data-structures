#include<stdio.h>
void meregearray(int arr1[],int size1,int arr2[],int size2,int meregedarr[])
{
	int i,j;
	for(i=0;i<size1;i++)
	{
		meregedarr[i]=arr1[i];
	}
	for(j=0;j<size2;j++)
	{
		meregedarr[size1+j]=arr2[j];
	}
}
int main()
{
	int arr1[20],arr2[20],size1,size2,meregedarr[100],i,meregedsize;
	printf("enter the size1:\n");
	scanf("%d",&size1);
	printf("array 1 elements:\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter the size2:\n");
	scanf("%d",&size2);
	printf("array 2 elements:\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	meregearray(arr1,size1,arr2,size2,meregedarr);
	meregedsize=size1+size2;
	printf("\nthe mereged array is:\n");
	for(i=0;i<meregedsize;i++)
	{
		printf("%d,",meregedarr[i]);
	}
	return 0;
}
