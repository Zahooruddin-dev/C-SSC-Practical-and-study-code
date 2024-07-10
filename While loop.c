#include <stdio.h>
int main(){
	
	int sn = 5;
	int g;
	int gc = 0;
	int gl;
	int ofg = 0;
	
	printf("enter the guesses you require to win: ");
	scanf("%d", &gl);
	while(g != sn && ofg == 0)

	{
		
		if(gc < gl){
		
		printf("Enter a number: ");
		scanf("%d",&g);
		gc++;
		}
		else{
			ofg = 1;
		}
	}	
	if(ofg == 1){
		printf("Out of guesses");
	}else{
	
	printf("You win");
	}
	
	
	
	return 0;
}
