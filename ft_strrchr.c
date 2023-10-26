/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:52:14 by terjimen          #+#    #+#             */
/*   Updated: 2023/10/23 22:59:29 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hola amigo";
	int	find = 'o';

	char *locate = ft_strrchr(str, find);

	if (locate)
		printf("El caracter '%c' ESTA en la string en 
esta posicion %ld.\n", find, locate-str);
	else
		printf("El caracter '%c' NO ESTA en la string.\n", find);
	return (0);
}
*/