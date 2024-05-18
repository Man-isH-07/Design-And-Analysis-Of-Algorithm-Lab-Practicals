#include<stdio.h>
void knapsack(int n,float w[],float p[],int M);
void knapsack(int n,float w[],float p[],int M)
{
float total_profit = 0.00;
float u=M;
float x[50];
for(int i=0;i<n;i++)
{
if(w[i]>u)
{
break;
}
else{
x[i]=1.0;
total_profit = total_profit+p[i];
u=u-w[i];
}
if(i<n)
{
x[i]=u/w[i];
total_profit =  total_profit+(x[i]*p[i]);
printf("fraction %f\n",x[i]);
}
}
printf("total profit :%f",total_profit);
}
void main()
{int n,M;
float w[50],ratio[50];
float p[50];
float largest;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("total capacity of sack:");
scanf("%d",&M);
printf("Enter the elements in w:");
for(int i=0;i<n;i++){
scanf("%f",&w[i]);}
printf("Enter the elements in p:");
for(int i=0;i<n;i++){
scanf("%f",&p[i]);}
printf("ratio of the elements w/p:");
for(int i=0;i<n;i++){
ratio[i]=p[i]/w[i];
printf("%f\n",ratio[i]);}

for(int j=0;j<n-1;j++)
{

for(int i=j+1;i<n;i++){
if(ratio[j]<ratio[i])
{
float temp = ratio[i];
ratio[i]=ratio[j];
ratio[j]=temp;

float temp1 = w[i];
w[i]=w[j];
w[j]=temp1;

float temp2 = p[i];
p[i]=p[j];
p[j]=temp2;

}
}
}
printf("sorted ratio of the elements w/p:");
for(int i=0;i<n;i++){
printf("%f\n",ratio[i]);
}
knapsack( n, w, p, M);
}
