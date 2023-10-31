//
//  main.c
//  fibonacci
//
// This program calculates the nth Fibonacci number and prints all the Fibonacci numbers from the first to the nth on the screen.

//
//  Created by Akif Duran
//

#include <stdio.h>

int main (){
    
    int a,b,sum,number;
    int j;

// getting nth number from the user.
    printf("Please enter the number of Fibonacci numbers to print (ex: in 5, first fibonacci number '1' and the second fibonacci number '2' is not included) if you enter 'five' the output will be : 1 1 2 3 5 8 13 \n");
    scanf("%d", &number);
    
    
// defining the first two fibonacci numbers and printing them to the screen.
        a= 1;
        b= 1;
    printf("%d\n", a);
    printf("%d\n", b);
    
// defining the for loop for calculation.
    for(j=1;j<=number;j++){
        sum = a+b;
        a=b;
        b=sum;
        printf("%d \n", sum);
    }
    
    
    return 0;
}
