/*****************************************************************************
** Author:	Melissa Clark
** Date:	2.3.19
** Description:	Member funciton implementation of setting the length, width
		and height of a box, and calculating the surface area
		and volume.
*************************************************************************/

//box.cpp
#include "Box.hpp"

// define default constructor
Box::Box()
{
  double height = 0;
  double width = 0;
  double length = 0;
}

// constructor that takes arguments for height, width, and length
Box::Box(double hei, double wid, double len)
{
   height = hei;
   width = wid;
   length = len;
}

/************************************************************************
*                               Box::setHeight                          *
*   This function sets the value of the member variable height.         *
*   If the argument passed is 0.0 or greater, it is copied into height .*
*   If it is less than 0.0, 1.0 is copied into height.                  *
*   *********************************************************************/    

void Box::setHeight(double hei)
{
   height = hei;
  
 }

/***********************************************************************
* 				Box::getHeight 				*
* 		this function returns the saved value for height.       *
************************************************************************
double Box::getHeight()
{
   return height;
}
 		
*************************************************************************/

/****************************************************************************
*                             Box::setWidth                                *   
* This function sets the value for the member variable width. If the       *
* argument passed into the function is greater or equal to 0.0, if will    *
* copy it into width. If it is less than 0.0, 1.0 will be copied into      *  
*                                  width.                                  *
*************************************************************************/
void Box::setWidth(double wid)

{
   width = wid;
}


/*************************************************************************
 * 				Box::getWidth
 * 		This function returns the value of width		*
 * ***********************************************************************
double Box::getWidth()
{
   return width;
}
************************************************************************/


/***************************************************************************
*                              Box::setLength                              *
* This function sets the value for the variable member length. If the      *
* argument passed into the function is greater than or equal to 0.0        *
* it will be copied into width. If it is less than 0.0, 1.0 will be        *
* copied into length.                                   	           *
* ************************************************************************/
void Box::setLength(double len)

{
  length = len;
}

/*************************************************************************
 * 				Box::getLength
 * 		This function returns the saved value of length		*
 * 		********************************************************
 * 		double Box::getLength()
{
   return length;
}
*************************************************************************/


/****************************************************************************
*                                  Box::calcVolume                          *
*   This function calculates and returns the volume of the box              *
*   ***********************************************************************/
double Box::calcVolume()
{
   return length * width * height;
}

/***************************************************************************
*                               Box::calcSurfaceArea                       *
*   This function calculates and returns the surface area of the box.      *
*   ***********************************************************************/
double Box::calcSurfaceArea()
{
   return 2 * (length * width) + 2 * (width * length) + 2 * (height * length);
}

/***************************************************************************
 *                                      Main                               *
 **********************************************************************                                      
#include "Box.hpp"
#include <iostream>


int main()
{
   Box box1;			//Use default constructor
   Box box2; 		 	// use these values 

   //calling functions for setting height, width, and length of box.
   box1.setHeight(7.1); 
   box1.setWidth(2.4);
   box1.setLength(5.0);

   //calling functions to calculate and return  surface area and volume
   std::cout << box1.calcVolume() << std::endl;
   std::cout  << box1.calcSurfaceArea() << std::endl;
   
   return 0;
}

****************************************/

