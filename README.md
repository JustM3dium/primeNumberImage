# primeNumberImage
Based on a post made on reddit.com/rGenerates an image based on the occurrence of prime numbers in the spectrum of natural numbers/dataisbeautiful this programm generates the prime numbers up to a spciefied amount to then generate an imaged based on these numbers.
Each time a prime number is encountered, while counting up the natural numbers a line drawn will make a 90° turn. For each iteration the line moves foward by one pixel.

## installation
Into the folder of this repository clone the EasyBMP repository:
```bash
https://github.com/izanbf1803/EasyBMP
```

This library is used to generate the image

## Default case
By default the programm will generate a 2000 x 2000 image with the origin point of the line in the center of the image. As well as generating the primes in the range from 2 to 200000. This is enough for the line to reach the border of the image

## How to use
The user can change several parameters to get the image just the way they want to.

* Range for the primes to be generated in
* Size of the image
* Starting direction of the line
* Starting position of the line

Depending on whether the line is supposed to reach the border of the image, either the size or the amount of primes generated can be adjusted. As long as there are still more generated primes available and the border hasn't been reached the line will proceed to be drawn.

# Examples

## Default
* n = 200000
* width = 2000
* x,y = width/2
* direction = 1
![](./sampleimages/default.bmp)

## Less primes
* n = 100000
* width = 2000
* x,y = width/2
* direction = 1
![](./sampleimages/too_few_primes.bmp)

## Change in origin 
* n = 100000
* width = 2000
* x = 200
* y = 1600
* direction = 1
![](./sampleimages/diff_origin.bmp)

## Change in direction
* n = 100000
* width = 2000
* x = 200
* y = 1600
* direction = 2
![](./sampleimages/diff_direction.bmp)
