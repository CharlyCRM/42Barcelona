/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:37:25 by caramire          #+#    #+#             */
/*   Updated: 2023/08/28 12:46:08 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write (1, &str[index], 1);
		index++;
	}
}

/*int main()
{
	char str[] = "La piscina termina esta semana";
	ft_putstr(str);
}*/
