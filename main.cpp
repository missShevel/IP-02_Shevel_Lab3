#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{    
    int n=0;
    double x, eps;    
    
    cout << "Enter x = "; cin >> x;         
    cout << "Enter eps = "; cin >> eps;
    double an = x, sin;    
       
    while (fabs(an) > eps)    
    {   
        sin+=an;
        n++;
        an*=-x*x/(2*n*(2*n+1));         
    }
    
    cout << "sin = " << sin << "\n";
    


return 0;
}



