# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 10:07:08 by dchavez-          #+#    #+#              #
#    Updated: 2022/04/02 21:45:41 by dchavez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
# archivos tipo c #
SOURCE = ft_memchr.c ft_memset.c ft_strlen.c ft_strrchr.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_isalpha.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
# en lo que se van a convertir de .c a .o que es output #
OBJS = ft_memchr.o ft_memset.o ft_strlen.o ft_strrchr.o ft_isascii.o ft_memcmp.o ft_strchr.o ft_strncmp.o ft_isalpha.o ft_tolower.o ft_bzero.o ft_isdigit.o ft_memcpy.o ft_strlcat.o ft_strnstr.o ft_toupper.o ft_isalnum.o ft_isprint.o ft_memmove.o ft_strlcpy.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

CC = gcc
RM = rm -f
CFLAGS = -g -Wall -Werror -Wextra
# se creara la libft.a con los headers siempre y cuando los .o tengan origen de un .c #
.o.c:
	$(CC) $(CFLAGS) -I libft.h -c $< -o ${<:.c =.o}
all:	$(NAME) 
	# This won't run if the .o files don't exist or are not modified
$(NAME): 
	$(CC) $(CFLAGS) -c $(SOURCE)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)
$(OBJS): $(SOURCE)
clean: 
		${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re bonus
