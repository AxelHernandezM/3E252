bin/punteros: Src/punteros.cpp
	c++ Src/punteros.cpp -o bin/punteros -I include

ejecutar : bin/punteros
	./bin/punteros

ejemplo : bin/ejemplo
	./bin/ejemplo

cmp : Src/ejemplo.cpp
	c++ Src/ejemplo.cpp -o bin/ejemplo -std=c++17 \
    -I include \
    -I /workspaces/3E252/ftxui/include \
    -L /workspaces/3E252/ftxui/build/src \
    -lftxui-component -lftxui-dom -lftxui-screen
assets/musica.mp3: assets/musica.wav
ffmeg -i assets/musica.wav -b:a 192k Heroic Demise (New).mp3