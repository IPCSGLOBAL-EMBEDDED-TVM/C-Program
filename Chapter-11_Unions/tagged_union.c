#include <stdio.h>

/* A "tagged union" pairs an enum tag with a union so the program
   knows which member is currently valid to read */

enum Shape { CIRCLE, RECTANGLE, TRIANGLE };

struct CircleData { float radius; };
struct RectangleData { float width, height; };
struct TriangleData { float base, height; };

struct ShapeInfo {
    enum Shape type;
    union {
        struct CircleData circle;
        struct RectangleData rectangle;
        struct TriangleData triangle;
    } data;
};

float calculateArea(struct ShapeInfo shape) {
    switch (shape.type) {
        case CIRCLE:
            return 3.14159f * shape.data.circle.radius * shape.data.circle.radius;
        case RECTANGLE:
            return shape.data.rectangle.width * shape.data.rectangle.height;
        case TRIANGLE:
            return 0.5f * shape.data.triangle.base * shape.data.triangle.height;
        default:
            return 0;
    }
}

int main() {
    struct ShapeInfo shapes[3];

    shapes[0].type = CIRCLE;
    shapes[0].data.circle.radius = 5.0f;

    shapes[1].type = RECTANGLE;
    shapes[1].data.rectangle.width = 4.0f;
    shapes[1].data.rectangle.height = 6.0f;

    shapes[2].type = TRIANGLE;
    shapes[2].data.triangle.base = 8.0f;
    shapes[2].data.triangle.height = 3.0f;

    const char *names[] = {"Circle", "Rectangle", "Triangle"};
    for (int i = 0; i < 3; i++)
        printf("%s area = %.2f\n", names[shapes[i].type], calculateArea(shapes[i]));

    return 0;
}
