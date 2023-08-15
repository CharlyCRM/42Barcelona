/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 08:50:28 by caramire          #+#    #+#             */
/*   Updated: 2023/08/14 15:03:16 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;
	int	zero;

	num1 = -1;
	while (num1++ < 98)
	{
		num2 = num1;
		while (num2++ < 99)
		{
			zero = (num1 / 10) + '0';
			write (1, &zero, 1);
			zero = (num1 % 10) + '0';
			write (1, &zero, 1);
			write (1, " ", 1);
			zero = (num2 / 10) + '0';
			write (1, &zero, 1);
			zero = (num2 % 10) + '0';
			write (1, &zero, 1);
			if (num1 != 98 || num2 != 99)
				write (1, ",", 2);
		}
	}
}

/*int main()
{
	ft_print_comb2();
	return (0);
}*/
