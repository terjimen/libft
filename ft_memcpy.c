/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:29:13 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/21 13:56:59 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
int	main(void)
{
	char	src[] = "Hola";
	char	dst[14];

	ft_memcpy(dst, src, ft_strlen(src) + 1);
	printf("String final: %s\n", dst);
	
	return (0);
}
*/
