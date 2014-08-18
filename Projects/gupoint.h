#ifndef GUPOINT_H
#define GUPOINT_H

class GUPoint
{
public:
    GUPoint();
    ~GUPoint();
    GUPoint(float x, float y);              // defines 2d point
    GUPoint(float x, float y, float z);     // defines 3d foint
    bool is2dPoint();                       // return an information about dimentions of current point
    float* getVector();                     // return a array that contains coordinates of point. It can be eighter 2 or 3 elements

private:
    bool _is2dDimention;                    // dimention of space in which point was initialized
    float *_coordinates;                    // array that contain coordinates. It can be eighter 2 or 3 elements
};

#endif // GUPOINT_H
