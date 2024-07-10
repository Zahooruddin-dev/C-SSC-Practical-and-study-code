#include<stdio.h>
int main(){
	
	char grade;
	printf("Enter Your Grade In Capital Letter To Know How You Did!\n");
	scanf(" %c" ,&grade);
	switch(grade){
		case 'A':
		printf("You did great!");
		break;
			case 'B':
		printf("You did Alright!");
		break;
			case 'C':
		printf("You did poorly!");
		break;
			case 'D':
		printf("You did very bad!");
		break;
			case 'F':
		printf("You Failed!");
		break;
		
		default :
			printf("Invalid Grade");
		
	}
	
	
	return 0;
}
