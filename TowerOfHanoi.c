#include <stdio.h>
void tower (int n, char A, char B, char c);
void main()
{ int n;
printf("enter the value of n :");
scanf ("%d", &n);
tower(n, 'A', 'B', 'C');
}

void tower (int n, char A, char B, char c)
{
if(n == 1){
printf("move disk to %c to %c\n", A, c);
}
else
{ tower (n-1, A, c, B);
printf("move disk from %c to %c\n",A,c);
tower (n-1, B, A, c);
}
}

