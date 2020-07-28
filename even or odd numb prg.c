#include<stdio.h>
#include<conio.h>
main()
{
	int n,r;/*initilize n,r;*/
	printf("enter the number;");/*initilize number to be check*/
	scanf("%d",&n);
	r=n%2;/*to check whether numb is even or odd*/
	if(r==0)/*to check value of r*/
	printf("it`s an even number");/*if condition is true*/
	else
	printf("it`s an odd number");/*if condition is false*/
	getch();
}
