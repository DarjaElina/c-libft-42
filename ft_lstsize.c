/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 00:14:26 by delina            #+#    #+#             */
/*   Updated: 2023/11/19 18:24:15 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = lst;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	t_list p1;
	t_list p2;
	t_list p3;
	int i = 6;

	int *p = &i;

	p1.content = p;
	p1.next = &p2;
	p2.content = p;
	p2.next = &p3;
	p3.content = p;
	p3.next = NULL;

	printf("%d", ft_lstsize(&p1));
}*/
