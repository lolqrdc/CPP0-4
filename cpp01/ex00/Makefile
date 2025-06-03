# NAME 
NAME = BraiiiiiiinnnzzzZ

# FLAGS
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc
RM = rm -f

# FOLDER
OBJ_DIR = obj

# SOURCES
SRCS = src/Zombie.cpp \
		src/main.cpp \
		src/newZombie.cpp \
		src/randomChump.cpp \

OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# RULES
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Linking $(NAME)..."
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Compilation terminée."

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re