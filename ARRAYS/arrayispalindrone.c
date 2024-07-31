//wap to reverse an array without an extra array
#include <stdio.h>

int reverse(int arr[]) {
    int i = 0;
    int j = 4;
    int temp = 1; // Initialize temp to 1 (assumes it's a palindrome)

    while (i < j) {
        if (arr[i] != arr[j]) {
            temp = 0; // Not a palindrome
            break;    // Exit the loop early if a mismatch is found
        }
        i++;
        j--;
    }

    return temp;
}

int main() {
    int arr[5];
    printf("Enter elements: ");
    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    int temp = reverse(arr);
    if (temp == 0) {
        printf("Not a palindrome\n");
    } else {
        printf("Palindrome\n");
    }

    return 0;
}
