#include<stdio.h>
#include<conio.h>
main()
{
	float width, length, area ;
	printf("Input Width : ");
	scanf("%f",&width);
	printf("Input Length : ");
	scanf("%f",&length);
	area = width * length;
	printf("________________________________________________\n");
	printf("Area of rectangle = %.2f",area);
	getch();
}
