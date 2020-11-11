n = 0
x = float(input("Enter x: "))
eps = float(input ("Enter epsylon: "))

an = x
sin = 0

while (abs(an) > eps) :
  sin += an 
  n = n+1
  an = an*(-x*x/(2*n*(2*n+1)))

print("sin = " + str(sin))