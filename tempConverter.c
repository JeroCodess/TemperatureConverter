#include <stdio.h>
#include <stdbool.h>

float cTof(float c);
float fToc(float f);

int main(void)
{
    //Welcomes user + asks for type of conversion
    printf("Hello, welcome to the temperature converter program.\n\nPlease select the conversion you would like to make: (1 or 2)\n");

    //Ables the program to loop if user decides to
    bool run = true;
    while (run == true)
    {
        printf("1) C to F \n2) F to C\n\nChoice: ");
        int choice;
        scanf("%d", &choice);

        // User enters temp they would like to convert
        printf("Please enter the temperature you would like to convert: ");
        float temp;
        scanf("%f", &temp);

        //Conversions
        float conversion;
        if (choice == 1)
        {
            conversion = cTof(temp);
            printf("%.2f Celcius = %.2f Fahrenheit", temp, conversion);
        }
        else
        {
            conversion = fToc(temp);
            printf("%.2f Fahrenheit = %.2f Celcius", temp, conversion);
        }

        printf("\n\nDo you have another conversion to make? (1 for yes and 2 for no)\n\n");
        int option;
        scanf("%d", &option);
        if (option == 2) {
            run = false;
        }
    }
    
    printf("Okay, thank you for using my program!");
    return 0;
}

//Formula to convert temp from celcius to fahrenheit
float cTof(float c)
{
    float f;
    f = c*(9.0/5.0)+32;
    return f;
}

float fToc(float f)
{
    float c;
    c = (f-32)*(5.0/9.0);
    return c;
}