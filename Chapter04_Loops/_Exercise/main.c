#include <stdio.h>

void print_board(int num_cols, int num_rows)
{

    for (int row = 0; row < num_rows; ++row)
    {
        for(int col = 0; col < num_cols; ++col)
        {
            if(col == 0)
            {
                printf("<\t");
                continue;
            }
            else if(col == num_cols-1)
            {
                printf(">");
            }
            else if(row == 0)
            {
                printf("  ^\t");
                continue;
            }
            else if(row == num_rows-1)
            {
                printf("  v\t");
            }
            else
            {
                printf("(%d,%d)\t", col, row);
            }
        }
        printf("\n");
    }
}

int main()
{
    print_board(6,6);

    return 0;
}
