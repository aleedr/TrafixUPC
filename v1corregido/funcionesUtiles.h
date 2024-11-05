#pragma once
#include "pch.h"
#include "iostream"
#include "conio.h"
#include "windows.h"
#include "MMSystem.h"
using namespace std;
int cordX = 0;
int cordY = 0;
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void color(int x) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
void dibujarmarco(int largo, int ancho, int colorM) {
    color(colorM); gotoxy(0, 0); cout << char(201);
    // arriba
    for (cordX = 1; cordX < largo - 1; cordX++) {
        gotoxy(cordX, 0); cout << char(205);
    }
    gotoxy(cordX, 0); cout << char(187);

    // derecha
    for (cordY = 1; cordY < ancho - 6; cordY++) {
        gotoxy(cordX, cordY); cout << char(186);
    }
    gotoxy(cordX, cordY); cout << char(188);

    // abajo
    for (cordX = largo - 2; cordX > 0; cordX--) {
        gotoxy(cordX, cordY); cout << char(205);
    }
    gotoxy(0, cordY); cout << char(200);

    // izquierda
    for (cordY = cordY - 1; cordY > 0; cordY--) {
        gotoxy(0, cordY); cout << char(186);
    }
}

void ocultarcursor() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(hConsole, &cursorInfo);
    cursorInfo.bVisible = false; // Hacer el cursor invisible

    SetConsoleCursorInfo(hConsole, &cursorInfo);
}