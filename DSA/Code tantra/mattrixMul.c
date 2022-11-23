#include <stdio.h>
int add_row_col(int m1[3][3], int m2[3][3], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += m1[r][i] * m2[i][c];
    }

    return sum;
}

int main()
{
    int m1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", add_row_col(m1, m2, i, j));
        }
        printf("\n");
    }
}