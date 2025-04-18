#include <stdio.h>

void findMaxMin(float temps[], int n, float *max, float *min)
{
    *max = temps[0];
    *min = temps[0];
    for(int i = 1; i < n; i++)
    {
        if(temps[i] > *max) *max = temps[i];
        if(temps[i] < *min) *min = temps[i];
    }
}

int main() {
    float temps[5][5];
    for(int i = 0; i < 5; i++) {
        printf("Enter temperatures for city %d: ", i + 1);
        for(int j = 0; j < 5; j++)
        {
            scanf("%f", &temps[i][j]);
        }
    }

    for(int i = 0; i < 5; i++)
    {
        float max, min;
        findMaxMin(temps[i], 5, &max, &min);
        printf("City %d - Max: %.2f, Min: %.2f\n", i + 1, max, min);
    }
    return 0;
}
