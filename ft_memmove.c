/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:33:05 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/16 14:53:52 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else if (d > s)
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dst);
}
/*
int main(void)
{
	char 	arrayd[] = "holaamigo";
	char 	arrays[] = "bye";

	void		*ptr;

	ptr = &arrayd[0];
	ft_memmove(arrayd, arrays, 3);
   	printf("arrayd: %s\n", arrayd);
   	printf("ptr: %s\n", (char *)ptr);
	return(0);
}
*/
