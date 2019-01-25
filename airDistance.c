/*
* Cam Larson
* 1/24/2019
* Computing the air distance between two giving points on earth
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

  int main( )    {

  double longitudeOne;
  double latitudeOne;
  double longitudeTwo;
  double latitudeTwo;

  printf("Current location: (");
  scanf("%lf", longitudeOne);
  printf("%lf, ", longitudeOne);
  scanf("%lf", latitudeOne);
  printf("%lf)\n", latitudeOne);



    return 0;
  }
