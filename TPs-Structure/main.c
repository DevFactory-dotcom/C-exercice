#include <stdio.h>
#include <math.h>

typedef struct Point{
    float x;
    float y;
} Point;

typedef struct Vector2D{
    Point origin;
    Point destination;
} Vector2D;

Point get_middle_vector(Vector2D vector);

Point get_middle_vector(Vector2D vector){
    Point middle;
    middle.x = (vector.origin.x + vector.destination.x) / 2;
    middle.y = (vector.origin.y + vector.destination.y) / 2;

    printf("Le milieu de votre vecteur est le point de coordonnée en abscisse : %f et d'ordonné : %f. \n", middle.x , middle.y);

    return middle;
}


float get_vector_distance(Vector2D vector){
    float distance;
    distance = sqrt(pow(vector.destination.x - vector.origin.x, 2) + pow(vector.destination.y - vector.origin.y, 2));
    printf("La distance est de : %f \n", distance);
    return distance;

}



int main(){

    Vector2D vector1;
    vector1.origin.x = 5;
    vector1.origin.y = 5;
    vector1.destination.x = 7;
    vector1.destination.y = 7;

    get_middle_vector(vector1);
    get_vector_distance(vector1);
}