FILES = inheritanceInCpp.cpp

EXE = output

all:
	g++ -g -Wall $(FILES) -o $(EXE)

clean:
	-rm $(EXE)