#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
  int toSeconds(int hours, int minutes, int seconds)
  {
    int res=(hours*3600) + (minutes*60) + seconds; 

      return res;
  }
int main() {
    int hours, minutes,seconds,totalseconds;
    scanf("%d %d %d", &hours, &minutes, &seconds);
    totalseconds = toSeconds(hours,minutes,seconds);
    printf("Total seconds: %d\n",totalseconds);
    return 0;
}
