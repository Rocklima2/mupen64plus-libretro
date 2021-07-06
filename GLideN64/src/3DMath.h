#ifndef _3DMATH_H
#define _3DMATH_H
#include <memory.h>
#include <string.h>

void MultMatrix( float m0[4][4], float m1[4][4], float dest[4][4]);
void TransformVectorNormalize(float vec[3], float mtx[4][4]);
void InverseTransformVectorNormalize(float src[3], float dst[3], float mtx[4][4]);
void Normalize(float v[3]);
float DotProduct(const float v0[3], const float v1[3]);

inline void MultMatrix2(float m0[4][4], float m1[4][4])
{
	float dst[4][4];
	MultMatrix(m0, m1, dst);
	memcpy( m0, dst, sizeof(float) * 16 );
}

void CopyMatrix( float m0[4][4], float m1[4][4]);

#endif
