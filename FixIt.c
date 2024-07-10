#include <stdio.h>

// A iterative binary search function. It returns location
// of x in given array arr[l..r] if present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
	// the loop will run till there are elements in the
	// subarray as l > r means that there are no elements to
	// consider in the given subarray
	while (l <= r) {

		// calculating mid point
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x) {
			return m;
		}

		// If x greater than ,, ignore left half
		if (arr[m] < x) {
			l = m + 1;
		}

		// If x is smaller than m, ignore right half
		else {
			r = m - 1;
		}
	}

	// if we reach here, then element was not present
	return -1;
}

// driver code
int main(void)
{
	// creating a sorted array
	int selected[];
	int size = sizeof(selected) / sizeof(selected[0]);
	// element to be searched
	int x;
    // Var for counting
    int i;

    // Prompt the user to enter each number for desired tools to be run
    printf("Enter %d numbers:\n", x);
    for(i = 0; i < x; i++) {
        printf("Enter number for tools you would like to run %d: ", i + 1);
        scanf("%d", &selected[i]);
    }

	// calling binary search
	int result = binarySearch(selected, 0, size - 1, x);

	if (result == -1) {
		printf("Element is not present in array");
	}
	else {
		printf("Element is present at index %d", result);
	}

	return 0;
}
