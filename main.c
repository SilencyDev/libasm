/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:59:59 by kmacquet          #+#    #+#             */
/*   Updated: 2021/03/24 17:53:57 by kmacquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	main(void)
{
	char	dest[6];
	char	src[6] = "hello";
	char	cmp[6] = "hello";
	char	cmp2[6] = "hella";
	char	*test = NULL;
	char	*str;
	char	*buff[BUFFER_SIZE];
	int		fd;
	
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
	errno = 0;
	str = ft_strdup(cmp);
	printf("%s\n", str);
	free(str);
	printf("errno : %d\n", errno);
	// Both function segfault correctly
	// errno = 0;
	// str = ft_strdup(test);
	// printf("%s\n", str);
	// printf("errno : %d\n", errno);
	// errno = 0;
	// str = strdup(test);
	// printf("%s\n", str);
	// printf("errno : %d\n", errno);

	printf("-------write------\n");
	errno = 0;
	ft_write(1, "hello\n", 7);
	printf("errno : %d\n", errno);
	errno = 0;
	write(1, "hello\n", 7);
	printf("errno : %d\n", errno);
	errno = 0;
	ft_write(-1, "hello\n", 5);
	printf("errno : %d\n", errno);
	errno = 0;
	write(-1, "hello\n", 5);
	printf("errno : %d\n", errno);

	printf("-------read------\n");
	errno = 0;
	fd = open("test.txt", O_RDONLY);
	ft_read(fd, buff, BUFFER_SIZE);
	printf("errno : %d\n", errno);
	close(fd);
	errno = 0;
	fd = open("test.txt", O_RDONLY);
	read(fd, buff, BUFFER_SIZE);
	printf("errno : %d\n", errno);
	close(fd);
	errno = 0;
	ft_read(-1, NULL, BUFFER_SIZE);
	printf("errno : %d\n", errno);
	errno = 0;
	read(-1, NULL, BUFFER_SIZE);
	printf("errno : %d\n", errno);
	
	return (0);
}
