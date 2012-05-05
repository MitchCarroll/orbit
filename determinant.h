#ifndef DETERMINANT_H
#define DETERMINANT_H 1

double * determinant(double **matrix)
{
  double temp[10];
  double result[5];
  for(int c=0;c<5;c++)
    for(int x=0;x<5;x++) {
      y=(x+c)%5;
      temp[c]*=matrix[x][y];
    }
  for(int c=4;c>=0;c--)
    for(int x=0;x<5;x++) {
      y=(c-x)%5;
      temp[5+c]*=matrix[x][y];
    }
  for(int x=0;x<5;x++)
    result[x]=temp[x]-temp[x+5];
  return result;

#endif
