#include<stdio.h>
int main(){
	int num1;
	int num2;
	printf("Enter a value: \n");
	scanf("%d", &num1);
	printf("Enter a value: \n");
	scanf("%d", &num2);
	
	if (num1==num2){
		printf("Number1 and Number2 are equal");
	}
	else{
		printf("Number 1 and Number 2 are not equal");
	}
}
