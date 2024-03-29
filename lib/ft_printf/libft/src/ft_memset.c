/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnascime <fnascime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 11:48:04 by fnascime          #+#    #+#             */
/*   Updated: 2024/02/05 18:47:46 by fnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// implementation of memset function

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*temp;

	temp = (unsigned char *)ptr;
	while (num--)
	{
		*temp = (unsigned char)value;
		temp++;
	}
	return (ptr);
}

// test ft_memset function
// #include <stdio.h>

// int main()
// {
// 	char str[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("\nBefore memset(): %s\n", str);
// 	ft_memset(str + 13, '.', 8*sizeof(char));
// 	printf("After memset():  %s", str);
// 	char str1[50] = "GeeksForGeeks is for programming geeks.";
// 	printf("\nBefore memset(): %s\n", str1);
// 	memset(str1 + 13, '.', 8*sizeof(char));
// 	printf("After memset():  %s", str1);
// 	return 0;
// }