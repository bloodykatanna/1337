/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaghlou <azaghlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 10:52:21 by azaghlou          #+#    #+#             */
/*   Updated: 2022/11/09 21:56:52 by azaghlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *therest(char *sttr)
{
    int i;
    char *ptr;
    int j;

    j = 0;
    i = 0;
    if (!sttr)
        return 0;
    while (sttr[i] && sttr[i] != '\n')
        i++;
    if (!sttr[i])
    {
        free(sttr);
        return (0);
    }
    i++;
    ptr = malloc(sizeof(char) * ((ft_strlen(sttr)) + 1));
    if (!ptr)
        return (0);
    while (sttr[i])
    {
        ptr[j] = sttr[i];
        i++;
        j++;
    }
    ptr[j] = '\0';
    free(sttr);
    return (ptr);
}

char *srchnl(char *ss)
{
    int i;
    char *aa;

    i = 0;

    while (ss[i] && ss[i] != '\n')
        i++;
    if (ft_strlen(ss) == 0)
        return (0);
    aa = malloc(sizeof(char) * (i + 2));
    i = 0;
    while (ss[i])
    {
        aa[i] = ss[i];
        i++;
        if (ss[i - 1] == '\n')
            break;
    }
    aa[i] = '\0';
    return (aa);
}

char *get_next_line(int fd)
{
    char *line;
    static char *sttc;
    char buffer[BUFFER_SIZE + 1];
    int i;

    i = 1;
    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) == -1)
        return 0;
    while (i > 0)
    {
        i = read(fd, buffer, BUFFER_SIZE);
        buffer[i] = '\0';
        sttc = ft_strjoin(sttc, buffer);
        if (ft_strchr(sttc, '\n'))
            break;
    }
    line = srchnl(sttc);
    sttc = therest(sttc);
    // printf("sttc: %s\n", sttc);
    return (line);
}

// int main()
// {
// 	int fd;
// 	fd = open ("test.txt", O_RDONLY);
// 	printf("%s",get_next_line(fd));

//     printf("----------------------\n");
// 	printf("%s",get_next_line(fd));

//     printf("----------------------\n");
// 	printf("%s",get_next_line(fd));

//     printf("----------------------\n");
// 	printf("%s",get_next_line(fd));

//     // printf("----------------------\n");
//  	// printf("%s",get_next_line(fd));

//     // printf("----------------------");
// 	// printf("%s",get_next_line(fd));
// }