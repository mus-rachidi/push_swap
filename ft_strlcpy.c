/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 16:41:26 by murachid          #+#    #+#             */
/*   Updated: 2021/06/22 15:04:54 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	k;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	k = size - 1;
	while (k > 0 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		k--;
	}
	dst[i] = '\0';
	return (len);
}
