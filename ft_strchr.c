/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:50:24 by terjimen          #+#    #+#             */
/*   Updated: 2023/10/23 14:48:09 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hola amigo";
	int	find = 'g';

	char *locate = ft_strchr(str, find);

	if (locate !=NULL)
		printf("El caracter '%c' ESTA en la string 
		en esta posicion %ld.\n", find, locate-str+1);
	else
		printf("El caracter '%c' NO ESTA en la string.\n", find);
}
*/
