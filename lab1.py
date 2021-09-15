import math
triangleAngle = 0
triangleSide1 = 0
triangleSide2 = 0 

while(True):
    triangleSide1 = float(input('Enter first side:'))
    triangleSide2 = float(input('Enter second side:'))
    triangleAngle = float(input('Enter angle:')) /180 * math.pi
    if (triangleAngle == 0 or triangleSide1 == 0 or triangleSide2 == 0):
        print('Error(incorrect data).Try again')
        continue 
    print(0.5 * triangleSide1 * triangleSide2 * math.sin(triangleAngle)) 
    if (input('Continue?(y/n) :') == 'n'):
        break