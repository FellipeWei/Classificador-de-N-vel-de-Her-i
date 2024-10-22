//Feito por Fellipe de Aguiar Gomes, para um Desafio da DIO.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");  // Ativa o uso de acentos
    // -------------------------------
    int experienciaXP;
    string heroi, nivel;
    bool nivelAlcancado = false; 

    cout << "DIGITE O NOME DO HEROI: ";
    cin >> heroi;

    cout << heroi << ", qual a quantidade de XP voce tem? ";
    cin >> experienciaXP;

    // Loop para verificar os n√≠veis com base na XP
    for (int i = 1; i <= 7; i++) {
        if (nivelAlcancado) {
            break;
        }

        if (experienciaXP <= 1000 && i == 1) {
            nivel = "Ferro"; 
            nivelAlcancado = true;
            
        } else if (experienciaXP <= 2000 && i == 2) {
            nivel = "Bronze";
            nivelAlcancado = true; 
            
        } else if (experienciaXP <= 5000 && i == 3) {
            nivel = "Prata";  
            nivelAlcancado = true; 
            
        } else if (experienciaXP <= 7000 && i == 4) {
            nivel = "Ouro";   
            nivelAlcancado = true; 
            
        } else if (experienciaXP <= 8000 && i == 5) {
            nivel = "Platina"; 
            nivelAlcancado = true; 
            
        } else if (experienciaXP <= 9000 && i == 6) {
            nivel = "Ascendente"; 
            nivelAlcancado = true; 
            
        } else if (experienciaXP > 10000 && i == 7) {
            nivel = "Radiante"; 
            nivelAlcancado = true;
        }
    }

    cout << "O nivel de " << heroi << " È de: " << nivel << "/n";
    system("pause");
    return 0;
}


