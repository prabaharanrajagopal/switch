
#ifdef __cplusplus
#define DECL extern "C"
#else
#define DECL
#endif

DECL const char*
check_multiple_external_link( const char* top, const char* sub, const char* val );
