/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:24:33 by fgabler           #+#    #+#             */
/*   Updated: 2023/03/15 13:15:12 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	while(i < n)
	{((char*) dst)[i] = ((char *)src)[i];
		i++;
	}
	return(dst);
}
