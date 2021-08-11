
#include <stdio.h>

#ifdef _WIN32
#define API_DEC __declspec(dllexport)
#else
#if __GNUC__ >= 4
#define API_DEC __attribute__((visibility("default")))
#else
#define API_DEC
#endif
#endif

#ifdef __cplusplus
extern "C"
#endif
{
  API_DEC const char *GetLog(void);

#ifdef __cplusplus
}
#endif