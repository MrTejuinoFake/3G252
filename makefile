 

bin/programa : src/main.cpp include/Foco.hpp include/EstadoFoco.hpp
	c++ src/main.cpp -o bin/programa -I include

run : bin/programa
	./bin/programa

bin/memoria : src/memoria.cpp
	c++ src/memoria.cpp -o bin/memoria

runMemoria : bin/memoria
	./bin/memoria



bin/ejemplo : src/ejemplo.cpp
	c++ src/ejemplo.cpp -o bin/ejemplo -lftxui-screen -lftxui-dom -lftxui-component 


bin/animacion : src/animacion.cpp include/Dibujo.hpp include/Corral.hpp include/GestorDibujos.hpp
	c++ src/animacion.cpp -o bin/animacion -lftxui-screen -lftxui-dom -lftxui-component -I include

runani : bin/animacion
	./bin/animacion
