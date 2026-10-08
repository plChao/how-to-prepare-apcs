#include <cstdio>
#include <cstdarg>

void flush_printf(const char* format, ...) {
    va_list args;
    va_start(args, format);

    vprintf(format, args);   // call printf with variable arguments
    fflush(stdout);          // flush stdout immediately

    va_end(args);
}