/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:54:48 by caramire          #+#    #+#             */
/*   Updated: 2023/08/14 08:36:18 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void	line(char l, char body, char r, int len)
{
	int	i;

	i = 1; // i is a counter variable
	ft_putchar (l);
	while (i < len -1)
	{
		ft_putchar(body);
		i++;
	}
	if (len > 1)
	{
		ft_putchar (r);
	}
	ft_putchar ('\n');
}

// Function receiving two parameters, x width and y height to draw a figure
void	rush(int x, int y)
{
	int	alto;
	// I draw the head if the figure
	if (x > 0 && y > 0) // x width and y height
	{
		line ('/', '*', '\\', x);
		alto = 1;
		// I draw the doby of the figure
		while (alto < y - 1)
		{
			line('*', ' ', '*', x);
			alto++;
		}
		// I draw the footer of the figure
		if (alto > 1)
		{
			line('\\', '*', '/', x);
		}
	}
}
