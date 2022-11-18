# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpinchas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 19:53:14 by rpinchas          #+#    #+#              #
#    Updated: 2022/11/18 13:18:25 by rpinchas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Make Variables:
NAME := libftprintf.a
SRC := ft_printf.c\
	ft_printf_utils.c
HEAD := ft_printf.h
OBJ := $(SRC:.c=.o)
CFLAG := -Wall -Werror -Wextra
RM := rm -f

#Processes: 
all: $(NAME)

$(NAME): $(OBJ) 
	@$(CC) -c $(HEAD) $(SRC)
	@ar -rcs $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

test: all
	@echo Preforming test with own mainfile... 
	@echo
	@$(CC) -c -w testmain.c
	@$(CC) testmain.o $(NAME)
	@./a.out | cat -e
	@$(MAKE) clean 
	@$(RM) testmain.o a.out

shittinette:
	@norminette

.PHONY: all clean fclean re test shittinette
