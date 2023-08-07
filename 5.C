#include<stdio.h>
#include<conio.h>

void main()
{
    int array[100], position, c, n;
    clrscr();

    // collect data form user
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &n);

    printf("Enter %d Elements\n",n);

    // working on it
    for ( c = 0 ; c < n ; c++ )
    scanf("%d", &array[c]);

    // user add where is delete arry
    printf("Enter The Where You Put Is Delete Element\n");
    scanf("%d", &position);

    //condition apply

    if ( position >= n+1 )
    printf("Invaild\n");

    else
    {
	for ( c = position - 1 ; c < n - 1 ; c++ )
	array[c] = array[c+1];

	printf("Final Array is\n");

	for( c = 0 ; c < n - 1 ; c++ )
	printf("%d\n", array[c]);
    }
     getch();
}


