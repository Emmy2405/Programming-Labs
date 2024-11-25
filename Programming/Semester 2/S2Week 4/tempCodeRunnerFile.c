#include <stdio.h>

int find3NumbersforSum(int A[], int arr_size, int sum) 
{
    int i = 0;
    int j = 0;
    int k = 0;
    int count = 0;


    for (i = 0; i < arr_size - 2; i++) 
    {

        for (j = i + 1; j < arr_size - 1; j++) 
        {

            for (k = j + 1; k < arr_size; k++) 
            {
                
                if (A[i] + A[j] + A[k] == sum) 
                {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    // Example usage:
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 15;

    int result = find3NumbersforSum(arr, size, targetSum);

    printf("Number of triplets with sum %d: %d\n", targetSum, result);

    return 0;
}
