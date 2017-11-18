#include<stdio.h>
void main()
{
int n1=0,n2=1,n,i=0,temp;
printf("Enter the no:\n");
scanf("%d",&n);
printf("%d\n%d\n",n1,n2);
while(i<n-2)
{
temp=n1+n2;
printf("%d\n",temp);
n1=n2;
n2=temp;
i++;
}
}
