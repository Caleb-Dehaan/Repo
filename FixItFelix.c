#include <stdio.h>

// Function to search for multiple values in an array and perform actions if found
void searchAndPerformActions(int arr[], int size, int targets[], int targetSize) {
    int i;
    int o1 = 1;
    int o2 = 2;
    int o3 = 3;
    int o4 = 4;
    int o5 = 5;
    int o6 = 6;
    int o7 = 7;
    int o8 = 8;
    int o9 = 9;
    int o10 = 10;
    int o11 = 11;
    int o12 = 12;
    int o13 = 13;
    int o14 = 14;

    for (i = 0; i < targetSize; i++) {
        int target = targets[i];
        int found = 0; // Flag to indicate if the value is found
        
        for (j = 0; j < size; j++) {
            if (arr[j] == target) {
                found = 1;
                // Perform the desired action
                printf("Value %d found at index %d. Performing action...\n", target, j);
                // Add any other actions you want to perform here
            }
        }
        
        if (!found) {
            printf("Value %d not found in the array.\n", target);
        }
    }
}

// Welcome dialouge
int main(){ 

    // Var for numbers of tools to be run
    int n_tools, n_options, n_selected, i;

    // Declare an array to store the numbers of the menu options
    int arr[n_options] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    // Declare an array to store the target values
    int targets[n_selected];

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
    printf("Enter %d numbers:\n", n_selected);
    for(i = 0; i < m; i++) {
        printf("Enter number for tools you would like to run %d: ", i + 1);
        scanf("%d", &targets[i]);
    }

    // Call the function to search for the target values and perform actions if found
    searchAndPerformActions(arr, n, targets, m);

 return 0; 
}   