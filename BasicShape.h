//*************************************************
//File name:  BasicShape.h
//Author:     Andrew Chen and other group members
//Date:       2020/02/27
//*************************************************

#ifndef BASICSHAPE_H
#define BASICSHAPE_H

using namespace std;

class BasicShape
{
protected:
    double area;
public:

//********************************************************
//double getArea();
//this function returns the member variable 'area'
//********************************************************
    double getArea()
    {
        return area;
    }
//*******************************************************************
//virtual void calc Area();
//this function is to be overridden by classes circle and rectangle
//*******************************************************************
    virtual void calcArea() = 0;

};


#endif // BASICSHAPE_H
