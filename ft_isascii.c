/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:32:51 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/21 13:45:04 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	if (ft_isascii(c)) {
		printf("%d es un valor ascii.\n", c);
	} else {
		printf("%d no es un valor ascii.\n", c);
	}

	return (0);
}
*/
