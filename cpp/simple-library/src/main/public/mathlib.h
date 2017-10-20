#pragma once

#ifdef _WIN32
#  ifdef MATH_MODULE_EXPORT
#    define MATH_API __declspec(dllexport)
#  else
#    define MATH_API __declspec(dllimport)
#  endif
#else
#  define MATH_API
#endif

class MATH_API Math {
  public:
    int sum(int a, int b);
};
