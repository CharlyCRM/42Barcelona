/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:07:04 by caramire          #+#    #+#             */
/*   Updated: 2023/08/21 09:57:52 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	indice;

	indice = 0;
	if (str[indice] == '\0')
	{
		return (1);
	}
	while (str[indice] != '\0')
	{
		if (str[indice] >= 'a' && str[indice] <= 'z')
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
	printf("%d", ft_str_is_lowercase("aaaaaaggg"));
	return 0;
}*/
