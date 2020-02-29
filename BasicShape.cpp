//*************************************************
//File name:  basicShape.h
//Author:     Andrew Chen and other group members
//Date:       2020/02/27
//*************************************************

#ifndef BASICSHAPE_H
#define BASICSHAPE_H

using namespace std;

class BasicShape
{
private:
    double area;
public:
//default constructor
    BasicShape(){};

//class destructor
    ~BasicShape(void);

//member functions
    BasicShape(double shapeArea)
    {
        area = shapeArea;
    }
//********************************************************
//double getArea();
//this function returns the member variable 'area'
//********************************************************
    double getArea(){
        return area;
    }
//*******************************************************************
//virtual double calc Area();
//this function is to be overridden by classes circle and rectangle
//*******************************************************************
    virtual double calcArea() = 0;

};


#endif // BASICSHAPE_H
