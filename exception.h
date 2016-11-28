#ifndef EXCEPTION_H_
# define EXCEPTION_H_

# include <setjmp.h>

# define try			\
  do				\
    {				\
      jmp_buf	ex_buf;		\
				\
      switch (setjmp(ex_buf))	\
	{			\
 case 0 :			\
 while (1)			\
   {				\

# define catch(x)		\
  break;			\
 case x :			\

# define finally		\
  break; }			\
 default :

# define etry			\
  }				\
    }while (0)			\

# define throw	longjmp(ex_buf, 1)

# define MISMATCH_EXCEPTION (1)
# define NULL_EXCEPTION (2)
# define TYPE_EXCEPTION (3)

#endif	/* !EXCEPTION_H_ */
