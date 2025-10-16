# === Variables ===
EXEC_PROGRAM1 = fibonacci
EXEC_PROGRAM2 = capteurs
EXEC_PROGRAM3 = erathostene
EXEC_PROGRAM4 = PGCD
EXEC_PROGRAM5 = structure
EXEC_PROGRAM6 = repertoire




# === Règles ===

all: $(EXEC_PROGRAM1) $(EXEC_PROGRAM2) $(EXEC_PROGRAM3) $(EXEC_PROGRAM4) $(EXEC_PROGRAM5) $(EXEC_PROGRAM6)

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

# Compilation de erathostene
$(EXEC_PROGRAM3): erathostene.o
	g++ -o $(EXEC_PROGRAM3) erathostene.o

erathostene.o: erathostene.cpp
	g++ -I./include -c erathostene.cpp

# Compilation de PGCD
$(EXEC_PROGRAM4): PGCD.o
	g++ -o $(EXEC_PROGRAM4) PGCD.o

PGCD.o: PGCD.cpp
	g++ -I./include -c PGCD.cpp

# Compilation de structure
$(EXEC_PROGRAM5): structure.o
	g++ -o $(EXEC_PROGRAM5) structure.o

structure.o: structure.cpp
	g++ -I./include -c structure.cpp

# Compilation de repertoire
$(EXEC_PROGRAM6): repertoire.o
	g++ -o $(EXEC_PROGRAM6) repertoire.o

repertoire.o: repertoire.cpp
	g++ -I./include -c repertoire.cpp


	
# Nettoyage
clean:
	rm -f *.o $(EXEC_PROGRAM1) $(EXEC_PROGRAM2) $(EXEC_PROGRAM3) $(EXEC_PROGRAM4) $(EXEC_PROGRAM5) $(EXEC_PROGRAM6)

.PHONY: all clean
