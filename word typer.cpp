#include<iostream>
#include<string>
#include<algorithm>

//useful defines
#define PROGRAM_CODE_OK 0
#define PROGRAM_CODE_BAD 1
typedef int PROGRAM_RESULT;
typedef char** CHR_STR_ARR;
typedef const char* CHR_STR_CONST;

PROGRAM_RESULT main(int argc, CHR_STR_ARR argv)
{	
	std::cout 
		<< "Capture las palabras a continuación..." 
		<< "\n";
	CHR_STR_CONST palabras[22];
	palabras[0] = "virgen";
	palabras[1] = "oso oso";
	palabras[2] = "hormiguero";
	palabras[3] = "cachorro";
	palabras[4] = "violonchelo";
	palabras[5] = "locomotora";
	palabras[6] = "conflicto";
	palabras[7] = "cinco";
	palabras[8] = "objetivo";
	palabras[9] = "embalar";
	palabras[10] = "polilla";
	palabras[11] = "lanzaminas";
	palabras[12] = "boicot";
	palabras[13] = "algoritmia";
	palabras[14] = "esmaltar";
	palabras[15] = "aeaeaeae";
	palabras[16] = "cncncncn";
	palabras[17] = "shshshsh";
	palabras[18] = "asdfg hjkl;";
	palabras[19] = ";lkjh gfdsa";
	palabras[20] = "a; sl dk fj gh";
	palabras[21] = "ghfjdksla;";
	palabras[22] = "cvdashlten";
	palabras[23] = "Mucha gente no goza de las pequenias dulzuras.";
	palabras[24] = "Dios se halla tan cerca como nosotros queramos.";
	palabras[25] = "Donde hay risa, entra la brisa.";
	
	std::random_shuffle(
		std::begin(palabras),
		std::end(palabras)
	);
	
	for(auto palab : palabras)
	{
		std::string captr = "";
		do
		{
			std::cout << palab << "\n";
			std::getline(std::cin, captr);
		}
		while(captr != palab);
	}
	
	std::cout << "Fin del programa" << "\n";
	getchar();
	return PROGRAM_CODE_OK;
}
