#ifndef GUMATRIX_H
#define GUMATRIX_H

class GUMatrix
{
public:
    GUMatrix();
    ~GUMatrix();
    GUMatrix(int countOfRow, int countOfCol, float array[]);
    GUMatrix* getTransponent();

private:
    int _countOfRow;
    int _countOfCol;
    int _arraySize;
    float *_array;
};

#endif // GUMATRIX_H
