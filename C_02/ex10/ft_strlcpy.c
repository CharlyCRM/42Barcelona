/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:23:43 by caramire          #+#    #+#             */
/*   Updated: 2023/08/23 10:06:52 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	indice;
	unsigned int	contador;

	indice = 0;
	contador = 0;
	while (src[contador] != '\0')
	{
		contador++;
	}
	if (size != 0)
	{
		while (src[indice] != '\0' && indice < (size -1))
		{
			dest[indice] = src[indice];
			indice++;
		}
		dest[indice] = '\0';
	}
	return (contador);
}

/*int main()
{
	char val[3];
	printf("Cantidad de caracteres copiados: %d\n", 
	ft_strlcpy(val, "holaaaaaa", sizeof(val)));
	printf("Cadena copiada: %s\n", val);
	return 0;
}*/
