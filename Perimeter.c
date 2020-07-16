#include <stdio.h> 
/* height and width of a rectangle in inches */
int width;  //Global Variable       
int height; //Global Variable        

int area;   //Global Variable       
int perimeter; //Global Variable     

int main() 
{
	  height = 7;//Variable Declaration
	  width = 5;//Variable Declaration
    
    perimeter = 2*(height + width); //Formula
	  printf("Perimeter of the rectangle = %d inches\n", perimeter);
	
	  area = height * width; //Formula
	  printf("Area of the rectangle = %d square inches\n", area);

return 0;
}
