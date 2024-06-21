#include <iostream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    Point(double x, double y, double z) : x(x), y(y), z(z) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }
};

int main() {
    Point p(1.0, 2.0, 3.0);
    std::cout << "Coordinates x: " << p.getX() << std::endl;
    std::cout << "Coordinates y: " << p.getY() << std::endl;
    std::cout << "Coordinates z: " << p.getZ() << std::endl;
}
