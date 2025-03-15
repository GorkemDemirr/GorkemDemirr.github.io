#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

    void computeHomeValue (void) {
   	
	int a,b,c ;
   	
   	printf("Please enter popularity : ");
   	scanf("%d",&a);
   	
   	printf("Please enter size : ");
   	scanf("%d",&b);
   	
   	c = (pow(a,3)+pow(b,2))*10000  ;
   	
   	printf("Home value is : %d",c) ;
    
   }
   
   int main(){
   	
   	computeHomeValue() ;
   	
	return 0 ;
}

