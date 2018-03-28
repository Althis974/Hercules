# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    drought.sh                                       .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: rlossy <marvin@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/03/28 10:46:01 by rlossy       #+#   ##    ##    #+#        #
#    Updated: 2018/03/28 11:24:00 by rlossy      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#!/bin/bash

#Everything will burn !
kill -9 $(top -l 1 | grep tsunami | awk '{print $1}')

#Clean all
rm -rf ./strike_back/tsunami
