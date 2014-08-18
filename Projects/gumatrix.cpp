#include "gumatrix.h"
#include <stdexcept>
#include <array>

// Constructors
GUMatrix::GUMatrix()
{
}
GUMatrix::GUMatrix(int countOfRow, int countOfCol, float array[])
{
    _countOfRow = countOfRow;
    _countOfCol = countOfCol;
    _arraySize = _countOfRow * _countOfCol;
    _array = new float[_arraySize];
    for (int i = 0; i < _arraySize; i++) { _array[i] = array[i]; }
}
GUMatrix::~GUMatrix()
{
    delete []_array;
}
// Public methods
GUMatrix* GUMatrix::getTransponent()
{
    float *transponentArray = new float[_arraySize];
    int k = 0;
    int offset = 0;
    for (int i = 0; i < _arraySize; i++)
    {
        if ((i + _countOfRow) % _countOfRow == 0)
        {
            transponentArray[i] = transponentArray[k++];
            offset = _countOfCol;
        }
        else
        {
            transponentArray[i] = transponentArray[(k-1) + offset];
            offset += _countOfCol;
        }
    }
    GUMatrix *returnMatrix = new GUMatrix(_countOfCol, _countOfRow, transponentArray);
    return returnMatrix;
}
