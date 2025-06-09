# NAME 
NAME = Weapon

# FLAGS
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc
RM = rm -f

# FOLDER
OBJ_DIR = obj

# SOURCES
SRCS = 	src/main.cpp \
		src/HumanA.cpp \
		src/HumanB.cpp \
		src/Weapon.cpp \

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