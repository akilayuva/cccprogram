#include<stdio.h>
int main()
{
int num,revnum=0,n,rem;
printf("Enter the org number:");
scanf("%d",&num);
n=num;
while(n!=0)
{
rem=n%10;
revnum=(revnum*10+rem);
n=n/10;
}
if(num==revnum)
{
printf("Given number %d is palindrom",num);
}
else
{
printf("given number is %d not palindrom",num);
}
return 0;
}
