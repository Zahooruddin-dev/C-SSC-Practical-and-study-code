#include<stdio.h>
int main(){
	
	
	double num;
	printf("Enter a Number: \n");
	
	/* Error solved by just adding & sign before writing variable */
	scanf("%lf", &num);
	
	
	if  (num <= 0.0) {
		if (num == 0.0)
		printf("You entered 0.");
		else 
		printf("You Entered Negative Number:");
	}
	else{
		printf("You Entered A Positive Number :");
	}
	
	
	return 0;
}
