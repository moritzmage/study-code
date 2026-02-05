#include <stdio.h>

int iResolutionX = 40;
int iResolutionY = 20;
int iPovX = 60;
int iScaleY = 2/3;

float fFaceEdges3d[3][3] = {
    {-2, 2, 0}, //  x
    {-2, -2, 2}, // y
    {7, 7, 7} //    z
};
int iFaceEdgesTemp2d[2][3];


int main(){

    

    return 0;
}

void render(int iCurrentFace){
    for (int a = 0; a < 3; a++) { // ScreenX fuer eine Flaeche berechnen und in temparray schrieben
        iFaceEdgesTemp2d[0][a] = atan(fFaceEdges3d[0][a+iCurrentFace*3]/fFaceEdges3d[2][a+iCurrentFace*3])*(iResolutionX/iPovX)+(iResolutionX/2);
        iFaceEdgesTemp2d[1][a] = -atan(fFaceEdges3d[1][a+iCurrentFace*3]/fFaceEdges3d[2][a+iCurrentFace*3])*(iResolutionX/iPovX)*iScaleY+(iResolutionY/2);
    }
}