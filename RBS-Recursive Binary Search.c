#include <stdio.h>
int RBS ( int a[], int low, int high, int x);
void main()
{ int x,n,i;
int a[100];
printf (" enter no. of elements") ;
scanf("%d", &n);
printf ("enter elements of array");
for(i=0; i<n; i++)
{
scanf("%d", &a[i]);}
printf ("enter value of x");
scanf ("%d", &x);
int z = RBS (a, 0, n-1, x) ;
if(z=1)
printf("Element not found");
else
printf ("Element is found ");

}

int RBS (int a[], int low, int high, int x)
{
    if (low <= high)
{
    int mid = (low+high)/2;
if(a[mid] == x)
return mid; 

else if (a[mid] >x)
return RBS (a, low, mid-1,x);

else
return RBS (a, mid +1, high, x) ;

}
return -1;
}