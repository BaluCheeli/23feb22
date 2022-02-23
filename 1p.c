#include<stdio.h>
#include<stdlib.h>
#define are(len,wid) len*wid
int swp( );

typedef struct {
	unsigned int len;
	unsigned int wid;
	unsigned int area;
        
}r;

typedef struct {
	unsigned int len;
        unsigned int wid;
	unsigned int area;
    
}r1;

int main()
{
	int a1,a2;
int (*fp)(r ,r1 );
r s1;
r1 s2;
printf("enter the len & wid of the rect 1\n");
scanf("%d\n %d\n",&s1.len,&s1.wid);
printf("enter the len & wid of the rect 2\n");
scanf("%d\n %d\n",&s2.len,&s2.wid);
printf("\nbefore swap\n");
printf("the length of 1rec %d\n the width of 1 rec is %d\n",s1.len,s1.wid);
printf("\tthe area of rec1 is %d\n",are(s1.len,s1.wid));
s1.area=are(s1.len,s1.wid);
printf("the length of 2rec %d\n the width of 2rec is %d\n",s2.len,s2.wid);
printf("\tthe area of rec2 is %d\n",are(s2.len,s2.wid));
s2.area=are(s2.len,s2.wid);
printf("after swap\n");
fp=swp;
fp(s1,s2);
return 0;
}

int swp(r s1,r1 s2)
{
int temp;
temp=s1.area;
s1.area=s2.area;
s2.area=temp;
 printf("\ns1: %d\ns2: %d\n",s1.area,s2.area);
    return 0;
}
