#include <stdio.h>
#include <math.h>

int main(){
	
	int popularity ;
	int size ;
	int homeValue ;
	
	printf("Please enter popularity : ") ;
	scanf("%d",&popularity) ;
	
	printf("Please enter size : ") ;
	scanf("%d",&size) ;
	
	homeValue = (pow(popularity,3)+pow(size,2))*10000 ;
	
	printf("Home value is : %d",homeValue) ;
	
	return 0 ;  
	
    }

