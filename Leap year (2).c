#include <stdio.h>

int main(void){
  int leap;

  printf("Enter a year\n");
 scanf("%d",&leap);
 if( ( (leap%4 == 0) && (leap%100!=0) )  || (leap%400==0) )
    {
 printf("%d is a leap year.", leap );
 }else{
 printf("%d is not a leap year.", leap);  }
return 0;     
}
