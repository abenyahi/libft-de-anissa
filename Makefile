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