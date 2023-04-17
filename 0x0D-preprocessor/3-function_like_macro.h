#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

/**
 *function_like_macro - computes the absolute value of a number x
 *@x: integer to calculate as absolute
 */

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))

#endif
