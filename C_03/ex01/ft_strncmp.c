/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 08:39:48 by caramire          #+#    #+#             */
/*   Updated: 2023/08/25 14:42:35 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((s1[index] != '\0' || s2[index] != '\0') && index < n)
	{
		if (s1[index] > s2[index])
		{
			return (1);
		}
		else if (s1[index] < s2[index])
		{
			return (-1);
		}
		index++;
	}
	return (0);
}

/*int main()
{
	printf ("%d", ft_strncmp("Hola", "Hola que ases", 7));
	return 0;
}*/
