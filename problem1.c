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
