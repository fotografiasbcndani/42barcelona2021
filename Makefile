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
				ft_split.c				\
				ft_strchr.c				\
				ft_strdup.c				\
				ft_striteri.c				\
				fT_strjoin.c			\
				ft_strlcat.c			\
				ft_strlcpy.c			\
				ft_strlen.c				\
				ft_strmapi.c			\
				ft_strncmp.c			\
				ft_strnstr.c			\
				ft_strrchr.c			\
				ft_strtrim.c			\
				ft_substr.c				\
				ft_tolower.c			\
				ft_toupper.c
OBJS		=	ft_atoi.o				\
				ft_bzero.o				\
				ft_calloc.o				\
				ft_isalnum.o			\
				ft_isalpha.o			\
				ft_isascii.o			\
				ft_isdigit.o			\
				ft_isprint.o			\
				ft_itoa.o				\
				ft_memchr.o				\
				ft_memcmp.o				\
				ft_memcpy.o				\
				ft_memmove.o			\
				ft_memset.o				\
				ft_putchar_fd.o			\
				ft_putendl_fd.o			\
				ft_putnbr_fd.o			\
				ft_putstr_fd.o			\
				ft_split.o				\
				ft_strchr.o				\
				ft_strdup.o				\
				ft_striteri.o			\
				ft_strjoin.o			\
				ft_strlcat.o			\
				ft_strlcpy.o			\
				ft_strlen.o				\
				ft_strmapi.o			\
				ft_strncmp.o			\
				ft_strnstr.o			\
				ft_strrchr.o			\
				ft_strtrim.o			\
				ft_substr.o				\
				ft_tolower.o			\
				ft_toupper.o
BSRCS		=	ft_lstadd_back_bonus.c	\
				ft_lstadd_bonus.c		\
				ft_lstclear_bonus.c		\
				ft_lstdelone_bonus.c	\
				ft_lstiter_bonus.c		\
				ft_lstlast_bonus.c		\
				ft_lstmap_bonus.c		\
				ft_lstnew_bonus.c		\
				ft_lstsize_bonus.c
BOBJS		=	ft_lstadd_back_bonus.o	\
				ft_lstadd_bonus.o		\
				ft_lstclear_bonus.o		\
				ft_lstdelone_bonus.o	\
				ft_lstiter_bonus.o		\
				ft_lstlast_bonus.o		\
				ft_lstmap_bonus.o		\
				ft_lstnew_bonus.o		\
				ft_lstsize_bonus.o

CC = gcc
RM = rm -f
CFLAGS = -g -Wall -Werror -Wextra
# se creara la libft.a con los headers siempre y cuando los .o tengan origen de un .c #
.o.c:
	$(CC) $(CFLAGS) -I libft.h -c $< -o ${<:.c =.o}
all:	$(NAME) 
	# This won't run if the .o files don't exist or are not modified
$(NAME): 
	$(CC) $(CFLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)
$(OBJS): $(SOURCE)
clean: 
		${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

bonus: $(NAME) $(BOBJS)
	$(CC) -c $(CFLAGS) $(BOBJS)
	ar -rs $(NAME) $(BOBJS)
	make clean


.PHONY : all clean fclean re bonus
