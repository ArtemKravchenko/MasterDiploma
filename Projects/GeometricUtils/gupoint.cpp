#include "gupoint.h"

// Constructors
GUPoint::GUPoint()
{
}

GUPoint::GUPoint(float x, float y)
{
    _is2dDimention = true;
    _coordinates = new float[2];
    _coordinates[0] = x;
    _coordinates[1] = y;
}

GUPoint::GUPoint(float x, float y, float z)
{
    _is2dDimention = false;
    _coordinates = new float[3];
    _coordinates[0] = x;
    _coordinates[1] = y;
    _coordinates[2] = z;
}
GUPoint::~GUPoint()
{
    delete[] _coordinates;
}
// Public methods
bool GUPoint::is2dPoint()
{
    return _is2dDimention;
}
float* GUPoint::getVector()
{
    return _coordinates;
}

