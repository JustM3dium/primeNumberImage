#include "./EasyBMP/EasyBMP.hpp"
#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>




int main(){
    //user changable values
    int n = 200000;
    int width = 2000;
    //origin point of for the line to start. off centern in this case because of how the prime line goes
    int x = width/2, y = width/2;
    //starting direction moving to the right. 
    int direction = 1;

    //generate primes till n
    std::vector<bool> primes;
    primes.resize(n,true);

    for( int p = 2; p*p <= n; p++){
        if(primes[p]){
            for(int i = p*p; i <= n; i = i + p){
                primes[i] = false;
            }
        }
    }
    
    //general setup for the image
    EasyBMP::RGBColor black (0,0,0);
    EasyBMP::RGBColor white (255,255,255);
    EasyBMP::Image img(width,width, "runner.bmp", black);
    img.SetPixel(x, y, white);

    //position in the vector of primes
    int pos = 0;
    while (x < width - 1 && x > 1 && y < width -1 && y > 1 && pos < n)
    {   
        //if the current number is a prime number then increment the direction by one, resultung in a 90° turn in clockwise direction
        if (primes[pos++]){
            direction = (direction + 1) % 4;
        }
        
        //depending on the direction change the value of x and y for the new pixel to be drawn at
        switch (direction)
        {
            case 0:
                y--;
                break;
            case 1:
                x++;
                break;
            case 2:
                y++;
                break;
            case 3:
                x--;
                break;

            default:
                break;
        }
        img.SetPixel(x, y, white);
    }
    img.Write();
    return 0;
}