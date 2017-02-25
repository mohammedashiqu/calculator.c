#include<stdio.h>
void main()
{

int c,n1,n2,sum;
do
  {
   printf("\nclaculator");
   printf("\n1:addition\n2:substraction\n3:multiplication\n4:division\n5:exit");
   printf("\nenter your choice");
   scanf("%d",&c);
   switch(c)
   {
      case 1:printf("\naddition");
             printf("\nenter two numbers");
             scanf("%d",&n1);
             scanf("%d",&n2);
             sum=n1+n2;
             printf("\nsum is %d",sum);
             break;
   }
  }while(c!=5);
}
