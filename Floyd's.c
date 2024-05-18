#include<stdio.h>
void main()
{
int D[50][50];
int L[50][50];
int n;
printf("Enter the number of elements:");
scanf("%d",&n);
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
scanf("%d",&L[i][j]);
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
D[i][j]=0;
D[i][j]=L[i][j];
}
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
for(int k=0;k<n;k++){
if(D[i][j]>D[i][k]+D[k][j])
{
D[i][j]=D[i][k]+D[k][j];
}
}
}
}
printf("print the array \n");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
printf("%d",D[i][j]);
}printf("\n");
}
}
