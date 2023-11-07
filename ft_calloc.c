/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:48:19 by delina            #+#    #+#             */
/*   Updated: 2023/11/05 19:03:38 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	int *arr = ft_calloc(5, sizeof(int));
	int i = 0;

	while (i < 5)
	{	
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
}*/
