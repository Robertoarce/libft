/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarce <rarce@42.student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:32:30 by rarce             #+#    #+#             */
/*   Updated: 2020/05/05 19:39:24 by rarce            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*ptr;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (ptr == NULL || s == NULL || *f == NULL)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		ptr[counter] = (*f)(counter, s[counter]);
		counter++;
	}
	ptr[counter] = '\0';
	return (ptr);
}
