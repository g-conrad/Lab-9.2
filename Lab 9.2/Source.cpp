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
