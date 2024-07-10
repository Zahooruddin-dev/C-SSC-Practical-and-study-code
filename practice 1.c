#include<stdio.h>
int main(){
	
	int num1;
	int num2;
	int num3;
	char op;
	
	
	printf("Input first value: ");
	scanf("%d",&num1);
	
	printf("Input second value: ");
	scanf("%d",&num2);
	
		printf("Input operator: ");
	scanf(" %c",&op);
	
	if ( op == '+'){
	num3 = num1 + num2;
		printf("%d", num3);
		}

	else if ( op == '-'){
	num3 = num1 - num2;
		printf("%d", num3);
		}
	
		else if ( op == '*'){
	num3 = num1 * num2;
		printf("%d", num3);
		}
		else if ( op == '/'){
	num3 = num1 / num2;
		printf("%d", num3);
		}
	
	return 0;
}
