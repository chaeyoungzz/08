#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumf(int a, int b)
{
	return a+b;
}
int subf(int a, int b)
{
	return a-b;
}
int mulf(int a, int b)
{
	return a*b;
}
int divf(int a, int b)
{
	return a/b;
}



int main(int argc, char *argv[]) {
	int x,y;
	char C;
	int (*pf)(int,int);
	
	printf(" input calculation : ");
	scanf("%i %s %i", &x, &C, &y);
	
	switch(C)
	{
		case '+':
		pf=sumf;
		break;
		
		case '-':
		pf=subf;
		break;
		
		case '*':
		pf=mulf;
		break;
		
		case '/':
		pf=divf;
		break;
	}

	printf(" output : %i", pf(x,y));
	return 0;
}
