#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main ()

{
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,t1,t2,t3,t4,t5,t6,t7,total;
a=10;
b=20;
c=50;
d=100;
e=500;
f=1000;
g=5000;

printf("\t\t\t\t**********************************\n\n");
printf("\t\t\t\t\tcurrency calculator");
printf("\n\t\t\t\t\t*******************\n\n");

printf("\t\t\t\t***********************************\n\n");

printf("\tEnter number of 10 notes\n");
scanf("%d",&i);


printf("\n\tEnter number of 20 notes\n");
scanf("%d",&j);

printf("\n\tEnter number of 50 notes\n");
scanf("%d",&k);

printf("\n\tEnter number of 100 notes\n");
scanf("%d",&l);

printf("\n\tEnter number of 500 notes\n");
scanf("%d",&m);

printf("\n\tEnter number of 1000 notes\n");
scanf("%d",&n);

printf("\n\tEnter number of 5000 notes\n");
scanf("%d",&o);

t1=i*a;
t2=j*b;
t3=k*c;
t4=l*d;
t5=m*e;
t6=n*f;
t7=o*g;

total=t1+t2+t3+t4+t5+t6+t7;

printf("\n\nYour amount is  = \t%d",total);
getch();

}
