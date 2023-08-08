#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],size,i,value,pos;
  clrscr();
   printf("Enter Your Value: ");
   scanf("%d",&size);

   for (i=0;i<size;i++)
   {
    scanf("%d",&a[i]);


   }
    printf("Enter Your Ex. Value: ");
    scanf("%d",&value);

    printf("enter your Postion: ");
    scanf("%d",&pos);

    for (i=size;i>=pos;i--)
    {
       a[i+1]=a[i];
    }
    a[pos]=value;
    size++;

    for (i=0;i<size;i++)
    {
     printf("%d\n",a[i]);

    }
       getch();
       }