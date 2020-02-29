/* ************************************************

FileName: rectangle.h
Author: Tajinder Sharma and other group members
Date: 2/27/2020

*************************************************** */
#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle : public BasicShape {
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

       //Getter functions

       long int getLength(){
           return length;
       }


       long int getWidth(){
           return width;
       }

       //Overrides way to find area
       void calcArea(){
           double temp = width * length;
       }
};

#endif // RECTANGLE_H
