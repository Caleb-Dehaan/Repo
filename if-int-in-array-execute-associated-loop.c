#include <stdio.h>

    int i; //Count Variable
    int target = targets[i]; //
    int found = 0; // Flag to indicate if the value is found
    
//Start by setting i = 0, Every time you've been around the loop, increase i by 1.
for (i = 0; i++) {

    //if array contains target value execute code
    if (target == 1) {
        found = 1;
        // Execute the command and store the result
        int result = system("sfc /scannow");
    }

    //If not found print error        
    if (!found) {
        printf("Value %d not found in the array.\n", target);
    }
}
