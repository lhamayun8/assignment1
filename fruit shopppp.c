#include<stdio.h>

// Structure to store fruit information
typedef struct Fruit{
  char name[50];
  float pricePerKg;
}Fruit;

// Function to display available fruits
void displayFruits(Fruit fruits[], int numFruits)
{
  printf("\nAvailable fruits:\n");
  for (int i=0; i<numFruits; i++)
  {
    printf("%d.%s-%.2f per kg\n", i + 1, fruits[i].name, fruits[i].pricePerKg);
  }
}

// Function to update fruit quantity and calculate cost
float updateFruit(Fruit fruits[], int fruitIndex, int quantity)
{
    if (quantity > 0)
        {
            fruits[fruitIndex].quantity += quantity;
            return fruits[fruitIndex].pricePerKg * quantity;
        }
    else
        {
            printf("Invalid quantity.\n");
            return 0.0;
        }
}

// Function to display bill
void displayBill(Fruit fruits[], int numFruits, float totalBill)
{
    if (totalBill > 0.0)
    {
        printf("\nYour bill:\n");
        for (int i = 0; i < numFruits; i++)
            {
                if (fruits[i].quantity > 0)
                {
                    printf("%s: %d kg x %.2f/kg = %.2f\n", fruits[i].name, fruits[i].quantity, fruits[i].pricePerKg, fruits[i].quantity * fruits[i].pricePerKg);
                }
            }
    printf("\nTotal: %.2f\n", totalBill);
    }
    else
    {
        printf("\nThank you for visiting!\n");
    }
}

int main()
{
    // Define available fruits
    Fruit fruits[] =
    {
        {"Apple", 2.50}, {"Banana", 1.75}, {"Orange", 1.25}, {"Mango", 3.00}, {"Grapes", 4.50}
    };

// Number of fruits
const int numFruits = sizeof(fruits) / sizeof(fruits[0]);

// Welcome message and display fruits
printf("Welcome to the Fruit Shop!\n");
displayFruits(fruits, numFruits);

// User input variables
int choice, quantity;
float totalBill = 0.0;

  // Shopping loop
do {
        // Get user input
        printf("\nChoose a fruit (1-%d): ", numFruits);
        scanf("%d", &choice);
        if (choice < 1 || choice > numFruits)
            {
                printf("Invalid choice. Please try again.\n");
            }
        else
            {
                // Get quantity
                printf("Enter quantity (kg): ");
                scanf("%d", &quantity);

                // Update fruit and calculate cost
                totalBill += updateFruit(fruits, choice - 1, quantity);

                // Continue shopping?
                char yesNo;
                printf("Continue shopping (y/n): ");
                scanf("%c", &yesNo);
                while (yesNo != 'y' && yesNo != 'n')
                    {
                        printf("Please enter y or n: ");
                        scanf("%c", &yesNo);
                    }
                choice = (yesNo == 'y') ? 1 : 0;
            }
} while (choice);

// Display bill
displayBill(fruits, numFruits, totalBill);

return 0;
}

