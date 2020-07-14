/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dranger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:42:20 by dranger           #+#    #+#             */
/*   Updated: 2020/07/14 10:04:06 by dranger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void rush(int x, int y);
void ft_putchar(char c);

/* This main function will test for all cases specified in the PDF with spaces added between test cases */
/* Please compile each rush0X.c file separately to test whether the rush function for each chapter works  */

int main()
{
    rush(5, 3);
    ft_putchar('\n');
    ft_putchar('\n');
    rush(5, 1);
    ft_putchar('\n');
    rush(1, 1);
    ft_putchar('\n');
    rush(1, 5);
    ft_putchar('\n');
    ft_putchar('\n');
    rush(4, 4);
    ft_putchar('\n');
    ft_putchar('\n');

    return 0;
}
