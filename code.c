#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main(void)
{
    const int TOTAL = 5;

    int scores[TOTAL];

    for(int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average score = %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}