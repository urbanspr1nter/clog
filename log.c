/**
 * clog.c
 *
 * Roger Ngo
 * email: urbanspr1nter@gmail.com
 *
 * 2024-12-23
 *
 * Implementation of a simple logger in C.
 *
 */

#include <stdio.h>
#include "log.h"

static void logInternal(const char* prefix, const char* format, va_list args) {
    printf("%s - ", prefix);
    vprintf(format, args);
    printf("\n");
}

void logLog(const char* format, ...) {
    va_list args;
    va_start(args, format);

    logInternal("ℹ️", format, args);

    va_end(args);
}

void logWarning(const char* format, ...) {
    va_list args;
    va_start(args, format);

    logInternal("⚠️", format, args);

    va_end(args);
}

void logError(const char* format, ...) {
    va_list args;
    va_start(args, format);

    logInternal("🚨", format, args);

    va_end(args);
}

void logFatal(const char* format, ...) {
    va_list args;
    va_start(args, format);

    logInternal("💥", format, args);

    va_end(args);
}
