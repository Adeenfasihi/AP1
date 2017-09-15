#include <iostream>
#include <ctime>
#define A 2
#define B 2
using namespace std;

int c[A][B];

class matrix_mult
{
    private:
        int m1[A][A], m2[B][B];
    
    public:
        void setter()
        {
            if(A == B)		// populates and calculates multiple only if size compatible
        	{
        		int i = 0, j = 0;
        		srand(time(NULL));
        		
				// populates matrix A with random values between 0-100
        		for(i = 0; i < A; i++)
        		{
        			for(j = 0; j < A; j++)
        			{
        				m1[i][j] = abs(rand()%100);
        			}
        		}
				
        		// displays matix A
        		for(i = 0; i < A; i++)
        		{
        		    for(j = 0; j < A; j++)
        			{
        				cout << m1[i][j] << " ";
        			}
        			cout << endl;
        		}
        		
        		cout << endl << endl;
        		
				// populates matix A
        		for(i = 0; i < B; i++)
        		{
        			for(j = 0; j < B; j++)
        			{
        				m2[i][j] = abs(rand()%100);
        			}
        		}
        		
				// displays matix A
        		for(i = 0; i < B; i++)
        		{
        		    for(j = 0; j < B; j++)
        			{
        				cout << m2[i][j] << " ";
        			}
        			cout << endl;
        		}
        		
        		cout << endl << endl;
        		
                multiply(m1, m2); // calls the multiply function and passes matrix A and B
        	}
            else
        	{
        		cout << "The matrices cannot be multiplied."; 
        	}
        }
        
        void multiply(int a[A][A], int b[B][B])
        {
            int temp = 0, i = 0, j = 0, k = 0;
        	for(i = 0; i < A; i++)   // three for-loops to calculate the values for each space
        	{
        		for(j = 0; j < B; j++)
        		{
        			for(k = 0; k < B; k++)
        			{
        				temp += a[i][k]*b[k][j];
        			}
        			c[i][j] = temp;
        			temp = 0;
        		}
        	}
        	// displays the resulting matrix
        	for(i = 0; i < A; i++)
        	{
        		for(j = 0; j < B; j++)
        		{
        			cout << c[i][j] << " ";
        		}
        		cout << endl;
        	}
        }
};

int main()
{
    matrix_mult a; // creates an object of matrix_mult
    a.setter();
}