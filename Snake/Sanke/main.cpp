#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 40;
const int height = 15;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
int specialFruitX, specialFruitY;
bool specialFruitActive = false;
int specialFruitTimer = 0;
const int specialFruitDuration = 5; // thời gian thức ăn đặc biệt xuất hiện (giây)
int fruitsEaten = 0;
int specialFruitScore = 30; // Điểm cho thức ăn đặc biệt
bool speedBoostActive = false; // Biến kiểm soát trạng thái tăng tốc
int speed = 150; // Tốc độ di chuyển mặc định