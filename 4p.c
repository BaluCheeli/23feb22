#include<stdio.h>
#include<string.h>
#define SIZE 1000
void my_memcpy(char *,char *,int );

int main()
{
char s1[SIZE],s2[SIZE];
int n;
printf("enter the string 1 :\n");
scanf("%[^\n]s",s1);
printf("enter how many you want to copy\n");
scanf("%d",&n);
my_memcpy(s2,s1,n);
printf("copy the strng from source of %d bytes to detination of string 2 %s",n,s2);
return 0;
}

void my_memcpy(char *d,char *s,int n)
{
	int i;
for(i=0;i<n;i++)
{
*(d+i)=*(s+i);
}
*(d+i)='\0';
}
