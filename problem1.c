/* The following problem was posed to John von Neumann:

Two bicyclists, A and B, start riding toward each other at the same time from palces that are 250 miles apart,
A traveling 10 miles per hour, and B at 15 miles per hour. At the same time, a fly leaves the front wheel of A's
bicycle, and flies towards B's bicycle at 20 miles per hour. As soon as he touches the front wheel of B's bicycle,
he turns around and flies back. As the bicycles approach each other, he continues flying back and forth, touching
each front wheel in turn, until, alas, he is crushed between them. Since the fly travels faster than either cyclist,
he makes an infinite number of trips, yet travels a finite distance (the infinite series converges). How far did
the fly travel?

Von Nuemann immediately summed the infinite series (in his head!), and arrived at the correct answer: 200 miles.

You are to write a program that solves a more general version of that problem, with varying initial distances and 
speeds.

Input:
The first line of input contains a single integer P (1 <= P <= 1000), which is the number of data sets that follow. 
Each data set should be processed identically and independently.

Each data set consists of a single line containing five values: an integer N(the data set number), and four 
floating-point values: D (the initial distance between the two bicycles, 10 <= D <= 1000), A (cyclist A's speed in
miles per hour, 1 <= A <= 30), B (cyclist B's speed in miles per hour, 1 <= B <= 30), and F (the fly's speed in miles
per hour, A <= B < F <= 50).

Output:
For each data set there is one line of output. It contains the data set number followed by a single space, followed
by the number of miles traveled by the fly, (the sum of the infinite series described by the input values), accurate
to two decimal places. */
#include<stdio.h>
#include<stdlib.h>

int main() {
  int numberOfEntries, currentEntry, i;
  float distance, speedA, speedB, speedFly;

  scanf("%d", &numberOfEntries);

  if (numberOfEntries <= 0) {
    printf("Please enter a value greater than 0.");
    exit(1);
  }

  float array[numberOfEntries];

  for (i = 0; i < numberOfEntries; i++) {
    scanf("%d %f %f %f %f", &currentEntry, &distance, &speedA, &speedB, &speedFly);
    float time = (speedA + speedB) / distance;
    time = speedFly / time;
    array[i] = time;
  }

  for (i = 0; i < numberOfEntries; i++) {
    printf("%d %.2f\n", i + 1, array[i]);
  }
  return 0;
}
