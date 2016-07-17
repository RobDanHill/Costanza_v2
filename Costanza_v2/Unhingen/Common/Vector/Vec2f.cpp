#include "Vec2f.h"

Vec2f_s::Vec2f_s () :
	x( 0.0f ), y( 0.0f ) {
}

Vec2f_s::Vec2f_s ( float scalar ) :
	x( scalar ), y( scalar ) {
}

Vec2f_s::Vec2f_s ( float x, float y ) :
	x( x ), y( y ) {
}

Vec2f_s operator+ ( Vec2f_s leftOperand, const Vec2f_s& rightOperand ) {
	leftOperand.x += rightOperand.x;
	leftOperand.y += rightOperand.y;
	return leftOperand;
}

Vec2f_s operator+ ( Vec2f_s leftOperand, float value ) {
	leftOperand.x += value;
	leftOperand.y += value;
	return leftOperand;
}

Vec2f_s operator- ( Vec2f_s leftOperand, const Vec2f_s& rightOperand ) {
	leftOperand.x -= rightOperand.x;
	leftOperand.y -= rightOperand.y;
	return leftOperand;
}

Vec2f_s operator- ( Vec2f_s leftOperand, float value ) {
	leftOperand.x -= value;
	leftOperand.y -= value;
	return leftOperand;
}

Vec2f_s operator* ( Vec2f_s leftOperand, const Vec2f_s& rightOperand ) {
	leftOperand.x *= rightOperand.x;
	leftOperand.y *= rightOperand.y;
	return leftOperand;
}

Vec2f_s operator* ( Vec2f_s leftOperand, float value ) {
	leftOperand.x *= value;
	leftOperand.y *= value;
	return leftOperand;
}

Vec2f_s operator/ ( Vec2f_s leftOperand, const Vec2f_s& rightOperand ) {
	leftOperand.x /= rightOperand.x;
	leftOperand.y /= rightOperand.y;
	return leftOperand;
}

Vec2f_s operator/ ( Vec2f_s leftOperand, float value ) {
	leftOperand.x /= value;
	leftOperand.y /= value;
	return leftOperand;
}

Vec2f_s& Vec2f_s::operator+= ( const Vec2f_s& rightOperand ) {
	x += rightOperand.x;
	y += rightOperand.y;
	return *this;
}

Vec2f_s& Vec2f_s::operator-= ( const Vec2f_s& rightOperand ) {
	x -= rightOperand.x;
	y -= rightOperand.y;
	return *this;
}

Vec2f_s& Vec2f_s::operator*= ( const Vec2f_s& rightOperand ) {
	x *= rightOperand.x;
	y *= rightOperand.y;
	return *this;
}

Vec2f_s& Vec2f_s::operator/= ( const Vec2f_s& rightOperand ) {
	x /= rightOperand.x;
	y /= rightOperand.y;
	return *this;
}

boolean Vec2f_s::operator== ( const Vec2f_s& rightOperand ) const {
	return x == rightOperand.x &&
		y == rightOperand.y;
}

boolean Vec2f_s::operator< ( const Vec2f_s& rightOperand ) const {
	return x < rightOperand.x &&
		y < rightOperand.y;
}

boolean Vec2f_s::operator> ( const Vec2f_s& rightOperand ) const {
	return x > rightOperand.x &&
		y > rightOperand.y;
}

boolean Vec2f_s::operator<= ( const Vec2f_s& rightOperand ) const {
	return x <= rightOperand.x &&
		y <= rightOperand.y;
}

boolean Vec2f_s::operator>= ( const Vec2f_s& rightOperand ) const {
	return x >= rightOperand.x &&
		y >= rightOperand.y;
}