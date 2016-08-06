#include "Vec2.h"

Vec2_s::Vec2_s () :
	x( 0 ), y( 0 ) {
}

Vec2_s::Vec2_s ( s_int scalar ) :
	x( scalar ), y( scalar ) {
}

Vec2_s::Vec2_s ( s_int x, s_int y ) :
	x( x ), y( y ) {
}

Vec2_s operator+ ( Vec2_s leftOperand, const Vec2_s& rightOperand ) {
	leftOperand.x += rightOperand.x;
	leftOperand.y += rightOperand.y;
	return leftOperand;
}

Vec2_s operator+ ( Vec2_s leftOperand, s_int value ) {
	leftOperand.x += value;
	leftOperand.y += value;
	return leftOperand;
}

Vec2_s operator- ( Vec2_s leftOperand, const Vec2_s& rightOperand ) {
	leftOperand.x -= rightOperand.x;
	leftOperand.y -= rightOperand.y;
	return leftOperand;
}

Vec2_s operator- ( Vec2_s leftOperand, s_int value ) {
	leftOperand.x -= value;
	leftOperand.y -= value;
	return leftOperand;
}

Vec2_s operator* ( Vec2_s leftOperand, const Vec2_s& rightOperand ) {
	leftOperand.x *= rightOperand.x;
	leftOperand.y *= rightOperand.y;
	return leftOperand;
}

Vec2 operator* ( Vec2_s leftOperand, s_int value ) {
	leftOperand.x *= value;
	leftOperand.y *= value;
	return leftOperand;
}

Vec2_s operator/ ( Vec2_s leftOperand, const Vec2_s& rightOperand ) {
	leftOperand.x /= rightOperand.x;
	leftOperand.y /= rightOperand.y;
	return leftOperand;
}

Vec2 operator/ ( Vec2_s leftOperand, s_int value ) {
	leftOperand.x /= value;
	leftOperand.y /= value;
	return leftOperand;
}

Vec2_s& Vec2_s::operator+= ( const Vec2_s& rightOperand ) {
	x += rightOperand.x;
	y += rightOperand.y;
	return *this;
}

Vec2_s& Vec2_s::operator-= ( const Vec2_s& rightOperand ) {
	x -= rightOperand.x;
	y -= rightOperand.y;
	return *this;
}

Vec2_s& Vec2_s::operator*= ( const Vec2_s& rightOperand ) {
	x *= rightOperand.x;
	y *= rightOperand.y;
	return *this;
}

Vec2_s& Vec2_s::operator/= ( const Vec2_s& rightOperand ) {
	x /= rightOperand.x;
	y /= rightOperand.y;
	return *this;
}

boolean Vec2_s::operator== ( const Vec2_s& rightOperand ) const {
	return x == rightOperand.x &&
		y == rightOperand.y;
}

boolean Vec2_s::operator< ( const Vec2_s& rightOperand ) const {
	return x < rightOperand.x &&
		y < rightOperand.y;
}

boolean Vec2_s::operator> ( const Vec2_s& rightOperand ) const {
	return x > rightOperand.x &&
		y > rightOperand.y;
}

boolean Vec2_s::operator<= ( const Vec2_s& rightOperand ) const {
	return x <= rightOperand.x &&
		y <= rightOperand.y;
}

boolean Vec2_s::operator>= ( const Vec2_s& rightOperand ) const {
	return x >= rightOperand.x &&
		y >= rightOperand.y;
}
