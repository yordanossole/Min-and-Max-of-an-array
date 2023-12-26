#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int test;
    int num[5] = {8,1,2,3,5};
    int news[]={};
    int j=0;

    cout << "Enter a number to output the min and max values above the imput: ";
    cin >> test;

    for(int i=0; i<5; i++)
    {
        if(num[i] > test)
        {
            news[j] = num[i];
            j++;
        }
    }
cout << "\nBefore arangement: \n";
    for (int i=0; i<j; i++)
    {
        cout << news[i] << " ";
    }

    for (int x=0; x<j; x++){
        for (int y=x+1; y<j; y++){
                if (num[x] > num[y]){
                double temp = num[x];
                        news[x] = news[y];
                        news[y] = temp;
            }
        }
    }

cout << "\nAfter arrangement: \n";
    for (int i=0; i<j; i++)
    {
        cout << news[i] << " ";
    }
    cout << "\nThe user input is: " << test << endl;
    cout << "The max is: " << news[j-1] << endl;
    cout << "The min is: " << news[0] << endl;

}
