#include <stdio.h>
// Function to swap two integers
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort array in ascending order using bubble sort
void bubbleSort(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to sort array in descending order using bubble sort
void bubbleSortDescending(int arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - i - 1; j++) 
		{
            if (arr[j] < arr[j + 1]) 
			{
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() 
{
    int size, choice;

    // Input for the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size);
    int arr1[size];
    printf("Enter %d elements for the first array:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr1[i]);
    }

    // Input for the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size);
    int arr2[size];
    printf("Enter %d elements for the second array:\n", size);
    for (int i = 0; i < size; i++) 
	{
        scanf("%d", &arr2[i]);
    }

    // Choosing sorting order
    printf("Choose sorting order (1 for Ascending, 2 for Descending): ");
    scanf("%d", &choice);

    // Sorting the arrays based on user's choice
    if (choice == 1) 
	{
        bubbleSort(arr1, sizeof(arr1)/sizeof(arr1[0]));
        bubbleSort(arr2, sizeof(arr2)/sizeof(arr2[0]));
    } 
	else if (choice == 2) 
	{
        bubbleSortDescending(arr1, sizeof(arr1)/sizeof(arr1[0]));
        bubbleSortDescending(arr2, sizeof(arr2)/sizeof(arr2[0]));
    } 
	else 
	{
        printf("Invalid choice\n");
        return 1;
    }

    // Printing sorted arrays
    printf("Sorted first array: ");
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) 
	{
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Sorted second array: ");
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++) 
	{
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

