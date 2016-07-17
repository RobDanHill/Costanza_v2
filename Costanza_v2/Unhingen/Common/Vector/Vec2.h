#pragma once

#include "..\Types.h"

typedef struct Vec2_s {

	s_int	x;
	s_int	y;

	/* Constructors for integer based vec2s */
	Vec2_s ();
	Vec2_s ( s_int scalar );
	Vec2_s ( s_int x, s_int y );

	/* Operator overloaded methods for vec2 arithmetic */
	friend Vec2_s operator+ ( Vec2_s leftOperand, const Vec2_s &rightOperand );
	friend Vec2_s operator- ( Vec2_s leftOperand, const Vec2_s &rightOperand );
	friend Vec2_s operator* ( Vec2_s leftOperand, const Vec2_s &rightOperand );
	friend Vec2_s operator/ ( Vec2_s leftOperand, const Vec2_s &rightOperand );

	friend Vec2_s operator+ ( Vec2_s leftOperand, s_int value );
	friend Vec2_s operator- ( Vec2_s leftOperand, s_int value );
	friend Vec2_s operator* ( Vec2_s leftOperand, s_int value );
	friend Vec2_s operator/ ( Vec2_s leftOperand, s_int value );

	Vec2_s& operator+= ( const Vec2_s& rightOperand );
	Vec2_s& operator-= ( const Vec2_s& rightOperand );
	Vec2_s& operator*= ( const Vec2_s& rightOperand );
	Vec2_s& operator/= ( const Vec2_s& rightOperand );

	/* Operator overloaded methods for vec2 boolean expressions */
	boolean	operator== ( const Vec2_s& rightOperand ) const;
	boolean operator< ( const Vec2_s& rightOperand ) const;
	boolean operator> ( const Vec2_s& rightOperand ) const;
	boolean operator<= ( const Vec2_s& rightOperand ) const;
	boolean operator>= ( const Vec2_s& rightOperand ) const;

} Vec2;