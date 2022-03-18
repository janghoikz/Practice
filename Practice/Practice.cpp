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
// 공간복잡도 : O(n)
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
// 공간복잡도  : O(n)
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

int main()
{
    const int SIZE{ 5 };
    int array[SIZE]{ 8, 7, 2, 3, 1 };

    //Sort

    PrintArray(array, SIZE);
}