#include <stdio.h>
int main()
{
	int age;
	printf("Input the age of the candidate to find out if he/she is eligable or not: ");
	scanf("%d",&age);
	
	if (age<18)
	{
		printf("Sorry, you are no eligible to vote. \n");
	}
	else{
		printf("Congratulation! You are eligible for casting your vote. \n");
	}
}
