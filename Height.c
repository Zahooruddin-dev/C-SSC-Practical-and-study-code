#include<stdio.h>
int main(){
	
float h;
	printf("Enter  the Height (in centimetres): ");
	scanf("%f",&h);
	
	
	
if(h < 150.0)
 printf("Dwarf\n");
  
  else if((h>=150.0) && (h<=165.0)) 
 printf(" Average Height\n"); 
	     
 else if((h>=165.0) && (h <= 195.0))
		 
printf("Taller\n");
		  
 else if((h>=195.0) && (h <= 250.0))
		 
printf("Abnormal Height\n");
  else
 printf("Not a human! \n");
			
	return 0;
}
