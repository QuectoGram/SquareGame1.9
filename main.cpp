#include "raylib.h"
#include <iostream>
#include <string>
#include <yaml-cpp/yaml.h>
using namespace std;
using namespace YAML;
int main(){
    Node config=LoadFile("SGSettings\settings.yml");
    string ColorStr=config["SquareColor"].as<string>();
    Color squareColor=GRAY;
    if (ColorStr =="RED") squareColor=RED;
    else if (ColorStr =="BLUE") squareColor=BLUE;
    else if (ColorStr =="BLACK") squareColor=BLACK;
    else if (ColorStr =="GREEN") squareColor=GREEN;
    else if (ColorStr =="ORANGE") squareColor=ORANGE;
    cout<<"Welcome to SquareGame 1.9 a game made by U123573"<<endl;
    InitWindow(1300,1000,"SquareGame 1.9");
    SetTargetFPS(65);
    float x=650;
    float y=450;
    float speed=5.0f;
    while (!WindowShouldClose()){
        if (IsKeyDown(KEY_A)) x-=speed;
        if (IsKeyDown(KEY_D)) x+=speed;
        if (IsKeyDown(KEY_W)) y-=speed;
        if (IsKeyDown(KEY_S)) y+=speed;
        if (IsKeyDown(KEY_LEFT)) x-=speed;
        if (IsKeyDown(KEY_RIGHT)) x+=speed;
        if (IsKeyDown(KEY_UP)) y-=speed;
        if (IsKeyDown(KEY_DOWN)) y+=speed;
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(x,y,150,150,squareColor);
        DrawText("SQUARE",x,y,35,BLACK);
        DrawText("SquareGame 1.9",500,150,50,BLACK);
        DrawText("MBU1",15,15,40,BLACK);
        DrawText("WDRC++",15,65,40,BLACK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
