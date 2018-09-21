main.o:	Main.o Bomba.o Escenario.o Espina.o Item.o Normal.o Obstaculos.o
	g++ Main.o Bomba.o Escenario.o Espina.o Item.o Normal.o Obstaculos.o -o main
	rm *.o

Escenario.o:	Item.h Escenario.cpp Obstaculos.cpp 
	g++ -c Escenario.cpp

Espina.o:	Espina.h Espina.o 
	g++ -c Espina.cpp

Normal.o:	Normal.h 
	g++ -c Normal.cpp

Obstaculos.o:	Obstaculos.h 
	g++ -c Obstaculos.cpp

Bomba.o:	Bomba.h Bomba.cpp Item.h
	g++ -c Bomba.cpp

Item.o:	Item.h Item.cpp
	g++ -c Item.cpp