/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:38:02 by caramire          #+#    #+#             */
/*   Updated: 2023/08/17 14:48:46 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	indice;

	indice = 0;
	if (str[indice] == '\0')
	{
		return (1);
	}
	while (str[indice] != '\0')
	{
		if ((str[indice] >= 'A' && str[indice] <= 'Z') || 
			(str[indice] >= 'a' && str[indice] <= 'z'))
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
	printf("%d", ft_str_is_alpha("dasdasdklhkl"));
	printf("%d", ft_str_is_alpha("fdfsdf3432423sd"));
	return 0;
}*/
