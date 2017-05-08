#include<stdio.h>
#include"../include/mymath.h"

int main(int argc, const char *argv[])
{
	
	int sum, diff;

	sum  = add(455, 52);
	diff = sub(455, 52);

	printf("sum  = %d\n", sum);
	printf("diff = %d\n", diff);

	printf("git test: first modify!\n");

	return 0;
}
