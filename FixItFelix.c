#include <stdio.h>
// Function to search for a value in an array and perform an action if found
void searchAndPerformAction(int arr[], int size, int target) {
    int i;
    int found = 0; // Flag to indicate if the value is found

    for (i = 0; i < size; i++) { //Searches array and checks if current element is equal to target value
        if (arr[i] == target) {
            found = 1;
            // Perform the desired action
            printf("Value %d found at index %d. Performing action...\n", target, i);
            // Add any other actions you want to perform here
        }
    }

    if (!found) {
        printf("Value %d not found in the array.\n", target);
    }
}

// Welcome dialouge
int main(){ 

    // Var for numbers of tools to be run
    int numtools, i;

    // Declare an array to store the numbers
    int arr[n];

    printf("Welcome to FixItFelix");    
    printf("What do we want to fix today?:\n");
    printf("1. SFC \n");
    printf("2. DISM \n");
    printf("3. CheckDisk \n");
    printf("4. CheckDisk with Repair \n");
    printf("5. Install windows updates \n");
    printf("6. Install Displaylink Drivers \n");
    printf("7. Disable NIC Power Saving \n");
    printf("8. Repair O365\n");
    printf("9. Delete Temp Files\n");
    printf("10. Pull Logs \n");
    printf("11. Install testing tools \n");
    printf("12. Create a User\n");
    printf("13. Recreate Fileshare mapping\n");
    printf("14. Reboot PC\n");

    // Prompt the user to enter each number for desired tools to be run
    printf("Enter %d numbers:\n", numtools);
    for (i = 0; i < n; i++) {
        printf("Enter number for tool you would like to run: %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Optionally, print to verify the input
    printf("You entered the following numbers:\n");
    for (i = 0; i < numtools; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to search for the value and perform an action if found
    searchAndPerformAction(arr, n, target);

 return 0; 
}  