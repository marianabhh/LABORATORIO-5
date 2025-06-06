Este proyecto genera un archivo JSON con datos personales usando la biblioteca cJSON, y se puede compilar con Make, CMake y Meson. 
Para instalar la biblioteca, se debe ejecutar `sudo apt update` y luego `sudo apt install libcjson-dev`. 
Para compilar con Make se usa el comando `make` y se ejecuta con `./json_make`. 
Para CMake se crea una carpeta `build`, se entra con `cd build`, luego se corre `cmake ..`, `make` y se ejecuta con `./json_cmake`. 
Con Meson se corre `meson setup build`, luego `ninja -C build` y se ejecuta con `./build/json_meson`. 
Para verificar que no haya fugas de memoria se puede usar `valgrind ./json_make` (o el equivalente de cada método). El proyecto incluye los archivos `main.c`, `json.c`, `json.h`, los archivos de construcción para cada método, y el archivo `output.json` generado.