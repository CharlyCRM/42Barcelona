/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:42:13 by caramire          #+#    #+#             */
/*   Updated: 2023/08/25 12:59:04 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index1;
	int	index2;

	index1 = 0;
	index2 = 0;
	if (to_find[index2] == '\0')
		return (str);
	while (str[index1] != '\0')
	{
		while (str[index1 + index2] == to_find[index2] 
			&& str[index1 + index2] != '\0')
			index2++;
		if (to_find[index2] == '\0')
			return (str + index1);
		index1++;
		index2 = 0;
	}
	return (0);
}

/*int main()
{
	char str[] = "Hola como estas, estudiante de 42 Barcelona";
	char find[] = "estas";
	printf ("%s", ft_strstr(str, find));
	return 0;
}*/
