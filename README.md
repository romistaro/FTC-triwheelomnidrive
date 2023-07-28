# FTC-triwheelomnidrive
This is the thought process behind the designing of the robot for J. Clarke Richardsons 2022 FTC robot pictured below.

![image](https://github.com/romistaro/FTC-triwheelomnidrive/assets/77026665/6d354c19-f5e7-4ae1-92d7-240e7ce8b968)


The robot would need three wheels, each spaced roughly 120 degrees apart in a triangular drivetrain.

the joystick input for this robot would have both an x and y coordinate, positive x indicating left, and positive y indicating up, this is how the ftc control hub interprets them.

In the diagram shown below, the front of the drivetrain is considered between wheels one and two, which is subsequently where I placed the wheel posistions for it on the x,y plane

Calculating the power needed for each wheel if the robot was to be moved straight forward (assuming the flat end between wheel one and two was the front, could be done as follows.

<ol>
  <li>calculate the angle between the desired direction of travel and the desired wheels position relative to the positive x axis, denoted a </li>
  <li>Use this value a1, a2, a3 to offset any given angle the the joystick is at for each wheel 1, 2 and 3</li>
  <li>calculate the overall power of the joystick input, J</li>
  <li>pass the sine function to the calculated angle of the joystick (atan (y/x)) subtracted from the offset of each wheel 1, 2 and 3 </li>
  <li>multiply this final value by the overall joystick power J to get the final power needed for each wheel</li>
</ol>

This process would make it so the front two wheels would be powered at sqrt(3)/2 and -sqrt(3)/2 respectively, indicating that they both need to be powered in the same direction. The negative value for one of the wheels is because the positive power input for each wheel is in the clockwise direction. As pictured below. 

![image](https://github.com/romistaro/FTC-triwheelomnidrive/assets/77026665/e7668101-4fa7-4970-9006-f932b7ebd47a)


For strictly forward movement, the bottom wheel would be motionless. This is proven by inputting a3 into the formula. a3 is 270 because wheel three sits along the negative y axis which is 270 degrees from the positive x axis counter clockwise. 270-90 = 180. and sin 180 is zero. Therefore multiplying 0 by any power of J in the forwards direction would result in an overall power of zero for wheel 3 

<img src="https://github.com/romistaro/FTC-triwheelomnidrive/assets/77026665/47f87d2d-1b7e-4703-a0a8-195c675a9c6b" width="500">
