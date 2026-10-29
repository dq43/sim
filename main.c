#include <stdio.h>


typedef struct {
    double x;
    double y;
    double z;
} Vec3;

typedef struct {
    Vec3 position;
    Vec3 velocity;
    double mass;
 } Body;

int main(void) {
    Body p;
    p.position.x = 0.0;
    p.position.y = 0.0;
    p.position.z = 1082.0;
    p.velocity.x = 0.0;
    p.velocity.y = 0.0;
    p.velocity.z = 0.0;
    p.mass = 1652.0;

    
    double dt = 0.01;
    double g = 9.81;

     for(int i=0;i<1000;i++)
    {
        p.velocity.z = p.velocity.z - g * dt;
        p.position.z = p.position.z + p.velocity.z * dt;

    printf("px = %f, py = %f, pz = %f, vx = %f, vy = %f, vz = %f, mass = %f\n" ,
     p.position.x, p.position.y, p.position.z,
     p.velocity.x, p.velocity.y, p.velocity.z, p.mass);
    }
    


    return 0;
}
