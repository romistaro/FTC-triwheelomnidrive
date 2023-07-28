#include <stdio.h>
#include <cmath>

int wheelpower(double joy_x, double joy_y, wheel_offset){ 

  return(sin(wheel_offset -( atan(180/pi * (joy_y/joy_x)))) * sqrt(pow(joy_x,2) + pow(joy_y,2)))

  
}
