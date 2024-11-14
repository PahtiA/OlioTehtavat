#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double height;

public:
    // Setterit
    void setWidth(double width);
    void setHeight(double height);

    // Getterit
    double getArea() const;
    double getCircum() const;
};

#endif // RECTANGLE_H
