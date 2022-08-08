# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    inject.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esafar <esafar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 17:26:55 by esafar            #+#    #+#              #
#    Updated: 2022/08/08 17:49:38 by esafar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

eval path=$PWD
echo $path/malloc.so

export LD_PRELOAD=$path/malloc.so

echo $LD_PRELOAD