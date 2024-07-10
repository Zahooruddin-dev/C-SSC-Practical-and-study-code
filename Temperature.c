#include<stdio.h>
int main(){
	int temp;
	
	printf("Enter a temeprature: ");
	scanf("%d",&temp);
	
		if(temp<0)
		printf("It's freezing whether");
	
	else if(temp<10)
	
		printf("then Very Cold weather");
	
	
	else if(temp<20)
	
		printf("Cold weather");
	
	else if(temp<30)
	
		printf("Normal temperature");
	
	
	else if(temp<40)
	
		printf("It's hot");
	

	else if(temp<50)
	
		printf("very hot");
	
	
	return 0;
}


/*
	*/
