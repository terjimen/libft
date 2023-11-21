/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:11:14 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/21 13:39:55 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = '5';
	if (isdigit(c)) {
		printf("%c es un dígito.\n", c);
	} else {
		printf("%c no es un dígito.\n", ci);
	}

	return (0);
}	
}
*/
