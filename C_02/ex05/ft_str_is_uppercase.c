/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:14:47 by caramire          #+#    #+#             */
/*   Updated: 2023/08/21 10:00:03 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	indice;

	indice = 0;
	if (str[indice] == '\0')
	{
		return (1);
	}
	while (str[indice] != '\0')
	{
		if (str[indice] >= 'A' && str[indice] <= 'Z')
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
	printf("%d", ft_str_is_uppercase("DSDASDSD"));
	return 0;
}*/
