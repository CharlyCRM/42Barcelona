/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 07:55:27 by caramire          #+#    #+#             */
/*   Updated: 2023/08/18 08:05:23 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	indice;

	indice = 0;
	while (str[indice] != '\0')
	{
		if (str[indice] >= 'A' && str[indice] <= 'Z')
		{
			str[indice] = str[indice] + 32;
		}
		indice++;
	}
	return (str);
}

/*int main()
{
	char var[] = "HOLA A TODO EL MUNDO";
	printf ("%s", ft_strlowcase(var));
	return 0;
}*/
