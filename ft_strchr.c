/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:34:07 by delina            #+#    #+#             */
/*   Updated: 2023/10/28 20:29:32 by delina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
size_t	ft_strlen(const char *str);

const char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);	
}

#include <stdio.h>
int	main(void)
{
	char	s[100] = "Some funny string";
	//int	c = 111;
	int	a = '\0';

	printf("%s", ft_strchr(s, a));
}

