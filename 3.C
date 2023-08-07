#include<stdio.h>
#include<conio.h>
void main()
{
   int c,r,i,j,a[3][3],sum=0;
   clrscr();

   printf("Enter Row and Colum size: ");
   scanf("%d%d",&r,&c);

   for (i=0;i<r;i++)
   {
    for (j=0;j<c;j++)
    {
      scanf("%d",&a[i][j]);
      sum=sum+a[i][j];
    }

   }
    for (i=0;i<c;i++)
    {
     for (j=0;j<c;j++)
    {
    printf("%d",a[i][j]);
    }
    printf("\n");

   }
    printf("%d\t",sum);

   getch();



}