# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Targets
TARGET = megaphone
SRC = megaphone.cpp

# Default target
all: $(TARGET)

# Rule for building the executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean target to remove the generated executable
clean:
	rm -f $(TARGET)

# Full clean target (future-proof for object files, logs, etc.)
fclean: clean

# Rebuild target
re: fclean all

# Phony targets
.PHONY: all clean fclean re

