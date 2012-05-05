#ifndef DETERMINANT_H
#define DETERMINANT_H 1

double * determinant(double matrix[5][5])
{
  double temp[10];
  for(int t=0;t<10;t++) temp[t]=1.0;
  double *result = new double[5];
  for(int c=0;c<5;c++)
    for(int x=0;x<5;x++) {
      int y=(x+c)%5;
      temp[c]*=matrix[x][y];
    }
  for(int c=4;c>=0;c--)
    for(int x=0;x<5;x++) {
      int y=(c-x);
      if(y<0) y+=5;
      temp[9-c]*=matrix[x][y];
    }
  for(int x=0;x<5;x++) {
    result[x]=temp[x]-temp[9-x];
  }
  return result;
}

#endif
