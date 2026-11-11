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
    p.mass = 1000.0;
    double et;

    
    double dt = 0.01;
    double g = 9.81;

     for(int i=0;i<1000;i++)
    {
    
    et = i*dt;

    if (i %100 == 0)
    {
    printf("px = %f, py = %f, pz = %f, vx = %f, vy = %f, vz = %f, mass = %f, elapsed time = %f seconds\n" ,
     p.position.x, p.position.y, p.position.z,
     p.velocity.x, p.velocity.y, p.velocity.z, p.mass,et);
    }
        
    p.velocity.z = p.velocity.z - g * dt;
    p.position.z = p.position.z + p.velocity.z * dt; 
    }
    et+=dt;

    printf("px = %f, py = %f, pz = %f, vx = %f, vy = %f, vz = %f, mass = %f, elapsed time = %f seconds\n" ,
    p.position.x, p.position.y, p.position.z,
    p.velocity.x, p.velocity.y, p.velocity.z, p.mass,et);

    return 0;
}
