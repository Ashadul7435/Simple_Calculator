///Calculate addition, subtraction, multiplication or division depending on input from user
///This project I have done in my level 1 Semester 1 semester final
#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    float first_number, second_number;
    char operator;

    printf("\n\t***** Welcome to Ashadul Calculator *****\t\n");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Calculation\n\t\t[0] Exit\n\t\t=================\n\t\t");

    printf("Enter the Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case (1):
    system("cls");
    printf("Enter two number and operator as shown below\n");
    printf("\n\
           1. For Addition\t\t :\t First Number + Second Number\n\
           2. For Subtraction\t\t :\t First Number - Second Number\n\
           3. For Multiplication\t :\t First Number * Second Number\n\
           4. For Division\t\t :\t First Number / Second Number\n");

        printf("\nPress ENTER button after each of input\n\n");
        scanf("%f %c %f", &first_number, &operator, &second_number);

        switch(operator)
        {
        case ('+'):
            system("cls");
            printf("\n\nAddition Result \t:\t %.2f + %.2f = %.2f\n\n", first_number, second_number, first_number+second_number);
            break;
        case ('-'):
            system("cls");
            printf("\n\nSubtraction Result \t:\t %.2f - %.2f = %.2f\n\n", first_number, second_number, first_number-second_number);
            break;
        case ('*'):
            system("cls");
            printf("\n\nMultiplication Result \t:\t %.2f * %.2f = %.2f\n\n", first_number, second_number, first_number*second_number);
            break;
        case ('/'):
            system("cls");
            printf("\n\nDivision Result \t:\t %.2f / %.2f = %.2f\n\n", first_number, second_number, first_number/second_number);
            break;
        default:
            printf("Sorry! This is not valid operator\n\n");
        }
        break;
        case (0):
            system("cls");
            printf("Are you sure to exit?");
            break;
        default:
            system("cls");
            printf("Invalid Choice");
    }
        getch;
        return 0;
}
