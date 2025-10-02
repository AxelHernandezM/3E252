bin/punteros: Src/punteros.cpp
	c++ Src/punteros.cpp -o bin/punteros -I include

ejecutar : bin/punteros
	./bin/punteros