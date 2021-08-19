###################################################################################
#
#
#
#
#
#
###################################################################################

include sources.mk

TARGET = ProgrammingAssignment3
OBJS = $(SOURCES:.cpp=.o)
GFLAGS = -Wall -Werror -g -O0
DEPS = $(SOURCES:.cpp=.d)
CPPFLAGS = -E

CC = g++
SIZE = size
OBJDUMP = objdump
LD=ld
LDFLAGS = -L ./ConsoleCards.lib -Wl,-Map=$(TARGET).map 

%.o : %.cpp
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib -c $< $(GFLAGS) -o $@
%.i : %.cpp
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib -c $(CPPFLAGS)  $< $(GFLAGS) -o $@
%.asm : %.cpp
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib -S $< $(GFLAGS) -o $@
%.d : %.cpp
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib -M $< $(GFLAGS) -o $@

.PHONY: all
build: all
.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib $(OBJS) $(GFLAGS) -o $@.out

.PHONY: compile-all
compile-all: $(OBJS)
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib $(OBJS) -c $(GFLAGS) -o $(TARGET).out

.PHONY: build
build: $(OBJS) $(DEPS)
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib $(OBJS) $(GFLAGS) -o $(TARGET).out
	$(SIZE) -Atd $(TARGET).out
	$(SIZE) $(TARGET).out
.PHONY: debug
debug: $(OBJS) $(DEPS)
	$(CC) $(INCLUDES) -L ./ConsoleCards.lib $(OBJS) -ggdb -o $(TARGET).out
	$(SIZE) -Atd $(TARGET).out
	$(SIZE) $(TARGET).out

.PHONY: clean
clean:
	rm -f *.o *.i *.map *.out *.asm *.d
