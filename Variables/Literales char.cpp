#include <iostream>
#include "Headers/Traduccion.hpp"

using namespace std;

int main()
{
	// valor 19 en decimal, octal y hexadecimal.
	char literalesCaracteres[3][3] = {'A', '\u02C0', 'C'};
	for (int i = 0; i < 3; i++)
		MOSTRAR "Valor: " UNIR literalesCaracteres[i] TERMINAR_LINEA;
	return 0;
}
