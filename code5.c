//Q5: Write a program to convert temperature from Celsius to Fahrenheit.



#include<stdio.h>
int main(){
    float C;
    printf("Input 1:\nEnter  temperature in celcius: ");
    scanf("%f",&C);
    float F = (C+9/5)+32;
    printf("Output 1:\nTemperature in Fahrenheit is :%f",F);
return 0;
}
