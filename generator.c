#include <stdio.h>
#include <math.h>
#define SIZE 1000

int main() {
  FILE *out = fopen("out.ppm", "w+");
  fprintf(out, "P3 %d %d 255 ", SIZE, SIZE);
  int i, j;
  float omega = (4 * M_PI) / SIZE;
  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      int r = (int) (127 * (1 + sin(omega * (i * i + j * j))));
      int g = (int) (127 * (1 + sin(2 * omega * (i * i +  j * j))));
      int b = (int) (127 * (1 + sin(4 * omega * (i * i + j * j))));
      fprintf(out, " %d %d %d", r, g, b);
    }
    fprintf(out, "\n");
  }
  fclose(out);
}
  
    
