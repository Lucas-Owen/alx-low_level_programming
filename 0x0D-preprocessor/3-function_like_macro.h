#ifndef FUNCTION_LIKE_MACRO_ABS_H
#define FUNCTION_LIKE_MACRO_ABS_H

#define ABS(x)			\
do				\
({				\
	typeof (x) x_ = (x);	\
	x_ < 0 ? -x_ : x_;	\
})				\
while (0)

#endif