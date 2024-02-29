#include <stdio.h>
int main() {
    char username[100]; // Buffer for the inputted username
    char password[100]; // Buffer for the inputted password
    printf("Welcome to Retro OS!\n");
    printf("Please enter your username: ");
    scanf("%s", &username); // Read the user's input as a string
    if(strcmp(username, "root") == 0){ // Check if the username is root
        printf("\nPlease enter your password: ");
        scanf("%s", &password); // Read the user's input as a string
        if(strcmp(password, "Pw#8151911") == 0) { // Check if the password is correct
            printf("Welcome to Retro OS!\n");
            char choice;
            printf("Type 1 to go to folder 1 or type 2 to go to folder 2: ");
            scanf("%c", &choice); // Read the user's input as a character
            if(choice == '1'){
                printf("Welcome to Folder 1.\n");
             } else if (choice == '2') {
                 printf("Welcome to Folder 2.\n");
             } else {
                 printf("Invalid choice.\n");
             }
         } else { // If the password is incorrect, display an error message
            printf("Incorrect username or password. Please try again.\n");
        }
    } else { // If the username is not root, display an error message
        printf("Incorrect username. Please try again.\n");
    }
    return 0;
}
