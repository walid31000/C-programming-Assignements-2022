#include<stdio.h>

// Recursive function to convert a number into its binary representation
void binary(int num) {
    if (num == 0) {
        return; // Base case: stop the recursion if num is 0
    }
    else {
        binary(num / 2); // Recursive call with the quotient
        printf("%d", num % 2); // Print the remainder after the recursive call
    }
}

int main() {
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    // Check if the number is 0 to handle this specific case
    if (num == 0) {
        printf("0"); // Directly print 0 for the input 0
    }
    else {
        binary(num); // Call the recursive function for any other number
    }
    return 0;
}
