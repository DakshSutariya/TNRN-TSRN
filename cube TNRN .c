#include<stdio.h>

cube(int n1)
{
	int sum;
	
	sum=n1*n1*n1;
	printf("cube =%d ",sum);
}


main()
{
    int a;
	
	printf("enter the value of A=");
	scanf("%d",&a);
	cube(a);	
}
