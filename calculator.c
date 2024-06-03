// TRYING TO BUILD A BASIC CALCULATOR

#include<stdio.h>
#include<string.h>
#include<math.h>

float add(float a, float b);
float sub(float a, float b);
float multi(float a, float b);
float division(float a, float b);
float area_circle(float radius);
float area_sq(float side);
float area_rec(float len, float wid);
float area_tri(float base, float height);
float factorial(float a);
int table(int a);
int main(){
    printf("==================\t HELLO WELCOME TO BASIC CALCULATOR\t ========================\n");
    char user_input[100];
    printf("Type the fucntion you want for example if you type add it will do addition of two numbers and area_of_circle will calculate area and so on:  ");
    scanf("%s", &user_input);

    if (strcmp(user_input, "add") == 0 || strcmp(user_input, "addition") == 0) {
        // printf("You entered 'hello'.\n");
        float x, y;
        printf("Enter the value of a: ");
        scanf("%f", &x);

        printf("Enter the value of b: ");
        scanf("%f", &y);
        add(x, y);
    }

    else if (strcmp(user_input, "subtract") == 0)
    {
        float x, y;
        printf("Enter the value of x : ");
        scanf("%f", &x);
        printf("Enter the value of y : ");
        scanf("%f", &y);
        sub(x,y);
    }

    else if (strcmp(user_input, "multiply") == 0)  
    {
        float x, y;
        printf("enter the value of x: ");
        scanf("%f", &x);
        printf("Enter the value of y: ");
        scanf("%f", &y);
        multi(x, y);
    }

    else if (strcmp(user_input, "divide") == 0)
    {
        float x, y;
        printf("Enter the value of x: ");
        scanf("%f", &x);
        printf("Enter the value of y: ");
        scanf("%f", &y);
        division(x, y);
    }

    else if(strcmp(user_input, "area_circle") == 0)
    {
        float x, y, radius;
        printf("Enter value of radius : ");
        scanf("%f", &radius);
        area_circle(radius);
    }
    else if (strcmp(user_input, "area_sq") == 0)
    {
        float side;
        printf("Enter the value of side: ");
        scanf("%f", &side);
        area_sq(side);
    }
    else if(strcmp(user_input, "area_rec") == 0 || strcmp(user_input, "area of rectangle") == 0 || strcmp(user_input, "rectangle area") == 0)
    {
        float len, wid;
        printf("Enter the value of lenth:  ");
        scanf("%f", &len);

        printf("enter the value of width: ");
        scanf("%f", &wid);

        area_rec(len, wid);
    }
    else if (strcmp(user_input, "area_triangle") == 0 || strcmp(user_input, "area_of_triangle") == 0 || strcmp(user_input, "area_tri") == 0)
    {
        float base, height;
        printf("Enter the value of base of the triangle: ");
        scanf("%f", &base);
        printf("enter the value of height of the triangle: ");
        scanf("%f", &height);
        area_tri(base, height);
    }

    else if(strcmp(user_input, "factorial") == 0 || strcmp(user_input, "fact") == 0){
        float num;
        printf("Enter the number to calculate factorial: ");
        scanf("%f", &num);
        factorial(num);
    }
    else if(strcmp(user_input, "table") == 0 || strcmp(user_input, "table_of") == 0){
        int num;
        printf("Please enter the number of the number to get the desired table: ");
        scanf("%d", &num);
        table(num);
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

float area_sq (float side)
{
    float result6 = pow(side, 2);
    printf("area of square = %f", result6);
    return result6;
}

float area_rec(float len, float wid)
{
    float result7 = len*wid;
    printf("area of rectangle  = %f", result7);
    return result7;
}

float area_tri(float base, float height)
{
    float result8 = 0.5*(base*height);
    printf("area of triangle = %f", result8);
    return result8;
}

float factorial(float a)
{
    float i, f=1;
    for(i = 1; i<=a; i++)
    {
        f = f*i;
    }
    printf("Fctorial of the entered value = %f", f);
    return f;
}

int table(int a){
    for(int i = 1; i<=10; i++){
        int result8 = a*i;
        printf("%d x %d = %d \n", a, i, result8);
        // return result8;
    }
}
