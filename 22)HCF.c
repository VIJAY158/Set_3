#include <stdio.h>
int hcf(int a, int b)
{
if (a==b)
return a;
if (a>b)
return hcf(a-b,b);
else    
return hcf(a,b-a);
}
int main()
{
int a,b,c;
printf("Enter the no's");
scanf("%d%d",&a,&b);
c=hcf(a,b);
printf("The room dimension %d X %d the perfect square tiles value is %d X %d", a,b,c,c);
return 0;
}
