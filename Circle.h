/*
 * Lab 5, Circle.h: Circle class implementation, inherits from BasicShape abstract class.
 * Author: Danielle Lieber
 * Date: 02/28/2020
 */

#ifndef CIRCLE_H
#define CIRCLE_H
#include "BasicShape.h"


class Circle : public BasicShape {
    private:
        long int centerX;
        long int centerY;
        double radius;
    public:
        /*
         * This is the constructor for the circle class.
         * x: x value of the circle center point
         * y: y value of the circle center point
         * r: radius of the circle
         * return value: none
         */
         Circle(long int x, long int y, double r) {
            centerX = x;
            centerY = y;
            radius = r;
            calcArea();
        }
        /*
         * This function returns the value of centerX
         * return value: centerX, the x value of the circle object center point
         */
        long int getCenterX() {
            return centerX;
        }
        /*
         * This function returns the value of centerY
         * return value: centerY, the y value of the circle object center point
         */
        long int getCenterY() {
            return centerY;
        }
        /*
         * This function returns the value of the radius
         * return value: radius, the radius of the circle object
         */
        long int getRadius() {
            return radius;
        }
        /*
         * This function overrides the calcArea function inherited from BasicShape.
         * It calculates the area of the circle and outputs it to the screen.
         * return value: none
         */
        virtual void calcArea() {
            area = 3.14159 * radius * radius;
        }
};

#endif //CIRCLE_H
