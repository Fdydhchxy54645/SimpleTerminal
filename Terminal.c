#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMD_LENGTH 1024

// ANSI color codes
#define RESET_COLOR "\x1b[0m"
#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"

// Function to print the small ASCII art and welcome message inside a box
void print_welcome_message() {
    printf(BLUE "###############################################\n" RESET_COLOR);
    printf(BLUE "#                                             #\n" RESET_COLOR);
    printf(BLUE "#   SSSSS  III  M     M  PPPP   L       EEEEE  #\n" RESET_COLOR);
    printf(BLUE "#  S        I   MM   MM  P   P  L       E      #\n" RESET_COLOR);
    printf(BLUE "#   SSS     I   M M M M  PPPP   L       EEEE   #\n" RESET_COLOR);
    printf(BLUE "#      S    I   M  M  M  P      L       E      #\n" RESET_COLOR);
    printf(BLUE "#  SSSSS   III  M     M  P      LLLLL   EEEEE  #\n" RESET_COLOR);
    printf(BLUE "#                                             #\n" RESET_COLOR);
    printf(BLUE "###############################################\n" RESET_COLOR);
    printf(YELLOW "Welcome to SimpleTerminal by Rexx\n\n" RESET_COLOR);
    printf("Credits: Developed by Rexx\n\n");
}

// Function to execute commands
void execute_command(char *cmd) {
    // If the command is 'exit', exit the terminal
    if (strcmp(cmd, "exit") == 0) {
        printf(GREEN "Exiting terminal...\n" RESET_COLOR);
        exit(0);
    }

    // Otherwise, execute the command using system()
    int status = system(cmd);
    if (status == -1) {
        printf(RED "Error: Failed to execute command.\n" RESET_COLOR);
    }
}

int main() {
    char command[MAX_CMD_LENGTH];

    // Print the welcome message and credits
    print_welcome_message();

    // Main loop to take input and execute commands
    while (1) {
        // Display prompt
        printf(GREEN ">>> " RESET_COLOR); // Prompt symbol
        fgets(command, sizeof(command), stdin); // Read the input command

        // Remove the newline character
        command[strcspn(command, "\n")] = 0;

        // If the command is not empty, execute it
        if (strlen(command) > 0) {
            execute_command(command);
        } else {
            printf(RED "Error: Empty command entered.\n" RESET_COLOR);
        }
    }

    return 0;
}
