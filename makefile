FILES = inheritanceInCpp.cpp Polygon.cpp Retangulo.cpp Triangulo.cpp Circulo.cpp
EXE = output

all:
	g++ $(FILES) -o $(EXE)

clean:
	rm -f $(EXE)
