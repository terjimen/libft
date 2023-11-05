/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:59:06 by terjimen          #+#    #+#             */
/*   Updated: 2023/10/27 13:21:41 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len--)
		*str++ = c;
	return (b);
}
/*
int	main(void)
{
	char	str[20];

	ft_memset(str, 'X', 10);
	printf("La string queda: %s\n", str);
	return (0);
}
*/
