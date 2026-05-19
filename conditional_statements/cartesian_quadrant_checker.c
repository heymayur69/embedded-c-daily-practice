/*
13. Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on
*/

#include <stdio.h>

int main() {
    
    float x, y;

    printf("Enter X co-ordinate: ");
    scanf("%f", &x);
    printf("Enter Y co-ordinate: ");
    scanf("%f", &y);

    /*Quadrants 
    I : ++
    II : -+
    III: --
    IV : +-
    */

    if(x == 0 && y == 0)
        printf("Point (%f, %f) is at origin\n",x, y);
    else if(x != 0 && y == 0)
        printf("Point (%f, %f) lies on X-axis\n",x, y);
    else if(y != 0 && x == 0)
        printf("Point (%f, %f) lies on Y-axis\n",x, y);
    else if (x > 0 && y > 0)
        printf("Point (%f, %f): I quadrant\n",x, y);
    else if(x < 0 && y > 0)
        printf("Point (%f, %f): II quadrant\n",x, y);    
    else if(x < 0 && y < 0)
        printf("Point (%f, %f): III quadrant\n",x, y);
    else if(x > 0 && y < 0)
        printf("Point (%f, %f): IV quadrant\n",x, y);   
    else
        printf("Invalid Co-ordinates \n"); 
    return 0;
}