#include <stdio.h>

struct Vec3 {
    double x;
    double y;
    double z;
};

int main(void) {
    struct Vec3 p;
    p.x = 0.0;
    p.y = 0.0;
    p.z = 1000.0;
    printf("x = %f, y = %f, z = %f\n", p.x, p.y, p.z);
    return 0;
}