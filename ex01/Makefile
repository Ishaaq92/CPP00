# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 12:18:56 by ishaaq            #+#    #+#              #
#    Updated: 2025/07/26 14:54:11 by ishaaq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror
CPPFILES = main.cpp PhoneBook.cpp Contact.cpp
BINARY = telephone

all: $(BINARY)

$(BINARY) : $(CPPFILES)
	$(CC) $(CFLAGS) $(CPPFILES) -o $(BINARY)

re: fclean all

clean:
	rm -rf *.o
fclean:
	rm -rf *.o
	rm -rf $(BINARY) 
