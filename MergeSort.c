#include<stdio.h>
void merge (int A[],int low ,int mid ,int high);
void mergesort(int a[],int low,int high);
void main()
{
int a[50],n;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);}
printf("the elements:");
for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}
mergesort(a,0,n-1);
printf("the sorted elements:");
for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}
}
void mergesort(int a[],int low,int high)
{int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}
void merge (int A[],int low ,int mid ,int high)
{int left[100];
int right[100];
int n1=mid-low+1;
int n2=high-mid;
for(int i=0;i<n1;i++){
 left[i]=A[low+i];}
for(int j=0;j<n2;j++){
right[j]=A[mid+1+j];}
int i=0;
int j=0;

int k=low;
while(i<n1 && j<n2){
if(left[i]<=right[j])
{
A[k]=left[i];
i=i+1;
}
else{
A[k]=right[j];
j=j+1;
}
k=k+1;
}
while(i<n1){
A[k]=left[i];
i=i+1;
k=k+1;
}
while(j<n2){
A[k]=right[j];
j++;
k++;
}
}

