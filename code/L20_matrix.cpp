#include <iostream>
#include <cmath>
using namespace std;
const double PI =3.14159265358979323846;
struct Vec2 {
    double x;
    double y;
};

struct Mat2 {
    double m00;
    double m01;
    double m10;
    double m11;
};

Vec2 multiply(const Mat2& m, const Vec2& v) {
    Vec2 result;

    result.x = m.m00 * v.x + m.m01 * v.y;
    result.y = m.m10 * v.x + m.m11 * v.y;

    return result;
}

Mat2 identity() {
    return {
        1, 0,
        0, 1
    };
}

Mat2 scale(double sx, double sy) {
    return {
        sx, 0,
        0, sy
    };
}

void print_vec(const Vec2& v) {
    cout << "(" << v.x << ", " << v.y << ")";
}

void print_mat(const Mat2& m) {
    cout << "[ " << m.m00 << "  " << m.m01 << " ]" << endl;
    cout << "[ " << m.m10 << "  " << m.m11 << " ]" << endl;
}

double degrees_to_radians(double degrees){
    return degrees*PI/180.0;
}

Mat2 rotation(double radians){
    double c = cos(radians);
    double s = sin(radians);
    return {
        c,-s,
        s,c
    };
}

int main() {
    Vec2 v = {2, 3};

    Mat2 i = identity();
    Mat2 s = scale(2, 0.5);

    cout << "恒等矩阵:" << endl;
    print_mat(i);

    cout << "缩放矩阵:" << endl;
    print_mat(s);

    cout << "v = ";
    print_vec(v);
    cout << endl;

    Vec2 vi = multiply(i, v);
    cout << "I * v = ";
    print_vec(vi);
    cout << endl;

    Vec2 vs = multiply(s, v);
    cout << "S * v = ";
    print_vec(vs);
    cout << endl;

    double angle = 90.0;
    Mat2 r = rotation(degrees_to_radians(angle));
    Vec2 vr = multiply(r,v);
    cout<<"逆时针旋转"<<angle<<"度"<<endl;
    cout << "R * v = ";
    print_vec(vr);
    cout << endl;

    return 0;
}