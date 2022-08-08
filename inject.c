/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inject.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:24:19 by esafar            #+#    #+#             */
/*   Updated: 2022/08/08 17:30:14 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INJECT_H
# define INJECT_H

#include <stdlib.h>
#include <unistd.h>

#undef malloc

void    *malloc(size_t size){
    write(1, "test\n", 5);
    return (NULL);
}

#endif