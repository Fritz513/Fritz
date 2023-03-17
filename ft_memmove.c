/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 20:47:38 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/15 10:13:22 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;

	if(dst > src)
	{
		i = len;
		while(i--)
		{
			((char*) dst)[i] = ((char *)src)[i];
		}
		return(s1);
	}
	while(i < n)
	{
		((char*) dst)[i] = ((char *)src)[i];
		i++;
	}
	return(dst);
}

