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
//Merge Sort
// 시간 복잡도 : O(n log n)
// 공간 복잡도 : O(n)

void Merge(int input[], int start, int half, int end, int temp[])
{
    int i = start;
    int j = half + 1;
    int tempIndex{};

    while (i <= half && j <= end)
    {
        if (input[i] < input[j])
        {
            temp[tempIndex++] = input[i++];
        }
        else
        {
            temp[tempIndex++] = input[j++];
        }
    }

    while (i <= half)
    {
        temp[tempIndex++] = input[i++];
    }

    while (j <= end)
    {
        temp[tempIndex++] = input[j++];
    }

    tempIndex = 0;
    for (int i = start; i <= end; ++i)
    {
        input[i] = temp[tempIndex++];
    }
}


void MergeSort(int input[], int start, int end, int temp[])
{
    // base case
    if (start >= end)
    {
        return;
    }
    int half = (start + end) / 2;
    MergeSort(input, start, half, temp);
    MergeSort(input, half + 1, end, temp);
    Merge(input, start, half, end, temp);
}

//quick Sort
// 시간 복잡도 : O(n log n)
// 공간 복잡도 : O(n)
void quickSort(int input[], int left, int right)
{
    int i = left;
    int j = right;
    int pivot = input[(left+right)/2];
    do
    {
        while (input[i] < pivot)
        {
            i++;
        }
        while (input[j] > pivot)
        {
            right--;
        }
        if (i <= j)
        {
            std::swap(input[i], input[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (left < j)
    {
        quickSort(input, left, j);
    }
    if (right > i)
    {
        quickSort(input, i, right);
    }
}



int main()
{
    const int SIZE{ 5 };
    int array[SIZE]{ 8, 7, 2, 3, 1 };
    int tempArray[SIZE]{};

    //Sort
}