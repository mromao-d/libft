# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/27 20:31:57 by mromao-s          #+#    #+#              #
#    Updated: 2025/11/10 19:24:16 by mromao-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

cc = cc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

SRCS = ft_strlen.c \
		ft_isdigit.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c

FILES_B = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c


OBJS=$(SRCS:.c=.o)
OBJS_B=$(FILES_B:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

run:
	@$(CC) $(CFLAGS) $(NAME) -o main
	@./main

bonus: $(OBJS_B)
	$(AR) $(NAME) $(OBJS_B)

# run_bonus:
# 	@$(CC) $(CFLAGS) $(NAME) -o main
# 	@./main

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean
