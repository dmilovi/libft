# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmilovid <dmilovid@student.42warsaw.p      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 17:09:07 by dmilovid          #+#    #+#              #
#    Updated: 2024/03/16 17:13:17 by dmilovid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=   libft.a
SRC	=	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c 


# The flags to compile the c files with			
CFLAGS	= -Wall -Wextra -Werror

# The object files for mandatory part.
OBJM	= $(SRC:.c=.o)

# Variables
CC		= gcc
RM		= rm -f

#rule for c and o files 
%.o : %.c
	${CC} ${CFLAGS} -g -c $< -o $@

#compiles the mandatory part of the library.
${NAME}: ${OBJM}
	ar rcs ${NAME} ${OBJM}
	
all: ${NAME}

#cleaning file 
clean:
	${RM} ${OBJM} ${OBJB}
#forceclean including the name
fclean:	clean
	${RM} ${NAME}

#Recompiling everything
re:	fclean all
