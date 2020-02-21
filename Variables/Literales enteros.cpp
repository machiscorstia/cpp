#include <iostream>
#include "Headers/Traduccion.hpp"

using namespace std;

int main()
{
	// valor 19 en decimal, octal y hexadecimal.
	int literalesEnteras[3] = {19, 023, 0x13};
	for (int i = 0; i < 3; ++i)
		MOSTRAR "Valor: " UNIR literalesEnteras[i] TERMINAR_LINEA;
	return 0;
}
