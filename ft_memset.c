/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:06 by terjimen          #+#    #+#             */
/*   Updated: 2023/10/27 00:54:18 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[20];
	size_t	len = 10;
	ft_memset(str, 'X', len);

	for (size_t i = 0; i < len; i++)
		printf("%c", str[i]);
	printf("\n");

	return (0);
}
*/
