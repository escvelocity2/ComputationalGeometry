//segment.cpp
#include <iostream>
#include "SegmentHV.h"

using namespace std;

int main()
{
    SegmentHV<int> line_segment1(1,2,3,2);
    SegmentHV<int> line_segment2(1,3,1,1);

    cout << "Horizontal= " << line_segment1.isHorizontal() << endl;
    cout << "Vertical  = " << line_segment1.isVertical() << endl;

    cout << "Horizontal= " << line_segment2.isHorizontal() << endl;
    cout << "Vertical  = " << line_segment2.isVertical() << endl;

    bool result = line_segment1 < line_segment2;

    cout << result << endl;

    SegmentHV<float> line1(1.1,1.4,2.1,2.2);
    cout << "Horizontal= " << line1.isHorizontal() << endl;
    cout << "Vertical  = " << line1.isVertical() << endl;

    return 0;
}

