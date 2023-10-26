#include <iostream>

using namespace std;

bool isSortedIncreasing(int values[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (values[i] > values[i + 1])
        {
            return false;

        }

    }
    return true;

}

bool isSortedDecreasing(int values[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (values[i] < values[i + 1])
        {
            return false;
        }

    }
    return true;

}

bool hasAdjacentDuplicates(int values[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (values[i] == values[i + 1])
        {
            return true;
        }
    }
    return false;
}
bool hasDuplicates(int values[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (values[i] == values[j])
            {
                return true;
            }
        }
    }
    return false;

}

int main()
{
    const int arraySize = 6;
    int values[arraySize];

    // Input loop to acquire testing data

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter integer #" << i << ": "; cin >> values[i];

    }

    // Test and display results

    if (isSortedIncreasing(values, arraySize))
    {
        cout << "The data are increasing." << endl;

    }

    else
    {
        cout << "The data are not increasing." << endl;

    }

    if (isSortedDecreasing(values, arraySize))
    {
        cout << "The data are decreasing." << endl;

    }

    else
    {
        cout << "The data are not decreasing." << endl;

    }

    if (hasAdjacentDuplicates(values, arraySize))
    {
        cout << "The data has adjacent duplicates." << endl;

    }

    else
    {
        cout << "The data does not have adjacent duplicates." << endl;

    }

    if (hasDuplicates(values, arraySize))
    {
        cout << "The data has duplicates." << endl;
    }

    else
    {
        cout << "The data does not have duplicates." << endl;
    }

    return 0;
}