/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:44:50 by caramire          #+#    #+#             */
/*   Updated: 2023/08/17 15:05:30 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	indice;

	indice = 0;
	if (str[indice] == '\0')
	{
		return (1);
	}
	while (str[indice] != '\0')
	{
		if (str[indice] >= '0' && str[indice] <= '9')
		{
			indice++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_numeric("3312312"));
	return 0;
}*/
