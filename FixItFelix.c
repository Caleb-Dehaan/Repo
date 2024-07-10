#include <stdio.h>

// Function to search for multiple values in an array and perform actions if found
void searchAndPerformActions(int arr[], int size, int targets[], int targetSize) {

    int i; //Count Variable
    int target = targets[i]; //
    int found = 0; // Flag to indicate if the value is found

    //Start by setting i = 0, Every time you've been around the loop, increase i by 1.
    for (i = 0; i++) {

        if (target == 1) {
        found = 1;
        int result = system("sfc /scannow");
        }
        
        if (target == 2) {
        found = 1;
        int result = system("DISM /online /cleanup-image /restorehealth");
        }

        if (target == 3) {
        found = 1;
        int result = system("Chkdsk C:");
        }

        f (target == 4) {
        found = 1;
        int result = system("Chkdsk /f /x /r C:");
        }

        f (target == 5) {
        found = 1;
        int result = system("Set-ExecutionPolicy -ExecutionPolicy RemoteSigned");
        int result = system("Install-Module PSWindowsUpdate");
        int result = system("Import-Module PSWindowsUpdate");
        int result = system("Get-WindowsUpdate | Install-WindowsUpdate");
        }
    }
}       

int main() { 

    // Var for numbers of tools to be run
    int n_tools, n_options, n_selected, i;
    // Declare an array to store the numbers of the menu options
    int arr[n_options] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    // Declare an array to store the target values
    int targets[n_selected];
    
    // Welcome dialouge
    printf("Welcome to FixItFelix");    
    printf("What do we want to fix today?:\n");
    printf("1. SFC \n");
    printf("2. DISM \n");
    printf("3. CheckDisk \n");
    printf("4. CheckDisk with Repair \n");
    printf("5. Install windows updates \n");

    // Prompt the user to enter each number for desired tools to be run
    printf("Enter %d numbers:\n", n_selected);
    for(i = 0; i < n_selected; i++) {
        printf("Enter number for tools you would like to run %d: ", i + 1);
        scanf("%d", &targets[i]);
    }

    // Call the function to search for the target values and perform actions if found
    searchAndPerformActions(arr, n_options, targets, n_selected);

 return 0; 
}   