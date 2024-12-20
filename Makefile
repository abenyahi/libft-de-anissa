# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenyahi <abenyahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 22:04:59 by abenyahi          #+#    #+#              #
#    Updated: 2024/11/24 20:37:26 by abenyahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque
NAME = libft.a

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Commandes
AR = ar rcs
RM = rm -f

# Sources obligatoires
SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
       	ft_strlen.c \
       	ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
       	ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
       	ft_atoi.c \
		ft_bzero.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_memmove.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_strjoin.c \

# Objets
OBJS = $(SRCS:.c=.o)

# Règles
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
