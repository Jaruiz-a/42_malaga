# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaruiz-a <jaruiz-a@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 09:04:27 by jaruiz-a          #+#    #+#              #
#    Updated: 2023/05/25 09:04:27 by jaruiz-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC	=	ft_isalpha.c ft_isdigit.c ft_toupper.c \
				ft_strchr.c ft_isalnum.c ft_isascii.c \
				ft_strlcat.c ft_strlen.c ft_isprint.c \
				ft_strrchr.c ft_memcpy.c ft_memchr.c \
				ft_tolower.c ft_memset.c ft_memmove.c \
				ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
				ft_atoi.c ft_memcmp.c ft_bzero.c ft_calloc.c \
				ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_split.c ft_strtrim.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putstr_fd.c \
				ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c \

OBJT	=	$(SRC:.c=.o)

BONUS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

BONUS_OBJ	=	$(BONUS:.c=.o)

CFLAGS	=	-Wall -Werror -Wextra

all:			$(NAME)

$(NAME):
				@gcc -c $(CFLAGS) $(SRC)
				@ar rcs $(NAME) $(OBJT)

bonus:			$(OBJT) $(BONUS_OBJ)
				@ar rcs $(NAME) $(OBJT) $(BONUS_OBJ)

clean:
				@rm -f $(OBJT) $(BONUS_OBJ)

fclean: 		clean
				@rm -f $(NAME)

re: 			fclean all

.PHONY:	all,	clean,	fclean,	re