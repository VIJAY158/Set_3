#include<stdio.h>
void main()
{
int n1,n2,L;
printf("Enter the no's");
scanf("%d%d",&n1,&n2);
if(n1>n2)
{
L=n1;
}
else
{
L=n2;
}
while(1)
{
if((L%n1==0) && (L%n2==0))
{
printf("Lcm of the (%d,%d) is %d ",n1,n2,L);
break;
}
L++;
}
}
