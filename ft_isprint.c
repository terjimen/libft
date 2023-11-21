/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 20:35:20 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/21 13:47:20 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	c;

	c = '~';
	if (ft_isprint(c)) {
		printf("%c es printeable. \n", c);
	} else {
		printf("%c no es printeable. \n", c);
	return (0);
}
*/
