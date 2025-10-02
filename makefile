bin/punteros: Src/punteros.cpp
	c++ Src/punteros.cpp -o bin/punteros -I include

ejecutar : bin/punteros
	./bin/punteros

assets/musica.mp3: assets/musica.wav
ffmeg -i assets/musica.wav -b:a 192k Heroic Demise (New).mp3