
#include<stdio.h>

int swap(int *arr,int *brr)
{
int temp;
temp=*arr;
*arr=*brr;
*brr=temp;
}


int bubble_sort(int *arr,int n)
{
int i,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
swap(&arr[j],&arr[j+1]);
}
}
}
}

int printArray(int *arr,int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}

int main()
{
int n,arr[7]={5,6,4,2,7,3,8};
n=sizeof(arr)/sizeof(arr[0]);
bubble_sort(arr,n);
printArray(arr,n);
return 0;
}












