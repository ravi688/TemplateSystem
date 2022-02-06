#pragma once

#define c_template(c_typename, T) c_typename##_##T


#define template1(c_typename, T) c_template(c_typename, T)
#define template2(c_typename, T1, T2) c_typename##_##T1##T2


typedef char* pchar_t;
typedef int* pint_t;
typedef float* pfloat_t;
typedef double* pdouble_t;

typedef const char* pcchar_t;
typedef const int* pcint_t; 
typedef const float* pcfloat_t;
typedef const double* pcdouble_t;