#include<stdio.h>
int main()
{
	int a,b,c,sum;
	
	printf("Input three angles of triangle: ");
	scanf("%d %d %d",&a,&b,&c);
	
	sum = a+b+c;
	
	if(sum == 180){
		printf("The triangle is possible.\n");
	}
	else{
		printf("The triangle can't be made");
	}
	
	
	
	
	
return 0;	
}
