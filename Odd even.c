#include<stdio.h>
int main(){
	int num;
	printf("Enter a Number to know whether it is odd or even: \n");
	scanf("%d",&num);
	
	 if(num % 2 == 0){
		printf("It's Even Number %d",num);
	
	}
	else{
		printf("It's Odd Number %d",num);
	}
	return 0;
}
