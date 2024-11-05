#pragma once
#include "pch.h"
#include "iostream"
#include "conio.h"
#include "windows.h"
#include "MMSystem.h"
#include "funcionesUtiles.h"
#include "string.h"
using namespace std;
int mov1 = 5, movy1 = 6, sem1 = 2, f = 70, ff = 15, movy2 = 2, t, movy3 = 12;

// ANIMACIONES

void enemigo() {
    color(sem1); gotoxy(mov1, movy1 - 1);     cout << "!!!";
    color(sem1); gotoxy(mov1, movy1);     cout << " O";
    color(sem1); gotoxy(mov1, movy1 + 1); cout << "/|\\";
    color(sem1); gotoxy(mov1, movy1 + 2); cout << "/ \\";

}

void borrarEnemigo() {
    gotoxy(mov1, movy1 - 1);     cout << "   ";
    gotoxy(mov1, movy1);     cout << "   ";
    gotoxy(mov1, movy1 + 1); cout << "   ";
    gotoxy(mov1, movy1 + 2); cout << "   ";
}

void semaforo(){
    color(sem1);
    //set 1
    gotoxy(mov1 + f, movy1 + 3); cout << " ______";
    gotoxy(mov1 + f, movy1 + 4); cout << "|  __  |";
    gotoxy(mov1 + f, movy1 + 5); cout << "| |__| |";
    gotoxy(mov1 + f, movy1 + 6); cout << "|  __  |";
    gotoxy(mov1 + f, movy1 + 7); cout << "| |__| |";
    gotoxy(mov1 + f, movy1 + 8); cout << "|  __  |";
    gotoxy(mov1 + f, movy1 + 9); cout << "| |__| |";
    gotoxy(mov1 + f, movy1 + 10); cout << " ------";
    gotoxy(mov1 + f, movy1 + 11); cout << "  |  |";
    gotoxy(mov1 + f, movy1 + 12); cout << " ------";
   
   // set 2
    gotoxy(f + ff, 2); cout << " ______";
    gotoxy(f + ff, 3); cout << "|  __  |";
    gotoxy(f + ff, 4); cout << "| |__| |";
    gotoxy(f + ff, 5); cout << "|  __  |";
    gotoxy(f + ff, 6); cout << "| |__| |";
    gotoxy(f + ff, 7); cout << "|  __  |";
    gotoxy(f + ff, 8); cout << "| |__| |";
    gotoxy(f + ff, 9); cout << " ------";
    gotoxy(f + ff, 10); cout << "  |  |";
    gotoxy(f + ff, 11); cout << " ------";
    
    gotoxy(f + ff, 16); cout << " ______";
    gotoxy(f + ff, 17); cout << "|  __  |";
    gotoxy(f + ff, 18); cout << "| |__| |";
    gotoxy(f + ff, 19); cout << "|  __  |";
    gotoxy(f + ff, 20); cout << "| |__| |";
    gotoxy(f + ff, 21); cout << "|  __  |";
    gotoxy(f + ff, 22); cout << "| |__| |";
    gotoxy(f + ff, 23); cout << " ------";
    gotoxy(f + ff, 24); cout << "  |  |";
    gotoxy(f + ff, 25); cout << " ------";
    
    gotoxy(mov1 + f - 29, movy1 + 10); cout << "  -";
    gotoxy(mov1 + f - 29, movy1 + 11); cout << " | |";
    gotoxy(mov1 + f - 29, movy1 + 12); cout << " ----------------------------";


    color(8);

}

void semaforoGrande (){

    color(t); gotoxy(mov1, movy2);     cout << " ______________________________";
    color(t);gotoxy(mov1, movy2 + 1);  cout << "|                              |";
    color(t);gotoxy(mov1, movy2 + 2);  cout << "|         ___________          |";
    color(t);gotoxy(mov1, movy2 + 3);  cout << "|        |           |         |";
    color(t);gotoxy(mov1, movy2 + 4);  cout << "|        !           !         |";
    color(t);gotoxy(mov1, movy2 + 5);  cout << "|        !___________!         |";
    color(t);gotoxy(mov1, movy2 + 6);  cout << "|                              |";
    color(t);gotoxy(mov1, movy2 + 7);  cout << "|                              |";
    color(t);gotoxy(mov1, movy2 + 8);  cout << "|         ___________          |";
    color(t);gotoxy(mov1, movy2 + 9);  cout << "|        |           |         |";
    color(t);gotoxy(mov1, movy2 + 10); cout << "|        !           !         |";
    color(t);gotoxy(mov1, movy2 + 11); cout << "|        !___________!         |";
    color(t);gotoxy(mov1, movy2 + 12); cout << "|                              |";
    color(t);gotoxy(mov1, movy2 + 13); cout << "|                              |";
    color(t);gotoxy(mov1, movy2 + 14); cout << "|         ___________          |";
    color(t);gotoxy(mov1, movy2 + 15); cout << "|        |           |         |";
    color(t);gotoxy(mov1, movy2 + 16); cout << "|        !           !         |";
    color(t);gotoxy(mov1, movy2 + 17); cout << "|        !___________!         |";
    color(t);gotoxy(mov1, movy2 + 18); cout << "|                              |";
    color(t);gotoxy(mov1, movy2 + 19); cout << " ------------------------------";


}

void animacion (){
    system("cls");
	dibujarmarco(120, 35, 8);
    gotoxy(mov1, movy3); cout << "En la ciudad surge una figura misteriosa: El Apagaluces."; Sleep(300);
    gotoxy(mov1, movy3 + 1); cout << "Nadie sabe su verdadero nombre ni sus motivaciones, pero su mision es clara: sembrar el caos en las calles."; Sleep(300);
    gotoxy(mov1, movy3 + 2); cout << "El Apagaluces, un genio de la tecnología y el sabotaje, recorre la ciudad apagando semaforos"; Sleep(300);
    gotoxy(mov1, movy3 + 3); cout << "creando embotellamientos y provocando accidentes leves que impiden el flujo normal de la ciudad."; Sleep(300);
    gotoxy(mov1, movy3 + 4); cout << "Algunos dicen que lo hace para poner a prueba a los ciudadanos y ver como reaccionan al desorden"; Sleep(300);
    gotoxy(mov1, movy3 + 5); cout << "Suele poner preguntas en los semaforos, intenta solucionarlas para poder reparalos."; Sleep(300);
    Sleep(4000);
    system("cls");
    dibujarmarco(120, 35, 8);
    semaforo(); movy1 = movy1 + 10;
    for (int i = 0; i < 9; i++){
        sem1 = 4;
        mov1 += i; 
        enemigo(); Sleep(500); borrarEnemigo(); 
    }
    enemigo();
    color(sem1); 
    for (int i = 0; i < 2; i++) {
        gotoxy(mov1, movy1 - 2 - i);     cout << "!!!"; 
    }
    Sleep(600); system("cls");
    dibujarmarco(120, 35, 8); 
    for (int i = 0; i < 5; i++) {
        t = 2;
        semaforoGrande(); Sleep(500);
        t = 4; 
        semaforoGrande(); Sleep(500);
        gotoxy(mov1 + 8, movy2 + 20); cout << "! ! ! ! ! ! ! !"; Sleep(500);
        gotoxy(mov1 + 8, movy2 + 20); cout << "               "; Sleep(100);
    }
    gotoxy(mov1, movy2 + 20); cout << "F A L L O  E N  S E M A F O R O S"; Sleep(500);
    system("cls");
}

// SPRITES
// Minijuego N°1

void semafo(int x2, int y2) {
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
