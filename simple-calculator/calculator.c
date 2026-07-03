#include <stdio.h>

/**
 * display_menu - Prints the calculator interface options.
 *
 * Return: void.
 */
void display_menu(void)
{
	printf("*********************\n");
	printf("*********************\n");
	printf("* Simple Calculator *\n");
	printf("*___________________*\n");
	printf("* 1) Add            *\n");
	printf("* 2) Subtract       *\n");
	printf("* 3) Multiply       *\n");
	printf("* 4) Divide         *\n");
	printf("* 0) Quit           *\n");
	printf("*-------------------*\n");
	printf("* Choice:");
}


 /**
 * get_operands - Prompts the user and reads two integer operands.
 * @a: Pointer to the first operand in main.
 * @b: Pointer to the second operand in main.
 */
 int get_operands(int *A , int *B)
 {
                printf("A: ");
				scanf("%d", A);
				printf("B: ");
				scanf("%d", B);
                return (0);
 }
 /**
 * main - Core loop of the interactive calculator.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int choice;
	int A;
	int B;
    int result;


	/* On force choice à -1 pour s'assurer qu'on entre dans la boucle */
	choice = -1;

	while (choice != 0)
	{
		display_menu();
		scanf("%d", &choice);

		if (choice == 0)
		{
			printf("\n");
			printf("\n");
			printf("|\n");
			printf("|\n");
			printf("I    __\n");
			printf(" \\  ('')   /\n");
			printf("   -- ^  --\n");
			printf("     |&|\n");
			printf("     |.|\n");
			printf("    /  |\n");
			printf("   |   |\n");
			printf("It's Over Anakin!\n");
            printf("I have the Hight Ground\n");
            printf("------\n");
            printf("---------\n");
            printf("----------\n");
            printf(" \n");
            printf("you right Master,\n");
            printf("it's over..\n");
            printf("for you!\n");
            printf("----\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			/* C'est ici qu'on mettra les calculs à l'étape suivante */
			printf("/------------------------\\\n");
			printf("| You are the chosen One |\n");
			printf("\\------------------------/\n");
            if(choice == 1)
            {
                get_operands(&A, &B);
				result = A + B;
                printf("______________\n");
                printf("--------------\n");
                printf("| Result: %d |\n", result);
                printf("______________\n");
                printf("--------------\n");
            }
            else if (choice == 2)
            {
              get_operands(&A, &B);
				result = A - B;
                printf("--------------\n");
                printf("| Result: %d |\n", result);
                printf("--------------\n");
            }
            else if (choice == 3)
            {
                get_operands(&A, &B);
                result = A * B;
                printf("--------------\n");
                printf("| Result: %d |\n", result);
                printf("--------------\n");
            }
            else
            {
                get_operands(&A, &B);
                if(B == 0)
                {
                    printf("---------------------------\n");
                    printf("Error: division by zero\n");
                    printf("---------------------------\n");
                    printf("99999999999\n");
                    printf("execute order 66!\n");
                    printf("66666666666\n");
                }
                else{
                    double final_res = (double)A / B;
                    printf("--------------\n");
                    printf("| Result: %g |\n", final_res);
                    printf("--------------\n");
                }

            }
		}
		else
		{
			printf("Invalid choice. General Kenobi\n");
		}
	}

	return (0);
}