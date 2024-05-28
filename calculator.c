// TRYING TO BUILD A BASIC CALCULATOR

#include<stdio.h>

float add(float a, float b);
float sub(float a, float b);
float multi(float a, float b);
float division(float a, float b);
float area_circle(float radius);

int main(){
    printf("==================\t HELLO WELCOME TO BASIC CALCULATOR\t ========================\n");
    int user_input;
    printf("Press 1 to add two number, press 2 to subtract two number, press 3 to multi two number, press 4 to divide two number");
    scanf("%d", &user_input);
    if(user_input == 1)
    {
        float x, y;
        printf("Enter the value of a: ");
        scanf("%f", &x);

        printf("Enter the value of b: ");
        scanf("%f", &y);
        add(x, y);
    }
    else if (user_input == 2)
    {
        float x, y;
        printf("Enter the value of x : ");
        scanf("%f", &x);
        printf("Enter the value of y : ");
        scanf("%f", &y);
        sub(x,y);
    }
    else if (user_input == 3)  
    {
        float x, y;
        printf("enter the value of x: ");
        scanf("%f", &x);
        printf("Enter the value of y: ");
        scanf("%f", &y);
        multi(x, y);
    }
    else if (user_input == 4)
    {
        float x, y;
        printf("Enter the value of x: ");
        scanf("%f", &x);
        printf("Enter the value of y: ");
        scanf("%f", &y);
        division(x, y);
    }
    else if(user_input == 5)
    {
        float x, y, radius;
        printf("Enter value of radius : ");
        scanf("%f", &radius);
        area_circle(radius);
    }
    else{
        printf("invalid input: %d", user_input);
    }
    
    
    

    return 0;
}

float add(float a, float b)
{
    float result1 = a+b;
    printf("Addition of a + b = %f\n", result1);
    return result1;
}

float sub(float a, float b){
    float result2 = a-b;
    printf("Subtraction = %f\n", result2);
    return result2;
}

float multi(float a, float b){
    float result3 = a*b;
    printf("multiplication of a x b = %f\n", result3);
    return result3;
}

float division(float a, float b){
    float result4 = a/b;
    printf("division of x / y = %f \n", result4);
    return result4;
}

float area_circle(float radius)
{
    float result5 = 3.1415*radius;
    printf("area of the circle = %f", result5);
    return result5;
}