/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:00:03 by caramire          #+#    #+#             */
/*   Updated: 2023/08/28 09:09:32 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index1;
	unsigned int	index2;
	unsigned int	dlen;
	unsigned int	slen;

	index1 = 0;
	index2 = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	while (dest[index2] != '\0')
	{
		index2++;
	}
	if (size <= dlen)
		return (slen + size);
	while (src[index1] != '\0' && index2 < size - 1)
	{
		dest[index2] = src[index1];
		index1++;
		index2++;
	}
	dest[index2] = '\0';
	return (dlen + slen);
}

/*int main()
{
	char src[] = "Tipo de dato en Python que permite la estrucuta clave y valor";
	char dest[] = "Diccionario es un  ";
	printf("%i\n", ft_strlcat(dest, src, 35));
	printf("%s", dest);
	return 0;
}*/
