/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caramire <caramire@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:51:11 by caramire          #+#    #+#             */
/*   Updated: 2023/08/15 13:03:51 by caramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\n')
	{
		len++;
	}
	return (len);
}

/*int main()
{
	ft_strlen("Carlos");
	return 0;
}*/
