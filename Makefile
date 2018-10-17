# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alicia <alicia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/17 16:36:02 by alicia            #+#    #+#              #
#    Updated: 2018/10/17 17:36:00 by alicia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INC_DIR = includes
OBJ_DIR = obj
SRC_DIR = src

FCT_DIR = fonctions

FLAGS = -Wall -Werror -Wextra -Wvla
INC = $(INC_DIR:%=-I ./%)
CC = clang $(FLAGS) $(INC)

FCT = ft_atoi \
	   ft_bzero \
	   ft_memcpy \
	   ft_memset \
	   ft_putchar \
	   ft_putnbr \
	   ft_putstr \
	   ft_strcmp \
	   ft_strcpy \
	   ft_strdup \
	   ft_strlen \
	   ft_strncpy \
	   ft_memccpy \
	   ft_memmove \
	   ft_memchr \
	   ft_memcmp \
	   ft_strcat \
	   ft_strncat \
	   ft_strchr \
	   ft_strrchr \
	   ft_strstr \
	   ft_strnstr \
	   ft_strncmp \
	   ft_isalpha \
	   ft_isdigit \
	   ft_isascii \
	   ft_isalnum \
	   ft_isprint \
	   ft_toupper \
	   ft_tolower \
	   ft_memalloc \
	   ft_memdel \
	   ft_strnew \
	   ft_strdel \
	   ft_strclr \
	   ft_striter \
	   ft_striteri \
	   ft_strmap \
	   ft_strmapi \
	   ft_strequ \
	   ft_strnequ \
	   ft_strsub \
	   ft_strjoin \
	   ft_strtrim \
	   ft_strsplit \
	   ft_itoa \
	   ft_putendl \
	   ft_putchar_fd \
	   ft_putstr_fd \
	   ft_putendl_fd \
	   ft_putnbr_fd \
	   ft_countword \
	   ft_strlcat \
	   ft_lstnew \
	   ft_lstdelone \
	   ft_lstdel \
	   ft_lstadd \
	   ft_lstiter \
	   ft_lstmap \
	   ft_sqrt \
	   ft_createtab \
	   ft_swap \
	   ft_strndup

SRC = $(FCT:%=$(SRC_DIR)/$(FCT_DIR)/%.c)

OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

OBJ_DIRS = $(FCT_DIR:%=$(OBJ_DIR)/%)

all : $(NAME)

$(OBJ_DIRS):
	@mkdir -p $@

$(SRC):

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) -c $< -o $@


$(NAME): $(OBJ_DIRS) $(SRC)
	@$(MAKE) $(OBJ)
	ar rcs $@ $(OBJ)
	# ranlib $(NAME)

# %.o: %.c
	# gcc $(FLAGS) -c $<

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

norme:
	@norminette $(SRC) $(INC_DIR)/

.PHONY : all clean fclean re norme
