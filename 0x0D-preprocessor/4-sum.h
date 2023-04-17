#ifndef FUNCTION_LIKE_MACRO_SUM_H
#define FUNCTION_LIKE_MACRO_SUM_H

#define SUM(x, y)		\
do				\
({				\
	typeof (x) x_ = (x);	\
	typeof (y) y_ = (y);	\
	x_ + y_;		\
})				\
while (0)

#endif