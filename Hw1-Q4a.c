#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


	
   int computeHomeValue(int popularity, int size) {
   	
    int homevalue = (pow(popularity,3)+pow(size,2))*10000 ;
    return homevalue ;
   }
   
   int main(){
   	
   	int a,b,c ;
   	
   	printf("Please enter popularity : ");
   	scanf("%d",&a);
   	
   	printf("Please enter size : ");
   	scanf("%d",&b);
   	
   	c = computeHomeValue(a,b) ;
   	
   	printf("Home value is : %d",c) ;
   	
	return 0 ;
}


