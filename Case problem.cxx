#include<stdio.h>

  int main() {
    
    printf("Name: Paul John A. Bajarias\n");
    printf("ID: 2025303943\n");
    printf("Course: BSIT - 1B\n");
    
    float celsius, fahrenheit;
   
   printf("\nEnter temperature in Celsius: ");
    scanf("%f", &celsius);
   
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    
    return 0;
}
