# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoswald <aoswald@student.42kl.edu.my>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 19:08:12 by aoswald           #+#    #+#              #
#    Updated: 2024/08/15 18:54:04 by aoswald          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libftprintf.a

SRC_DIR = srcs/
INC_DIR = includes/
HEADER = -I$(INC_DIR) 

PRINTF_SRCS	= $(wildcard $(SRC_DIR)/*.c)
PRINTF_OBJS	= $(PRINTF_SRCS:$(SRC_DIR)/%.c=$(SRC_DIR)/%.o)

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror $(HEADER)

$(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

AR = ar rcs
RM = rm -f

all : $(NAME)

$(NAME): $(PRINTF_OBJS)
	@$(AR) $(NAME) $(PRINTF_OBJS)
	@echo "$(NAME) created"

clean:
	@$(RM) $(PRINTF_OBJS)
	@echo "OBJ deleted"

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(NAME) deleted"

re:		fclean all

.PHONY: all, clean, fclean, re 