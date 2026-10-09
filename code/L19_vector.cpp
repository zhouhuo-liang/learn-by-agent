#include<iostream>
#include<cmath>
using namespace std;
struct Vec2{
    double x;
    double y;
};
double dot(const Vec2& a, const Vec2& b){
    return a.x*b.x + a.y*b.y;
}
double cross(const Vec2& a, const Vec2& b){
    return a.x*b.y - a.y*b.x;
}
double length(const Vec2& a){
    return sqrt(dot(a,a));
}
void print(const Vec2& v){
    cout<<"(" << v.x << ", " << v.y << ")";
}

int main(){
    Vec2 a = {3, 4};
    Vec2 b = {1, 2};

    cout << "a = ";
    print(a);
    cout << endl;

    cout << "b = ";
    print(b);
    cout << endl;

    cout << "dot(a, b) = " << dot(a, b) << endl;
    cout << "length(a) = " << length(a) << endl;

    Vec2 right = {1, 0};
    Vec2 up = {0, 1};
    Vec2 left = {-1, 0};

    cout << "cross(a, b) = " << cross(a, b) << endl;
    cout << "cross(b, a) = " << cross(b, a) << endl;

    cout << "dot(right, up) = " << dot(right, up) << endl;
    cout << "cross(right, up) = " << cross(right, up) << endl;
    cout << "cross(right, left) = " << cross(right, left) << endl;

    return 0;
}