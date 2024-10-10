#include <stdio.h>
#include <math.h>

int main() {

    int N=12, i;
    float a = 0.0, b_deg = 60.0;

    // Convert b=pi/3 to radians 
    float b_rad;
    b_rad = (M_PI * b_deg)/180.0;
    printf("pi/3 Radians = %f\n", b_rad);
    
    // Sum tan(a)+tan(b) where a and b are in radians
    float area = tan(a)+tan(b_rad);
    printf("\nInitial area (sum at x(0) and x(12)) = %f\n", area);
    
   // Calculate the area at pts x1, x2, ..., x11 and add them up
   // as in the formula using loops 
   // Using for loop
    /*for(i=5; i<60; i=i+5){
        area=area+2*tan((M_PI*i)/180.0);
	printf("New area of x(%d) = %f\n", i/5, area);
    }*/
    // Using while loop
    /*i=5;
    while(i<60){
        area=area+2*tan((M_PI*i)/180.0);
	printf("New area of x(%d) = %f\n", i/5, area);
        i=i+5;
    }*/
    // Use if statement in the loop
    /*i=5;
    while(i<60){
        area=area+2*tan((M_PI*i)/180.0);
        if(i%2==0){
	    printf("New area of x(%d) = %f\n", i/5, area);
        }
        i=i+5;
    }*/
    // Use switch/case statement in the loop
    i=5;
    while(i<60){
        area=area+2*tan((M_PI*i)/180.0);
        switch(i%2){
          case 0:
	    printf("New area of x(%d) = %f\n", i/5, area);
            break;
        }
        i=i+5;
    }

    // Multiply area by (pi/3)/2(12) after converting it to radians 
    float mult_rad=(M_PI*((b_deg-a)/(2*N)))/180.0;
    area=mult_rad*area;

    // Approximated result
    printf("\nTrapezoidal result is: %f\n", area);
    // Actual result 
    // Integral of tan is ln(2)
    printf("Real result is: %f\n", log(2.0));

    return 0; 
}

