/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:59:59 by kmacquet          #+#    #+#             */
/*   Updated: 2021/03/23 16:57:23 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char	dest[6];
	char	src[6] = "hello";
	char	cmp[6] = "hello";
	char	cmp2[6] = "hella";
	char	*str;
	
	printf("-------strlen------\n");
	printf("%zd\n", strlen("test"));
	printf("%zd\n\n",ft_strlen("test"));
	printf("%zd\n", strlen("0"));
	printf("%zd\n\n",ft_strlen("0"));
	printf("%zd\n", strlen(""));
	printf("%zd\n\n",ft_strlen(""));
	printf("%zd\n", strlen("\n"));
	printf("%zd\n\n",ft_strlen("\n"));

	printf("-------strcpy------\n");
	printf("before ft_strcpy : %s\n", dest);
	ft_strcpy(dest, src);
	printf("after ft_strcpy : %s\n", dest);

	printf("-------strcmp------\n");
	printf("%d\n", ft_strcmp(cmp, cmp2));
	printf("%d\n", strcmp(cmp, cmp2));

	printf("-------strdup------\n");
	str = ft_strdup(cmp);
	printf("%s\n", str);
	free(str);
	printf("errno : %d\n", errno);
	
	return (0);
}
