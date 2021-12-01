#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sweeps;
    int count = 0;
    int reading[100];
    printf("The number of readings taken by the sonar device\n");
    scanf("%d", &sweeps);
    printf("Enter the readings\n");
    for (int i = 0; i < sweeps; i++)
    {
        scanf("%d", &reading[i]);
        getchar();
    }
    for (int i = 0; i < sweeps; i++)
    {
        if (reading[i + 1] > reading[i])
        {
            count++;
        }
    }
    printf("In this report there are %d measurements which are larger than the previous measurements\n",count-1);

    return 0;
}