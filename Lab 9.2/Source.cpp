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
