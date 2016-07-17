#pragma once

#include "..\Types.h"

typedef struct Vec2f_s {

	float	x;
	float	y;

	/* Constructors for integer based vec2s */
	Vec2f_s ();
	Vec2f_s ( float scalar );
	Vec2f_s ( float x, float y );

	/* Operator overloaded methods for vec2 arithmetic */
	friend Vec2f_s operator+ ( Vec2f_s leftOperand, const Vec2f_s &rightOperand );
	friend Vec2f_s operator- ( Vec2f_s leftOperand, const Vec2f_s &rightOperand );
	friend Vec2f_s operator* ( Vec2f_s leftOperand, const Vec2f_s &rightOperand );
	friend Vec2f_s operator/ ( Vec2f_s leftOperand, const Vec2f_s &rightOperand );

	friend Vec2f_s operator+ ( Vec2f_s leftOperand, float value );
	friend Vec2f_s operator- ( Vec2f_s leftOperand, float value );
	friend Vec2f_s operator* ( Vec2f_s leftOperand, float value );
	friend Vec2f_s operator/ ( Vec2f_s leftOperand, float value );

	Vec2f_s& operator+= ( const Vec2f_s& rightOperand );
	Vec2f_s& operator-= ( const Vec2f_s& rightOperand );
	Vec2f_s& operator*= ( const Vec2f_s& rightOperand );
	Vec2f_s& operator/= ( const Vec2f_s& rightOperand );

	/* Operator overloaded methods for vec2 boolean expressions */
	boolean	operator== ( const Vec2f_s& rightOperand ) const;
	boolean operator< ( const Vec2f_s& rightOperand ) const;
	boolean operator> ( const Vec2f_s& rightOperand ) const;
	boolean operator<= ( const Vec2f_s& rightOperand ) const;
	boolean operator>= ( const Vec2f_s& rightOperand ) const;

} Vec2f;