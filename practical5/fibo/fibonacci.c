#include <stdio.h>
#include <stdlib.h>

void fibonacci(int *a, int *b);                //Function declaration/prototype

int main()
{ 
/* Declarations */
    int n,i;
    int f1=1,f0=0;

/* Get user to enter a number */ 
    printf("Enter a positive integer\n");
    scanf("%d",&n);

/* Check the number is positive, terminate if not */
    if (n < 1) {
      printf("The number is not positive\n");
      exit(1);
    }

    printf("The fibonaccinacii sequence is :  \n");
    printf("%d, %d, ",f0,f1);
    
    for (i=2;i<=n;i++){        
       fibonacci(&f1,&f0);                      //get next #
        
       printf("%d, ",f1);
       if ((i+1)%10 == 0) printf("\n");             //Put in a few line breaks 
    }
/* Last term */
    //fibonacci(&f1,&f0);
    //printf("%d\n",f1);

}

void fibonacci(int *a, int *b) {         
  int next;

/* Calc next f(#). (Must use dereferencing operator with pointers) */
/*a=f(n-1) and b=f(n-2) and next=f(n)*/
      next = *a + *b;

/* On exit a=fn and b=f(n-1)*/
      *b = *a;
      *a = next;

}
