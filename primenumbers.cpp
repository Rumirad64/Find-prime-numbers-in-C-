#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    // ofstream MyFile("numbers.dat");    //un comment to save numbers to a file
    int the_number = 3; //starting form 3 :(
    double i_double;
    int notification =0;     //2=hit break
    cout << "Start \n";
    
    while (true)
    {

        for (int i = 2; i < the_number; i++)
        {
            //cout << the_number << " / " << i << " = " << the_number%i << endl;
            
            if (the_number%i == 0)
            {
                notification = 2;
                break; 
            }
             
        }
        if (notification != 2)
        {
            cout << "Prime Number found ! : " << the_number << endl;
            //MyFile << the_number << "\n";      //saving numbers to a file
            notification = 2;
        }

        notification = 0;
        the_number++;
        
    }
    return 0;
}

