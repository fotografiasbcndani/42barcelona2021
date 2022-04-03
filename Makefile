# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dchavez- <dchavez-@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 10:07:08 by dchavez-          #+#    #+#              #
#    Updated: 2022/04/03 21:07:57 by dchavez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
# archivos tipo c #
SRCS		=	ft_atoi.c				\
				ft_bzero.c				\
				ft_calloc.c				\
				ft_isalnum.c			\
				ft_isalpha.c			\
				ft_isascii.c			\
				ft_isdigit.c			\
				ft_isprint.c			\
				ft_itoa.c				\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_memcpy.c				\
				ft_memmove.c			\
				ft_memset.c				\
				ft_putchar_fd.c			\
				ft_putendl_fd.c			\
				ft_putnbr_fd.c			\
				ft_putstr_fd.c			\
				ft_strchr.c				\
				ft_strdup.c				\
				ft_strjoin.c			\
				ft_strlcat.c			\
				ft_strlcpy.c			\
				ft_strlen.c				\
				ft_strncmp.c			\
				ft_strnstr.c			\
				ft_strrchr.c			\
				ft_strtrim.c			\
				ft_substr.c				\
				ft_tolower.c			\
				ft_toupper.c
BSRCS		=	ft_lstadd_back_bonus.c	\
				ft_lstadd_front_bonus.c	\
				ft_lstclear_bonus.c		\
				ft_lstdelone_bonus.c	\
				ft_lstiter_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstmap_bonus.c		\
				ft_lstnew_bonus.c		\
				ft_lstsize_bonus.c

CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o)
BOBJS = $(BSRCS:.c=.o)
all:	$(NAME) 

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean: 
		${RM} ${OBJS} ${BOBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus: $(NAME) $(BOBJS) $(OBJS)
	ar -rs $(NAME) $(BOBJS) $(OBJS)
	make clean

.PHONY : all clean fclean re bonus
