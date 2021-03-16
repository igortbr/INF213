all: Retangulo.o Circulo.o FigBase.o Segmento.o Teste1Aula3.o
	g++ -std=c++11 Retangulo.o Circulo.o FigBase.o Segmento.o Teste1Aula3.o -g


Retangulo.o: Retangulo.cpp Retangulo.h
	g++ -std=c++11 -c Retangulo.cpp -g

Circulo.o: Circulo.cpp Circulo.h
	g++ -std=c++11 -c  Circulo.cpp -g

FigBase.o: FigBase.cpp FigBase.h
	g++ -std=c++11 -c FigBase.cpp -g

Segmento.o: Segmento.cpp Segmento.h
	g++ -std=c++11 -c Segmento.cpp -g

TesteFiguras3.o: Teste1Aula3.cpp
	g++ -std=c++11 -c Teste1Aula3.cpp -g