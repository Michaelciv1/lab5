/* ************************************************

FileName: rectangle.h
Author: Tajinder Sharma and other group members
Date: 2/27/2020

*************************************************** */
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "BasicShape.h"

class Rectangle : public BasicShape
{
 private:
       long int width;
       long int length;

   public:
    //This is the constructor
       Rectangle (long int w, long int l){
           width = w;
           length = l;
           calcArea();
       }

       //Getter functions, return long int values for length and width

       long int getLength(){
           return length;
       }

       long int getWidth(){
           return width;
       }

       //Overrides virtual function and finds sets area to the area of the rectangle
       virtual void calcArea() {
           area = length * width;
       }
};

#endif // RECTANGLE_H
