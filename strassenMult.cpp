#include <iostream>
#include <ctime>
#define A 2
#define B 2
using namespace std;

int main()
{
	int a[A][A], b[B][B], c[A][B], i = 0, j = 0;
	int m1, m2, m3, m4 , m5, m6, m7;
 
	// populates matrix A with random values between 0-100
	for(i = 0; i < A; i++)
    {
       	for(j = 0; j < A; j++)
       	{
       		a[i][j] = abs(rand()%100);
       	}
    }
	// displays matix A
    for(i = 0; i < A; i++)
    {
           for(j = 0; j < A; j++)
       	{
       		cout << a[i][j] << " ";
       	}
     	cout << endl;
    }
        
    cout << endl << endl;
        
	
	// populates matrix B
    for(i = 0; i < B; i++)
    {
       	for(j = 0; j < B; j++)
       	{
       		b[i][j] = abs(rand()%100);
     	}
    }
        		
	// displays matrix B
    for(i = 0; i < B; i++)
    {
       	for(j = 0; j < B; j++)
  		{
			cout << b[i][j] << " ";
   		}
 		cout << endl;
	}
	
	cout << endl << endl;
	
	m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
	m2= (a[1][0] + a[1][1]) * b[0][0];
	m3= a[0][0] * (b[0][1] - b[1][1]);
	m4= a[1][1] * (b[1][0] - b[0][0]);
	m5= (a[0][0] + a[0][1]) * b[1][1];
	m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
	m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
 
	c[0][0] = m1 + m4- m5 + m7;
	c[0][1] = m3 + m5;
	c[1][0] = m2 + m4;
	c[1][1] = m1 - m2 + m3 + m6;
	
	// displays the resultant matrix
	for(i = 0; i < 2 ; i++)
	{
		for(j = 0;j < 2; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
}