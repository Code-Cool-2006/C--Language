#include <stdio.h>
#include <string.h>
#include <time.h>

// Function to log login attempts
void log_attempt(const char *username, int success) {
    FILE *file = fopen("login_attempts.log", "a");
    if (file != NULL) {
        time_t now = time(NULL);
        fprintf(file, "User: %s, Success: %d, Time: %s", username, success, ctime(&now));
        fclose(file);
    }
}

// Function to check credentials
int check_credentials(const char *username, const char *password) {
    // Hardcoded credentials for demonstration
    const char *valid_username = "Admin";
    const char *valid_password = "pass";

    return strcmp(username, valid_username) == 0 && strcmp(password, valid_password) == 0;
}

int main() {
    char username[50];
    char password[50];

    printf("Enter username: ");
    scanf("%49s", username); // Limit input to prevent buffer overflow
    printf("Enter password: ");
    scanf("%49s", password); // Limit input to prevent buffer overflow

    if (check_credentials(username, password)) {
        printf("Login successful!\n");
        log_attempt(username, 1); // Log success
    } else {
        printf("Login failed!\n");
        log_attempt(username, 0); // Log failure
    }

    return 0;
}
