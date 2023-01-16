#include "libft/libft.h"
#include "printf/ft_printf.h"

char **make_matrix(char *movs)
{
    int x = 0;
    int y = 0;
    char **matrix = ft_calloc(9, sizeof(char*));
    while (y < 9)
    {
        matrix[y] = ft_calloc(9, sizeof(char));
        y++;
    }
    y = 0;
    while (y < 8)
    {
        if (*movs != ' ')
            matrix[y][x] = *movs;
        else
        {
            y++;
            x = -1;
        }
        
        x++;
        movs++;
    }
    return(matrix);
}


int main()
{
    char **mat = make_matrix("53490435 11111111 00050000 00000000 00000000 00000000 11111111 53490435");
    int y = -1;
    while (y < 7)
    {
        y++;
        ft_printf("%s\n", mat[y]);
    }
}