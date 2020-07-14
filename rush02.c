/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:52:06 by dranger           #+#    #+#             */
/*   Updated: 2020/07/14 08:55:20 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void rush(int x, int y);
void top_row(int x);
void middle_rows(int x, int y);
void bottom_row(int x);

void rush(int x, int y){
    top_row(x);
    if(y >= 3)
    {
      middle_rows(x, y - 2);
    }
    if(y >= 2)
    {
        bottom_row(x);
    }
}

void top_row(int x)
{
        int column;
        column = 1;

        while(column <= x)
        {
            if(column == 1 || column == x)
                ft_putchar('A');
            else
                ft_putchar('B');
            column++;
        }
        ft_putchar('\n');
}

void middle_rows(int x, int y)
{
        int column;
        column = 1;
        int rows = 1;
        while(rows <= y)
        {
            while(column <= x)
            {
                if(column == 1 || column == x)
                ft_putchar('B');
                else
                ft_putchar(' ');
                column++;
            }
            ft_putchar('\n');
            column = 1;
            ++rows;
        }
}

void bottom_row(int x)
{
        int column;
        column = 1;

        while(column <= x)
        {
            if(column == 1 || column == x)
                ft_putchar('C');
            else
                ft_putchar('B');
            column++;
        }
}
