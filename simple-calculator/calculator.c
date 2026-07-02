#include <stdio.h>

/**
 * display_menu - Prints the calculator interface options.
 *
 * Return: void.
 */
void display_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
	printf("Choice: ");
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
			printf("Over!\n");
		}
		else if (choice >= 1 && choice <= 4)
		{
			/* C'est ici qu'on mettra les calculs à l'étape suivante */
			printf("Hello there!\n");
            if(choice == 1)
            {
                get_operands(&A, &B);
				result = A + B;
				printf("Result: %d\n", result);
            }
            else if (choice == 2)
            {
              get_operands(&A, &B);
				result = A - B;
				printf("Result: %d\n", result);
            }
            else if (choice == 3)
            {
                get_operands(&A, &B);
                result = A * B;
                printf("Result: %d\n", result);
            }
            else
            {

            }
		}
		else
		{
			printf("Invalid choice. General Kenobi\n");
		}
	}

	return (0);
}