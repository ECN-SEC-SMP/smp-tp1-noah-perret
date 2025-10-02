# === Variables ===
EXEC_PROGRAM1 = fibonacci
EXEC_PROGRAM2 = capteurs


# === Règles ===

all: $(EXEC_PROGRAM1) $(EXEC_PROGRAM2)

# Compilation de fibonacci
$(EXEC_PROGRAM1): fibonacci.o
	g++ -o $(EXEC_PROGRAM1) fibonacci.o

fibonacci.o: fibonacci.cpp
	g++ -I./include -c fibonacci.cpp

# Compilation de capteurs
$(EXEC_PROGRAM2): capteurs.o
	g++ -o $(EXEC_PROGRAM2) capteurs.o

capteurs.o: capteurs.cpp
	g++ -I./include -c capteurs.cpp

# Nettoyage
clean:
	rm -f *.o $(EXEC_PROGRAM1) $(EXEC_PROGRAM2)

.PHONY: all clean
