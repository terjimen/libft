/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terjimen <marvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:21:11 by terjimen          #+#    #+#             */
/*   Updated: 2023/11/10 16:53:20 by terjimen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sum;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	sum = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!sum)
		return (NULL);
	ft_memcpy(sum, s1, len_s1);
	ft_memcpy(sum + len_s1, s2, len_s2);
	sum[len_s1 + len_s2] = '\0';
	return (sum);
}
/*
int	main(void)
{

}
*/
