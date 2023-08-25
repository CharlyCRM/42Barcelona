/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 09:02:10 by caramire          #+#    #+#             */
/*   Updated: 2023/08/23 09:50:51 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	indice;
	int	p_letra;

	indice = 0;
	p_letra = 0;
	while (str[indice] != '\0')
	{
		if (p_letra == 0 && (str[indice] >= 'a' && str[indice] <= 'z'))
		{
			str[indice] = str[indice] - ('a' - 'A');
			p_letra++;
		}
		else if (p_letra > 0 && (str[indice] >= 'A' && str[indice] <= 'Z'))
			str[indice] = str[indice] + ('a' - 'A');
		else if ((str[indice] < '0') || (str[indice] > '9' && str[indice] < 'A')
			|| (str[indice] > 'Z' && str[indice] < 'a')
			|| (str[indice] > 'z'))
			p_letra = 0;
		else
			p_letra++;
		indice++;
	}
	return (str);
}

/*int main()
{
	char str[] = "Hola, como estas ? 42palabras cuarenta-tres, seseta+dos+3res";
	printf ("%s", ft_strcapitalize (str));
	return 0;
}*/
