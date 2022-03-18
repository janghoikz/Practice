#include <iostream>

void PrintArray(int input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << input[i] << " ";
    }
    std::cout << std::endl;
}
void Swap(int& value1, int& value2)
{
    int temp = value1;
    value1 = value2;
    value2 = temp;
}
// Sequential sort
// 시간복잡도 : O(n^2)
// 공간복잡도 : O(1)
void SequentialSort(int input[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (input[i] > input[j])
            {
                Swap(input[i], input[j]);
            }
        }
    }
}

// Selection Sort
// 시간복잡도  : O(n^2)
// 공간복잡도  : O(1)
void SelectionSort(int input[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int minIndex = 1;
        for (int j = i; j < size; j++)
        {
            if (input[minIndex] > input[j])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            Swap(input[i], input[minIndex]);
        }
    }
}
// Bubble Sort
// 시간복잡도  : O(n^2)
// 공간복잡도  : O(1)
void BubbleSort(int input[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (input[j] > input[j + 1])
            {
                int temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }    
    }
}

// Insertion Sort
// 시간 복잡도 : O(n^2)
// 공간 복잡도 : O(1)
void InsertionSort(int input[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;
        int target = input[i];

        while (j-- >= 0 && target < input[j])
        {
            input[j + 1] = input[j];
            input[j] = target;
        }
    }
}

int main()
{
    const int SIZE{ 5 };
    int array[SIZE]{ 8, 7, 2, 3, 1 };

    //Sort

    PrintArray(array, SIZE);
}