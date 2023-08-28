/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:20:02 by caramire          #+#    #+#             */
/*   Updated: 2023/08/21 08:36:24 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	indice;

	indice = 0;
	while ((s1[indice] == s2[indice]) 
		&& (s1[indice] != '\0' || s2[indice] != '\0'))
	{
		indice++;
	}
	return (s1[indice] - s2[indice]);
}

/*int main(void)
{
	printf ("%d", ft_strcmp ("Hola", "Holaaaaa"));
	printf ("\n%d", ft_strcmp ("Hola", "Hola"));
	printf ("\n%d", ft_strcmp ("Hola que ases", "hola"));
}*/
