#include <stdio.h>
#include <stdbool.h>

// Attempted UNGUIDED

// PROTOTYPES
void print_balance(float balance);
void present_options();
int get_user_choice();

int main() {
    printf("*** WELCOME TO THE BANK ***\n\n");

    bool loop = true;
    int user_input = 0;

    float balance = 0.0f;
    print_balance(balance);

    while (loop) {
        present_options();
        user_input = get_user_choice();

        switch(user_input) {
            case 1:
                printf("Your balance is %.2f\n\n", balance);
                break;
            case 2:
                printf("How much would you like to deposit?: ");
                
                float deposit = 0.0f;
                scanf("%f", &deposit);
                balance += deposit;
                printf("Your new balance is $%.2f\n\n", balance);
                break;
            case 3:
                if (balance <= 0.0) {
                    printf("Insufficient balance to withdraw money.\n\n");
                    break;
                }

                float withdraw = 0.0f;
                
                printf("Your current balance is $%.2f\n", balance);
                printf("How much would you like to withdraw?: ");
                scanf("%f", &withdraw);

                if (withdraw > balance) {
                    printf("Insufficient balance!\n\n");
                } else {
                    printf("Dispensing $%.2f\n", withdraw);
                    balance -= withdraw;
                    printf("Your new balance is $%.2f\n\n", balance);
                }

                break;
            case 4:
                printf("Exiting program...\n");
                loop = false;
                break;
            default:
                printf("Please provide a valid input!\n\n");
        }
    }

    return 0;
}

void print_balance(float balance) {
    printf("You currently have $%.2f balance.\n\n", balance);
}

void present_options() {
    printf("Select an option:\n");

    printf("1. Check Balance.\n");
    printf("2. Deposit Money.\n");
    printf("3. Withdraw Money.\n");
    printf("4. Exit.\n\n");
}

int get_user_choice() {
    printf("Enter your choice: ");
    int input = 0.0;
    scanf("%d", &input);

    return input;
}