# Compiler and linker configurations
CXX = g++
CXXFLAGS = -Wall -g
LDFLAGS =

# Source files
SOURCES = main.cpp import_words.cpp print_char.cpp file_read_until.cpp select_words.cpp to_lower_case.cpp difference.cpp
HEADERS = import_words_header.h print_char_header.h file_read_until.h scoreboard.h
OBJECTS = $(SOURCES:.cpp=.o)

# Executable name
EXECUTABLE = wordle

# Default target
all: $(EXECUTABLE)

# Link the program
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

# Compile source files into objects
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

# Phony targets
.PHONY: all clean
