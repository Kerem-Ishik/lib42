LIB = lib42.a
COMPILER = gcc
FLAGS = -Wall -Wextra -Werror
COMPILE = $(COMPILER) $(FLAGS) -c

CLEAN = rm -rf

MKDIR = mkdir -p

OBJ_DIR = obj/
SRC_DIR = src/


#SRC_FILES =		char/is_alpha.c	\
#				char/is_lower.c	\
#				char/is_upper.c	\
#				str/str_len.c		
#OBJ = $(addprefix $(OBJ_DIR),$(SRC_FILES:%.c=%.o))

SRC_FILES = $(shell find $(SRC_DIR) -type f -name "*.c")
OBJ = $(addprefix $(OBJ_DIR),$(patsubst $(SRC_DIR)%,%,$(SRC_FILES:%.c=%.o)))

all: $(LIB)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(MKDIR) $(dir $@)
	@$(COMPILE) $< -o $@

$(LIB): $(OBJ)
	@ar rc $(LIB) $(OBJ)

clean:
	@ $(CLEAN) $(OBJ_DIR)

fclean: clean
	@ $(CLEAN) $(LIB)

re:	fclean all


.PHONY: all clean fclean