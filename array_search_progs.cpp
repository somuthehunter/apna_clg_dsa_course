#include <iostream>

using namespace std;

// linear search
int linear_search(int arr[], int key, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

// reverse the array program
void reverse_array(int *arr, int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

// hometask in apna college
// Q.1 waf to calculate sum and product of all numbers present in array
struct Result
{
    int sum;
    int prod;
};

Result
sum_product(int arr[], int size)
{
    int sum = 0;
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        prod *= arr[i];
    }
    Result result;
    result.sum = sum;
    result.prod = prod;
    return result;
}

// waf to swap the max and min number of an array
void minSwapMax(int *arr, int size)
{
    int min = 0;
    int max = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[max])
        {
            max = i;
        }
        if (arr[i] < arr[min])
        {
            min = i;
        }
    }
    int temp = arr[min];
    arr[min] = arr[max];
    arr[max] = temp;
}

// waf to print all the unique elements present in the array

int uniqueElements(int arr[], int size)
{
    bool isUnique = true;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

// waf to print intersection of two arrays

void intersection(int arr1[], int arr2[], int size1, int size2)
{
    cout << "Intersection is :";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

// printing the array

void print_array(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // uses for reverse array , sum_product , minSwapMax !!!
    int arr[] = {12, 35, 1, 10, 34, 7};
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {7, 5, 6, 1};
    // int arr[] = {1, 2, 3, 1, 2, 3, 4}; // this is for uniqueElements program
    int key = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << linear_search(arr, key, size) << endl;
    // reverse_array(arr, size);
    print_array(arr, size);

    Result result = sum_product(arr, size);
    cout << "Sum: " << result.sum << endl;
    cout << "Product: " << result.prod << endl;

    minSwapMax(arr, size);
    print_array(arr, size);

    uniqueElements(arr, size);

    intersection(arr1, arr2, size1, size2);

    return 0;
}