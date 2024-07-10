#include<stdio.h>

int main(){
	int a,b,c,d;
	float x1,x2;
	
	printf("Input the value of a,b,c,: ");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0){
		printf("Both roots are equal");
		x1=-b/(2.0*a);
		x2=x1;
		printf("First root root1= %d\f",x1);
		printf("First root root1= %d\f",x2);
		
	}
	else if(d>0)
	{
		printf("both are real and fif-2\n");
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
	}
	else
	printf("roos are imagairy;\nNo solution. \n");
	
	
	
	
	
	
	
	
}
