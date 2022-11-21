#include<stdio.h>
void add();
main()
{
int i,fact=1,n;
printf("\n enter n=);
scanf("%d",&n);
for(i=0;i<=n;i++)
{
fact=fact+i;
}
printf("\n fact=%d,fact);
add();
       }
       void add()
       {
         int a,b,c;
         printf("\n enter two number=");
         scanf("%d",&a,&b);
         c=a+b;
         printf("\n addition of two number=%d",c);
