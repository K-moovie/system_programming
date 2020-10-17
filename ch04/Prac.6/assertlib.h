# define __ASSERT_VOID_CAST (void)
# ifdef NDEBUG
# define my_assert(expr) (__ASSERT_VOID_CAST (0))
# else
# define my_assert(expr) ((expr) ? __ASSERT_VOID_CAST(0) : __assert_fail(#expr,__FILE__, __LINE__, __func__))
# endif
extern char *__progname;
extern void __assert_fail (const char *__assertion, const char *__file, unsigned int __line, const char *__function);


