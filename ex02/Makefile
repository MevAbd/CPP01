SRC =	main.cpp \

OBJ = $(patsubst %.cpp,$(OBJ_DIR)%.o,${SRC})
OBJ_DIR	= objs/

VPATH	= $(SRC)

FLAGS = -Wall -Werror -Wextra -std=c++98 -g

$(OBJ_DIR)%.o	: %.cpp
				mkdir -p $(OBJ_DIR)
				c++ $(FLAGS) -c $< -o $@

NAME =  HIS_THIS_BRAIN

all = $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all
