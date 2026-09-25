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
    p.position.z = 1000.0;
    p.velocity.x = 0.0;
    p.velocity.y = 0.0;
    p.velocity.z = 0.0;
    p.mass = 2000.0;
    
    printf("px = %f, py = %f, pz = %f, vx = %f, vy = %f, vz = %f, mass = %f\n" ,
     p.position.x, p.position.y, p.position.z,
     p.velocity.x, p.velocity.y, p.velocity.z, p.mass);
    return 0;
}
