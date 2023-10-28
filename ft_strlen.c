/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:53:29 by delina            #+#    #+#             */
/*   Updated: 2023/10/28 20:02:16 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%zu", ft_strlen("Hello world"));
	printf("%zu", ft_strlen(""));
}*/
