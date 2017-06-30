#include<stdio.h>
int main()
{
int orgnum,revnum=0;n;
printf("Enter the number:");
scanf("%d",&orgnum);
n=orgnum;
while(n!=0)
{
rem=n%10;
revnum=revnum*10+rem;
n=n/10;
}
if(orgnum==revnum)
{
printf("palindrom");
}
else
{
printf("Not a palindrom");
}
return 0;
}
