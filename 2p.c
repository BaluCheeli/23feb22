#include<stdio.h>
#define mysize(type) ((char *)(&type+1)-(char *)(&type))
int main()
{
int x;
char y='a';
float z=34.543;
double d=345432.56789;
#if 0
p=&a;

printf("%p\t",*p);
printf("%p\t",*(p+1));
printf("%p\n",(*p+1));
#endif

printf("size Of int is %d\n",mysize(x));
printf("size Of float is %f\n",mysize(z));
printf("size Of char is %c\n",mysize(y));
printf("size Of double is %ld\n",mysize(d));

return 0;
}
