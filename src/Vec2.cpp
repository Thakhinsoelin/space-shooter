#include "Vec2.h"
#include <cmath>

Vec2::Vec2() {

}

Vec2::Vec2(double xin, double yin)
    : x(xin), y(yin) {

}

std::ostream& operator << (std::ostream& stream, const Vec2& lhs) {
    return stream << lhs.x << " " << lhs.y << '\n';
}

bool Vec2::operator == (Vec2 lhs) {
    
    return (x == lhs.x && y == lhs.y);
}

bool Vec2::operator != (Vec2 lhs) {
    return (x != lhs.x && y != lhs.y);
}

Vec2 Vec2::operator + (Vec2 lhs) {
    return Vec2(x+lhs.x, y+lhs.y);
}

Vec2 Vec2::operator - (Vec2 lhs) {
    return Vec2(x - lhs.x, y - lhs.y);
}

Vec2 Vec2::operator * (Vec2 lhs) {
    return Vec2(x * lhs.x, y * lhs.y);
}

Vec2 Vec2::operator / (Vec2 lhs) {
    return Vec2(x / lhs.x, y / lhs.y);
}

void Vec2::operator += (const Vec2& lhs) {
    x += lhs.x;
    y += lhs.y;
}

void Vec2::operator -= (const Vec2& lhs) {
    x -= lhs.x;
    y -= lhs.y;
}

void Vec2::operator *= (const float lhs) {
    x * lhs;
    y * lhs;
}

void Vec2::operator /= (const float lhs) {
    x / lhs;
    y / lhs;
}

void Vec2::normalize() {
    double L{ std::sqrt(x * x + y * y)};
    x = x / L;
    y = y / L;
}

Vec2 Vec2::normalize(Vec2 vector) {
    double L { std::sqrt(vector.x * vector.x + vector.y * vector.y)};
    return Vec2(vector.x / L, vector.y / L);
}

double Vec2::length(){
    return std::sqrt( x * x + y * y);
}

Vec2::~Vec2() {
    
}