#pragma once
#include "pch.h"
#include "iostream"
#include "conio.h"
#include "windows.h"
#include "MMSystem.h"
#include "funcionesUtiles.h"
#include "sprites.h"
#include "string.h"

using namespace System;
using namespace std;
int largo = 120, ancho = 35, moneda = 30, vidas = 3; string nombre;
int px = 5, py = 14, pc = 7;
int juego = 0;

void logo() {
    color(4); dibujarmarco(largo, ancho, 4);
    int ejeX = 10, ejeY = 5, vl = 100, nvy = 10, xx = 50;
    PlaySound(TEXT("pop.wav"), NULL, SND_ASYNC);
    Sleep(500);
    gotoxy(ejeX, ejeY + 1); cout << "            .   :*       :                                                                       ";Sleep(vl);
    gotoxy(ejeX, ejeY + 2); cout << "         :=*%  :*%#      #*=                                                                        ";Sleep(vl);
    gotoxy(ejeX, ejeY + 3); cout << "       -*#@#  +**%        #%**                                                                      ";Sleep(vl);
    gotoxy(ejeX, ejeY + 4); cout << "      **#@:  *****+        :%**=                                                                    ";Sleep(vl);
    gotoxy(ejeX, ejeY + 5); cout << "     ***@.  :*******:       :#***    #*******       ******# *********            **********#        ";Sleep(vl);
    gotoxy(ejeX, ejeY + 6); cout << "    ***#=   #*********       +***=   *##***##*     -##***##=#****####***:     *****#@@@@##***       ";Sleep(vl);
    gotoxy(ejeX, ejeY + 7); cout << "   +***#    #**********=     .***#:   :%**#@:       :=#*@+: *%**#@=+#@#**+  ****@@@       @#*%      ";Sleep(vl);
    gotoxy(ejeX, ejeY + 8); cout << "   ****#    -%**********=    -****#    -**#*          #*@     #*#+    =#******#@            #@      ";Sleep(vl);
    gotoxy(ejeX, ejeY + 9); cout << "   *****:    -@#********#    *****@    -**#*          **@     #*#+     +**@***@                     ";Sleep(vl);
    gotoxy(ejeX, ejeY + 10); cout << "   #****#      %%*******@   -*****@    -**#*          #*%     #*#+     **%#**#@                     ";Sleep(vl);
    gotoxy(ejeX, ejeY + 11); cout << "   #*****#      .@#****##  :*****#@    -**#*          #*%     #*#+ .:-+#@@=***                      ";Sleep(vl);
    gotoxy(ejeX, ejeY + 12); cout << "   ********=      -@#*#@: +******@+    :**#+          **%     #*#*+#@@@@=  ***+                     ";Sleep(vl);
    gotoxy(ejeX, ejeY + 13); cout << "   .@********+:     ##@#+*******@@     :**##          *##     #*#+         #***                     ";Sleep(vl);
    gotoxy(ejeX, ejeY + 14); cout << "    -@#************************@@.     .#**#         -*@+     #*#+         @#***            **      ";Sleep(vl);
    gotoxy(ejeX, ejeY + 15); cout << "    :@#*********************#@@        ##**+      .=*%@.     ***+          @%*****       ***@       ";Sleep(vl);
    gotoxy(ejeX, ejeY + 16); cout << "       +@##***************##@@=          @@###++++++#@@:    =+***#=.          @%#**********#%@      ";Sleep(vl);
    gotoxy(ejeX, ejeY + 17); cout << "         +@@@###******##%@@@=             :@@@@@@@@@@=     =@@@@@@@@#            @@@@@@@@@@@@       ";Sleep(vl);
    gotoxy(ejeX, ejeY + 18); cout << "           :@@@@@@@@@@@%.                                                                           ";Sleep(vl);
    Sleep(2000);
    system("cls");
    color(7); dibujarmarco(largo, ancho, 7);
    gotoxy(xx, nvy);     cout << "   Presentado por:";
    gotoxy(xx, nvy + 2); cout << "Alejandro Diaz Ramirez";
    gotoxy(xx, nvy + 4); cout << "  Tiago Arce Buendia";
    gotoxy(xx, nvy + 6); cout << " Kevin  Geronimo Puma";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7); //blanco
    system("cls");

}

void principio() {
PlaySound(TEXT("carga.wav"), NULL, SND_ASYNC | SND_LOOP);
    int c = 8, ejeX = 0; int ejeY = 5, vl = 100;  dibujarmarco(largo, ancho, 8);
    color(c);gotoxy(ejeX, ejeY + 1);cout <<  " .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. ";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 2);cout <<  "| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 3);cout <<  "| |  _________   | || |  _______     | || |      __      | || |  _________   | || |     _____    | || |  ____  ____  | |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 4);cout <<  "| | |  _   _  |  | || | |_   __ `    | || |     /  `     | || | |_   ___  |  | || |    |_   _|   | || | |_  _||_  _| | |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 5);cout <<  "| | |_/ | | `_|  | || |   | |__) |   | || |    / /` `    | || |   | |_  `_|  | || |      | |     | || |   ` `  / /   | |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 6);cout <<  "| |     | |      | || |   |  __ /    | || |   / ____ `   | || |   |  _|      | || |      | |     | || |    > `' <    | |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 7);cout <<  "| |    _| |_     | || |  _| |  ` `_  | || | _/ /    ` `_ | || |  _| |_       | || |     _| |_    | || |  _/ /'`` `_  | |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 8);cout <<  "| |   |_____|    | || | |____| |___| | || ||____|  |____|| || | |_____|      | || |    |_____|   | || | |____||____| | |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 9);cout <<  "| |              | || |              | || |              | || |              | || |              | || |              | |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 10);cout << "| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |";Sleep(vl);
    color(c);gotoxy(ejeX, ejeY + 11);cout << " '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' ";Sleep(vl);
    
    for (int barra = 25, j = 29; barra <= 96; barra++){
    gotoxy(barra, 20);
    cout << static_cast<char>(176);
    Sleep(50);
    gotoxy(100, 20); cout << j << "%";
    j++;
    Sleep(50);
    } 

    gotoxy(0, 20); cout << "                                                                                                                      ";

    do {
        gotoxy(45, 20); cout << "Presione cualquier tecla para jugar!"; Sleep(500);
        gotoxy(45, 20); cout << "                                    "; Sleep(500);
    } while (!_kbhit());

    _getch();
    
    
    
    system("cls"); 

}

int instrucciones() {
    char opcion;
    int x = 20, y = 6;

    do {
        system("cls");
        dibujarmarco(largo, ancho, 8);
        gotoxy(50, y); cout << "T    R    A    F    I    X";
        gotoxy(x, y + 3); cout << "Instrucciones del juego:";
        gotoxy(x, y + 5); cout << "1. Desplazate por el mapa con las teclas [a], [s], [d], [w]";
        gotoxy(x, y + 7); cout << "2. Busca los objetivos en cada nivel, activalos acercandote";
        gotoxy(x, y + 9); cout << "3. Completa el minijuego por cada objetivo y pasa a la siguiente zona";
        gotoxy(x, y + 11); cout << "Presiona [1] para jugar o [2] para volver al menu";

        opcion = _getch();

        switch (opcion) {
        case '1':
            system("cls");
            return 0; 
        case '2':
            system("cls");
            return 1;  
        default:
            system("cls");
            dibujarmarco(largo, ancho, 8);
            gotoxy(43, 14); cout << "Opcion no valida. Intente de nuevo";
            Sleep(750);
            break;
        }
    } while (true);  
}

void menu() {
    char opcion; int resultado = 0;
   PlaySound(TEXT("menu_cancion.wav"), NULL, SND_ASYNC | SND_LOOP);

    do {
        system("cls");
        dibujarmarco(largo, ancho, 8);

        int ejeX = 10, ejeXX = 24, ejeXXX = 37, ejeY = 2, ejeYY = 10, ejeYYY = 18;
        gotoxy(ejeX, ejeY + 1); cout << " ______ ____";
        gotoxy(ejeX, ejeY + 2); cout << "|      |    `";
        gotoxy(ejeX, ejeY + 3); cout << "|      |  D  )";
        gotoxy(ejeX, ejeY + 4); cout << "|_|  |_|    /";
        gotoxy(ejeX, ejeY + 5); cout << "  |  | |    `";
        gotoxy(ejeX, ejeY + 6); cout << "  |  | |  .  `";
        gotoxy(ejeX, ejeY + 7); cout << "  |__| |__|` _|";

        gotoxy(ejeXX, ejeYY + 1); cout << "  ____ _____";
        gotoxy(ejeXX, ejeYY + 2); cout << " /    |     |";
        gotoxy(ejeXX, ejeYY + 3); cout << "|  o  |   __|";
        gotoxy(ejeXX, ejeYY + 4); cout << "|     |  |_  ";
        gotoxy(ejeXX, ejeYY + 5); cout << "|  _  |   _] ";
        gotoxy(ejeXX, ejeYY + 6); cout << "|  |  |  |   ";
        gotoxy(ejeXX, ejeYY + 7); cout << "|__|__|__|   ";

        gotoxy(ejeXXX, ejeYYY + 1); cout << " ____ __ __ ";
        gotoxy(ejeXXX, ejeYYY + 2); cout << "|    |  |  | ";
        gotoxy(ejeXXX, ejeYYY + 3); cout << " |  ||  |  |";
        gotoxy(ejeXXX, ejeYYY + 4); cout << " |  ||_   _| ";
        gotoxy(ejeXXX, ejeYYY + 5); cout << " |  ||     | ";
        gotoxy(ejeXXX, ejeYYY + 6); cout << " |  ||  |  | ";
        gotoxy(ejeXXX, ejeYYY + 7); cout << "|____|__|__|";

        gotoxy(ejeXXX + 35, ejeY + 8); cout << "[ O  P  C  I  O  N  E  S ]"; Sleep(300);
        gotoxy(ejeXXX + 41, ejeY + 11); cout << "J u g a r  [1]";
        gotoxy(ejeXXX + 33, ejeY + 13); cout << "I n s t r u c c i o n e s  [2]";
        gotoxy(ejeXXX + 41, ejeY + 15); cout << "S a l i r  [3]";
        opcion = _getch();

        switch (opcion) {
        case '1':
            return; 
        case '2':
            resultado = instrucciones();
            if (resultado == 0) { return;} break; 
            
        case '3':
            exit(0); 
        default:
            system("cls");
            dibujarmarco(largo, ancho, 8);
            gotoxy(43, 14); cout << "Opcion no valida. Intente de nuevo.";
            Sleep(750);
            break;
        }
    } while (opcion != '1' && opcion != '3');
}

void userName(){
    dibujarmarco(largo, ancho, 8); system("cls");
    gotoxy(39, 10); cout << "I  n  g  r  e  s  a    t  u    n  o  m  b  r  e";
    gotoxy(50, 12); cin >> nombre;

}

void estadisticas() {
    int x = 8, y = 1;
    gotoxy(x, y); cout << "J U G A D O R: " << nombre;
    gotoxy(x, y + 1); cout << "V I D A S: " << vidas;
    gotoxy(x + 80, y + 1); cout << "M O N E D A S: " << moneda;

}

struct Limite {
    int x_min;
    int x_max;
    int y_min;
    int y_max;
};

void personaje() {
    color(pc); gotoxy(px, py);     cout << " O";
    color(pc); gotoxy(px, py + 1); cout << "/|\\";
    color(pc); gotoxy(px, py + 2); cout << "/ \\";

}
void borrarPersonaje() {
    gotoxy(px, py);     cout << "   ";
    gotoxy(px, py + 1); cout << "   ";
    gotoxy(px, py + 2); cout << "   ";
}

bool tienda() {
    PlaySound(TEXT("Cancion_Tienda.wav"), NULL, SND_ASYNC | SND_LOOP);
    system("cls");
    color(8);
    for (int i = 0; i < 6; i++){
        switch(i){
        case 0:
            gotoxy(50, 10); cout << "C A R G A N D O . . ."; gotoxy(45, 20); cout << "Compra colores para tu personaje"; Sleep(800); system("cls"); break;
        case 1:
            gotoxy(50, 10); cout << "C A R G A N D O . . ."; gotoxy(40, 20); cout << "Sobre el mercader, nadie conoce su identidad"; Sleep(800); system("cls"); break;
        case 2:
            gotoxy(50, 10); cout << "C A R G A N D O . . ."; gotoxy(42, 20); cout << "Consigue monedas superando niveles"; Sleep(800); system("cls"); break;
        case 3:
            gotoxy(50, 10); cout << "C A R G A N D O . . ."; gotoxy(42, 20); cout << "monedas, monedas, monedas, monedas"; Sleep(800); system("cls"); break;
        case 4:
            gotoxy(50, 10); cout << "C A R G A N D O . . ."; gotoxy(39, 20); cout << "El mercader no conoce la palabra enemigo"; Sleep(800); system("cls"); break;
        case 5:
            gotoxy(50, 10); cout << "C A R G A N D O . . ."; gotoxy(55, 20); cout << "kevin?????"; Sleep(300); system("cls"); break;
        }
    
    }
    system("cls");
    
    dibujarmarco(largo, ancho, 8); estadisticas();
    int x = 20, y = 8, xX = 80;
    // Esperar a que se presione espacio para regresar
    while (true) {
        gotoxy(45, 5); cout << "T I E N D A   O F I C I A L";
        gotoxy(x, y);      cout << "     ___________      ";
        gotoxy(x, y + 1);  cout << "    |           |     ";
        gotoxy(x, y + 2);  cout << "    |           |     ";
        gotoxy(x, y + 3);  cout << "     \\_________/      ";
        gotoxy(x, y + 4);  cout << "     /|       |\\   ";
        gotoxy(x, y + 5);  cout << "    / |       | \\  ";
        gotoxy(x, y + 6);  cout << "    \\ |       | /   ";
        gotoxy(x, y + 7);  cout << " ____________________";
        gotoxy(x, y + 8);  cout << "|                    |";
        gotoxy(x, y + 9);  cout << "| E l                |";
        gotoxy(x, y + 10); cout << "|    m e r c a d e r |";
        gotoxy(x, y + 11); cout << "|                    |";
        gotoxy(x, y + 12); cout << " --------------------";

        gotoxy(x, y + 15); cout << " Presiona 7 para salir";


        gotoxy(xX + 3, y);  cout << " Precio de colores: $30";
        color(1); gotoxy(xX, y + 2);  cout << " CAMBIAR A ESTE COLOR [ 1 ] ";
        color(2); gotoxy(xX, y +4);   cout << " CAMBIAR A ESTE COLOR [ 2 ] ";
        color(5); gotoxy(xX, y +  6); cout << " CAMBIAR A ESTE COLOR [ 3 ] ";
        color(6); gotoxy(xX, y +  8); cout << " CAMBIAR A ESTE COLOR [ 4 ] ";
        color(15); gotoxy(xX, y + 10);cout << " CAMBIAR A ESTE COLOR [ 5 ] ";
        color(8); gotoxy(xX, y + 12); cout << " CAMBIAR A ESTE COLOR [ 6 ] ";
        
        if (_kbhit()) {
            int tecla = _getch();

            // Cambiar color según la tecla presionada
            switch (tecla) {
            case '1':
                if (moneda >= 30) { pc = 1; moneda -= 30; estadisticas();
                }
                break;
            case '2':
                if (moneda >= 30) { pc = 2; moneda -= 30; estadisticas();
                }
                break;
            case '3':
                if (moneda >= 30) { pc = 5; moneda -= 30; estadisticas();
                }
                break;
            case '4':
                if (moneda >= 30) { pc = 6; moneda -= 30; estadisticas();
                }
                break;
            case '5':
                if (moneda >= 30) { pc = 15; moneda -= 30; estadisticas();
                }
                break;
            case '6':
                if (moneda >= 30) { pc = 8; moneda -= 30; estadisticas();
                }
                break;
            case '7':
                color(7);// Tecla para salir
                return true;
            }
        }
    }
}

void verificarVida() {
    if (vidas <= 0) {
        system("cls");
        gotoxy(30, 10); cout << "¡Game Over!";
        gotoxy(30, 12); cout << "Presiona cualquier tecla para volver al menu...";
        _getch();  // Espera a que se presione una tecla
        menu();    // Regresa al menú
    }
}


// Sprites

struct Sprite {
    void semaforoto(int x2, int y2) {
        color(8);
        color(4); gotoxy(x2 + 2, y2 + 2); cout << " semaforo roto";
        color(4); gotoxy(x2 + 2, y2 + 3); cout << " ______";
        color(4); gotoxy(x2 + 2, y2 + 4); cout << "|  __  |";
        color(4); gotoxy(x2 + 2, y2 + 5); cout << "| |__| |";
        color(4); gotoxy(x2 + 2, y2 + 6); cout << "|  __  |";
        color(4); gotoxy(x2 + 2, y2 + 7); cout << "| |__| |";
        color(4); gotoxy(x2 + 2, y2 + 8); cout << "|  __  |";
        color(4); gotoxy(x2 + 2, y2 + 9); cout << "| |__| |";
        color(4); gotoxy(x2 + 2, y2 + 10); cout << " ------";
        color(4); gotoxy(x2 + 2, y2 + 11); cout << "  |  |";
        color(4); gotoxy(x2 + 2, y2 + 12); cout << " ------";

        color(8);
    }
};
Sprite sprite;

// Minijuegos

struct Minijuego1 {
    void suma(int ronda, bool boost) {
        int x = 20, y = 8, xX = 80, x2 = 80, y2 = 13;

        int tiempoLimite = 0;
        int num1 = 0;
        int num2 = 0;

        bool opcionCorrecta;

        if (boost == true) tiempoLimite = 10;
        else tiempoLimite = 15;

        switch (ronda) {
        case 1:
            num1 = rand() % 150 + 100;
            num2 = rand() % 540 + 100;
            break;

        case 2:
            num1 = rand() % 550 + 297;
            num2 = rand() % 840 + 333;
            break;

        default:
            num1 = rand() % 5678 + 899;
            num2 = rand() % 8888 + 999;
        }

        do {
            int x = 20, y = 8, xX = 80, x2 = 80, y2 = 13;
            int respuestaCorrecta = num1 + num2;
            opcionCorrecta = false;

            gotoxy(x - 8, y + 4); cout << "Resuelve la siguiente suma:";
            color(2); gotoxy(x + 25, y + 4); cout << num1 << " + " << num2 << " = ?\n";

            int apoyo = rand() % 3 + 1, val1 = num1 + num2 + rand() % 7 + 1, val2 = num1 + num2 + rand() % 7 + 1, val3 = num1 + num2 + rand() % 7 + 1;

            if (apoyo == 1) val1 = num1 + num2;
            else if (apoyo == 2) val2 = num1 + num2;
            else val3 = num1 + num2;

            //Claves
            color(8);

            gotoxy(x - 8, y + 6);
            cout << "Opciones:";
            gotoxy(x - 8, y + 7);
            cout << "1) " << val1;
            gotoxy(x - 8, y + 8);
            cout << "2) " << val2;
            gotoxy(x - 8, y + 9);
            cout << "3) " << val3;

            for (tiempoLimite; tiempoLimite > 0 && !opcionCorrecta; --tiempoLimite) {
                gotoxy(x - 12, y + 10); cout << "Ingresa el numero de la opcion correcta solo 1 vez (Tienes " << tiempoLimite << " segundos): ";
                if (_kbhit()) {
                    char respuestaAlejandro = _getch();
                    switch (respuestaAlejandro) {
                    case '1':
                        if (val1 == respuestaCorrecta) {
                            opcionCorrecta = true;
                            gotoxy(x - 8, y + 13); cout << "Bien hecho, el semaforo se arreglara." << endl;
                            moneda += 5; estadisticas();
                        }
                        else {
                            gotoxy(x - 8, y + 13); cout << "Incorrecto! Intenta de nuevo." << endl;
                        }
                        break;

                    case '2':
                        if (val2 == respuestaCorrecta) {
                            opcionCorrecta = true;
                            gotoxy(x - 8, y + 13); cout << "Bien hecho, el semaforo se arreglara." << endl;
                            moneda += 5; estadisticas();
                        }
                        else {
                            gotoxy(x - 8, y + 13); cout << "Incorrecto! Intenta de nuevo." << endl;

                        }
                        break;
                    case '3':
                        if (val3 == respuestaCorrecta) {
                            opcionCorrecta = true;
                            gotoxy(x - 8, y + 13); cout << "Bien hecho, el semaforo se arreglara." << endl;
                            moneda += 5; estadisticas();
                        }
                        else {
                            gotoxy(x - 8, y + 13); cout << "Incorrecto! Intenta de nuevo." << endl;

                        }
                        break;
                    default:
                        gotoxy(x - 8, y + 13); cout << "No seas especial, solo presiona '1' '2' o '3'" << endl;
                        vidas -= 1; estadisticas();
                        break;
                    }
                }
                Sleep(1000);
            }
            if (!opcionCorrecta) {
                gotoxy(x - 10, y + 14); cout << "Se acabo el tiempo! Tendras que resolver otra."; vidas -= 1; estadisticas(); verificarVida();
                Sleep(2000);
                gotoxy(x - 10, y + 14); cout << "                                                          ";
            }
        } while (!opcionCorrecta);
    }
};
Minijuego1 mini1;

void minijuego1() {
    PlaySound(TEXT("minijuego.wav"), NULL, SND_ASYNC | SND_LOOP);
    system("cls");

    dibujarmarco(largo, ancho, 8); estadisticas();
    int x = 20, y = 8, xX = 80, x2 = 80, y2 = 13;
    color(8);

    // Primer round
    gotoxy(x - 7, y - 2); cout << "Bienvenido al primer minijuego, debes reparar el semaforo para acabar con el trafico de faucett";
    gotoxy(x - 17, y - 1); cout << "El semaforo se quedo estancado en rojo, ya va asi toda la tarde, ponlo en verde para que los carros puedan circular";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    srand(static_cast<unsigned>(time(0)));
    int num1, num2, respuestaCorrecta;
    char respuestaAlejandro;
    bool opcionCorrecta;

    mini1.suma(1, false);

    // Segundo round
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas(); 

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(2, false);

    // Tercer round
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(3, false);

    // Cuarto round
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(4, false);

    // Quinto round

    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";
    sprite.semaforoto(x2, y2);

    mini1.suma(5, false);

    // Sexto round
    system("cls"); gotoxy(x + 30, y - 2); cout << "VAMOS MAS RAPIDO"; Sleep(300);
    system("cls"); gotoxy(x + 30, y - 2); cout << "VAMOS MAS RAPIDO"; Sleep(300);
    system("cls"); gotoxy(x + 30, y - 2); cout << "VAMOS MAS RAPIDO"; Sleep(300);
    system("cls"); gotoxy(x + 30, y - 2); cout << "VAMOS MAS RAPIDO"; Sleep(300);
    system("cls"); gotoxy(x + 30, y - 2); cout << "VAMOS MAS RAPIDO"; Sleep(300);
    system("cls"); gotoxy(x + 30, y - 2); cout << "VAMOS MAS RAPIDO"; Sleep(300);
    system("cls"); gotoxy(x + 30, y - 2); cout << "VAMOS MAS RAPIDO"; Sleep(300);

    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(6, true);

    //septima ronda
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(7, true);

    // octava ronda
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(8, true);

    //novena ronda
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";

    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(9, true);

    //decima ronda
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";
    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(10, true);

    // onceava ronda
    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();

    gotoxy(x + 30, y - 2); cout << "YA FALTA POCO SIGUE ASI";
    Sleep(2000);
    sprite.semaforoto(x2, y2);

    mini1.suma(11, true);

    Sleep(1000);
    color(2); gotoxy(x2 - 7, y2 + 2); cout << "Semaforo reparado y en verde!" << endl;
    color(2); gotoxy(x2 + 2, y2 + 3); cout << " ______";
    color(2); gotoxy(x2 + 2, y2 + 4);  cout << "|  __  |";
    color(2); gotoxy(x2 + 2, y2 + 5); cout << "| |__| |";
    color(2); gotoxy(x2 + 2, y2 + 6); cout << "|  __  |";
    color(2); gotoxy(x2 + 2, y2 + 7); cout << "| |__| |";
    color(2); gotoxy(x2 + 2, y2 + 8); cout << "|  __  |";
    color(2); gotoxy(x2 + 2, y2 + 9); cout << "| |__| |";
    color(2); gotoxy(x2 + 2, y2 + 10); cout << " ------";
    color(2); gotoxy(x2 + 2, y2 + 11); cout << "  |  |";
    color(2); gotoxy(x2 + 2, y2 + 12); cout << " ------";
    _getch();
}

// Otros

void moverPersonaje(Limite limite,int xmin, int xmax, int y) {
    char tecla;
    while (true) {
        if (_kbhit()) {
            tecla = _getch();
            borrarPersonaje(); 

            // Mover el personaje según la tecla presionada, respetando los límites
            if (tecla == 'w' && py > limite.y_min) py--;
            else if (tecla == 's' && py < limite.y_max - 2) py++;
            else if (tecla == 'a' && px > limite.x_min) px--;
            else if (tecla == 'd' && px < limite.x_max - 2) px++;
            else if (tecla == 'z') {
                juego = 1; // Indicar que se ha activado el minijuego
                return; // Salir de la función
            }
            personaje();

            if (px >= xmin && px <= xmax && py == y) {
                if (tienda()) { // Si la tienda indica que se debe regresar
                    break; // Salir del bucle de movimiento y regresar al escenario
                }
            }
        }

        }
    }

char letra;
void escenario_uno_forma_uno() {
    PlaySound(TEXT("menu_cancion.wav"), NULL, SND_ASYNC | SND_LOOP);

    system("cls"); dibujarmarco(largo, ancho, 8); estadisticas();  

    Limite limite = { 5, largo - 72, ancho - 24, 20 };

    int x = 80, y = 11, x2 = 65, x3 = 49, x4 = 100, y4 = 18;

    //separacion para datos de jugador
    for (int i = 0; i < largo - 2; i++) {
        gotoxy(i + 1, 3);  cout << "-";
    }

    //casaN1
    for (int i = 0; i < largo - 80; i++) {
        gotoxy(i + 1, 10); cout << char(205);
    }
    //puerta
    for (int i = 9; i > 6; i--) {
        gotoxy(15, i); cout << "|";
    }
    for (int i = 9; i > 6; i--) {
        gotoxy(25, i); cout << "|";
    }
    for (int i = 16; i < 25; i++) {
        gotoxy(i, 6); cout << "_";
    }
    for (int i = 1; i < 7; i++) {
        gotoxy(41, 3 + i); cout << char(186); //frontal derecho
    }
    gotoxy(14, 5); cout << "T I E N D A";

    //casaN2
    for (int i = 1; i < 60; i++) {
        gotoxy(i + 50, 10); cout << char(205);
    }

    //puerta casa2
    for (int i = 9; i > 6; i--) {
        gotoxy(70, i); cout << "|";
    }
    for (int i = 9; i > 6; i--) {
        gotoxy(90, i); cout << "|";
    }
    for (int i = 71; i < 90; i++) {
        gotoxy(i, 6); cout << "_";
    }
    for (int i = 1; i < 7; i++) {
        gotoxy(50, 3 + i); cout << char(186); //frontal izquierdo
    }
    for (int i = 1; i < 7; i++) {
        gotoxy(110, 3 + i); cout << char(186); //frontal derecho
    }

    //semaforo
    color(8);
    color(4); gotoxy(x4 - 3, y4 - 1); cout << " semaforo roto";
    color(4); gotoxy(x4, y4);     cout << " ______";
    color(4); gotoxy(x4, y4 + 1);  cout << "|  __  |";
    color(4); gotoxy(x4, y4 + 2); cout << "| |__| |";
    color(4); gotoxy(x4, y4 + 3); cout << "|  __  |";
    color(4); gotoxy(x4, y4 + 4); cout << "| |__| |";
    color(4); gotoxy(x4, y4 + 5); cout << "|  __  |";
    color(4); gotoxy(x4, y4 + 6); cout << "| |__| |";
    color(4); gotoxy(x4, y4 + 7); cout << " ------";
    color(4); gotoxy(x4, y4 + 8); cout << "  |  |";
    color(4); gotoxy(x4, y4 + 9); cout << " ------";
    color(4); gotoxy(8, y4 + 7); cout << " |";
    color(4); gotoxy(8, y4 + 8); cout << " |";
    color(4); gotoxy(8, y4 + 9); cout << " |";


    color(4); gotoxy(4, y4 + 3); cout << "   ----";
    color(4); gotoxy(4, y4 + 4); cout << "  | __ |";
    color(4); gotoxy(4, y4 + 5); cout << "  ||  ||";
    color(4); gotoxy(4, y4 + 6); cout << " | |  | |";
    color(4); gotoxy(14, y4 + 6); cout << " Acercate y presiona z para reparar";
    color(8);
    //electricidad semaforo
    for (int i = 0; i < largo - 25; i++) {
        color(4);    gotoxy(i + 10, 27); cout << char(205);
    } color(8);


    //set 1
    gotoxy(x, y);     cout << "   _____    ";
    gotoxy(x, y + 1); cout << "._/     `__";
    gotoxy(x, y + 2); cout << "'~(o)~~(o)~J";
    gotoxy(x, y + 3);     cout << "   _____    ";
    gotoxy(x, y + 4); cout << "._/     `__";
    gotoxy(x, y + 5); cout << "'~(o)~~(o)~J";
    gotoxy(x, y + 6);     cout << "   _____    ";
    gotoxy(x, y + 7); cout << "._/     `__";
    gotoxy(x, y + 8); cout << "'~(o)~~(o)~J";
    gotoxy(x, y + 9);     cout << "   _____    ";
    gotoxy(x, y + 10); cout << "._/     `__";
    gotoxy(x, y + 11); cout << "'~(o)~~(o)~J";
    //set 2
    gotoxy(x2, y);     cout << "   _____    ";
    gotoxy(x2, y + 1); cout << "._/     `__";
    gotoxy(x2, y + 2); cout << "'~(o)~~(o)~J";
    gotoxy(x2, y + 3);     cout << "   _____    ";
    gotoxy(x2, y + 4); cout << "._/     `__";
    gotoxy(x2, y + 5); cout << "'~(o)~~(o)~J";
    gotoxy(x2, y + 6);     cout << "   _____    ";
    gotoxy(x2, y + 7); cout << "._/     `__";
    gotoxy(x2, y + 8); cout << "'~(o)~~(o)~J";
    gotoxy(x2, y + 9);     cout << "   _____    ";
    gotoxy(x2, y + 10); cout << "._/     `__";
    gotoxy(x2, y + 11); cout << "'~(o)~~(o)~J";
    //set 3
    gotoxy(x3, y);     cout << "   _____    ";
    gotoxy(x3, y + 1); cout << "._/     `__";
    gotoxy(x3, y + 2); cout << "'~(o)~~(o)~J";
    gotoxy(x3, y + 3);     cout << "   _____    ";
    gotoxy(x3, y + 4); cout << "._/     `__";
    gotoxy(x3, y + 5); cout << "'~(o)~~(o)~J";
    gotoxy(x3, y + 6);     cout << "   _____    ";
    gotoxy(x3, y + 7); cout << "._/     `__";
    gotoxy(x3, y + 8); cout << "'~(o)~~(o)~J";
    gotoxy(x3, y + 9);     cout << "   _____    ";
    gotoxy(x3, y + 10); cout << "._/     `__";
    gotoxy(x3, y + 11); cout << "'~(o)~~(o)~J";


    //abajo casas
    for (int i = 0; i < largo - 30; i++) {
        gotoxy(i + 1, 25); cout << char(205);
    }
    personaje(); moverPersonaje(limite, 15, 28, 11);
}

int main() {
 ocultarcursor(); 
 //logo(); principio(); menu(); userName();
 //animacion();
    while (true) {
    escenario_uno_forma_uno(); 
    if (juego == 1) { 
        minijuego1(); 
        juego += juego; 
    }
}


}