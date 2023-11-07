/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:05:53 by delina            #+#    #+#             */
/*   Updated: 2023/11/06 22:16:05 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s && !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*#include <stdio.h>
void	test(unsigned int index, char *s)
{
	if (index % 2 != 0)
		*s = ft_toupper((unsigned char)*s);
}
int	main(void)
{
	char s[100] = "hello, world";
	ft_striteri(s, test);
	printf("%s", s);
}*/
