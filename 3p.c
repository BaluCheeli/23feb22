#include<stdio.h>
#include<string.h>
#define SIZE 1000
char frq(char a[],char ch)
{
int i,c=0;
for(i=0;a[i]!=0;i++)
{
if(a[i]==ch)
  ++c;
}
return c;
#if 0
printf("the frequency of the charater %c is %d \n",ch,c);
#endif
}


int main()
{
int c=0,n;
char (*fp)(char [],char );
char a[SIZE],ch;
printf("enter the string: ");
scanf("%s",a);
printf("enter the character to find the frequency\n");
scanf("\n%c",&ch);
fp=frq;
n=fp(a,ch);
printf("the frequency of the charater %c is %d \n",ch,n);
return 0;
}
