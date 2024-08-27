#include <stdio.h>
int main()
{
    int row, col, sum_row, sum_col;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printf("Enter row number (0-2): ");
    scanf("%d", &row);
    printf("Enter column number (0-2): ");
    scanf("%d", &col);

    printf("Elements of row %d: ", row);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[row][i]);
    }
    printf("\n");

    sum_row = 0;
    for (int i = 0; i < 3; i++)
    {
        sum_row += arr[row][i];
    }
    printf("Sum of elements of row %d: %d\n", row, sum_row);

    printf("Elements of column %d: ", col);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i][col]);
    }
    printf("\n");

    sum_col = 0;
    for (int i = 0; i < 3; i++)
    {
        sum_col += arr[i][col];
    }
    printf("Sum of elements of column %d: %d\n", col, sum_col);

    return 0;
}