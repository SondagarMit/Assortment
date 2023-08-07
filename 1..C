#include<stdio.h>
#include<conio.h>
void main()
{
  int a[100],i,size,value,postion;
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
    scanf("%d",&postion);

    for (i=size;i>=postion;i--)
    {


       a[i+1]=a[i];

    }
    a[postion]=value;
    size++;

    for (i=0;i<size;i++)
    {
     printf("%d\t",a[i]);

    }





  getch();


}