/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int max(int , int);
int min(int , int);
int multiply ( int , int );

int main(void) 
{
    int num1, num2 ;
    
    
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1,&num2);
    
    printf("Maximum = %d\n", max(num1, num2));
    printf("Minimum = %d\n", min(num1, num2));
    printf("Product = %d",multiply(num1 , num2));
    
    return 0;
}


int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}


int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int multiply ( int no1, int no2 )
{
	return no1* no2;
}