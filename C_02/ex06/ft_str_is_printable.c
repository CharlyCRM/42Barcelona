/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:23:53 by caramire          #+#    #+#             */
/*   Updated: 2023/08/21 10:09:46 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	indice;

	indice = 0;
	if (str[indice] == '\0')
	{
		return (1);
	}
	while (str[indice] != '\0')
	{
		if (str[indice] < 32 || str[indice] > 126)
		{
			return (0);
		}
		indice++;
	}
	return (1);
}

/*int main()
{
	printf("%d", ft_str_is_printable("\nfsdfsdfsd"));
	return 0;
}*/
