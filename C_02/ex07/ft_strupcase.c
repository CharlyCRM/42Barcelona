/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:37:50 by caramire          #+#    #+#             */
/*   Updated: 2023/08/17 16:12:45 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] >= 'a' && str[indice] <= 'z')
		{
			str[indice] = str[indice] - 32;
		}
		indice++;
	}
	return (str);
}

/*int main()
{
	char cadena[] = "Hola";
	printf ("Mi estring es: %s", ft_strupcase(cadena));
	return 0;
}*/
