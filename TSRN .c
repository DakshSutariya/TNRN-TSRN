#include<stdio.h>

division(int n1)
{
	if(n1%3==0 && n1%5==0)
	{
		printf("divisibal");
    }
    else
    {
    	printf("not divisibal");
	}
}
	
main()
    {
	    int a;
	    printf("value of A=");
	    scanf("%d",&a);
	    
	    division(a);
	}	
	

