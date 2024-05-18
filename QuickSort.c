#include<stdio.h>
void quicksort(int a[],int l,int u);
int Partition(int a[],int l,int u);
void main()
{
int a[50],n;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&a[i]);}

for(int i=0;i<n;i++){
printf("%d\n",a[i]);}
quicksort( a, 0, n-1);
printf("The sorted elements: \n");
for(int i=0;i<n;i++){
printf("%d\n",a[i]);
}


}
void quicksort(int a[],int l,int u){
if(l<u)
{
int j= Partition(a,l,u);
quicksort(a,l,j-1);
quicksort(a,j+1,u);
}
}
int Partition(int a[],int l,int u)
{int temp;
int v=a[l];
int i = l;
int j = u+1;
do{
do{
i++;
}
while(a[i]<v && i<=u);
do{
j--;
}
while(a[j]>v);
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
while(i<j);
a[l]=a[j];
a[j]=v;
return j;
}

