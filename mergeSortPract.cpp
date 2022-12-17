#include<stdio.h>
void  mergeTwo(int arr[], int brr[],int n, int m)
{
	int krr[n+m];
	int i=0, j=0, k=0;
	while(i<n && j<m)
	{
			if(arr[i]<arr[j])
		{
			krr[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			krr[k]=brr[j];
			j++;
			k++;
		}
	}
		while(i<n)
	{
		krr[k]=arr[i];
		i++;
		k++;
	}
	while(j<m)
	{
		krr[k]=brr[j];
		j++;
		k++;
	}
	printf("Two sorted list merge and sort:\n");
	for(int l=0;l<n+m;l++)
	{
		printf("%d ",krr[l]);
	}
	
}
void merge(int lb, int mid,int ub, int arr[])
{
	int krr[ub-lb+1];
	int i=lb, j=mid+1, k=0;
	while(i<=mid && j<=ub)
	{
		if(arr[i]<arr[j])
		{
			krr[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			krr[k]=arr[j];
			j++;
			k++;
		}
		
		
	}
	while(i<=mid)
	{
		krr[k]=arr[i];
		i++;
		k++;
	}
	while(j<=ub)
	{
		krr[k]=arr[j];
		j++;
		k++;
	}
	for(int i=0;i<k;i++)
	{
		arr[lb+i]=krr[i];
	}
}
void mergeSort(int lb, int ub, int arr[])
{
	if(ub>lb)
	{
		int mid=(ub+lb)/2;
		mergeSort(lb,mid,arr);
		mergeSort(mid+1,ub,arr);
		merge(lb,mid,ub,arr);
	}
}
int main()
{
	printf("Enter the no. of elements in list1:");
	int n,m;
	
	scanf("%d",&n);
	printf("Enter the no. of elements in list2:");
	scanf("%d",&m);
	
	int arr[n],brr[m];
	printf("Enter the  elements of first list1:");

	
	for(int i=0;i<n;i++)
	{
		scanf("%d",arr+i);
		
	}
		printf("Enter the  elements of first list2:");

	
	for(int i=0;i<m;i++)
	{
		scanf("%d",brr+i);
		
	}
	mergeSort(0,m-1,brr);
	mergeSort(0,n-1,arr);
	mergeTwo(arr,brr,n,m);

}

