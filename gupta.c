#include <stdio.h>
// Function for linear search
int linearSearch(int arr[11], int n, int key)
 {
    for (int i = 0; i < n; i++)
     {
        if (arr[i] == key) 
        {
            return i;  // Return the index if the key is found
        }
    }
    return -1;  // Return -1 if the key is not found

}

int main()
 {
    int arr[] = {10, 25, 30, 40, 55, 60, 70, 45, 67, 87, 55,
};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key ;

    printf("Serach the element : ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result != -1) 
    {
        printf("Element %d found at index %d.\n", key, result);
    } else
     {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
