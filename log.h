/**
 * clog.h
 *
 * Roger Ngo
 * email: urbanspr1nter@gmail.com
 *
 * 2024-12-23
 *
 * Header declaration of a simple logger in C.
 *
 */

#ifndef CLOG_LOG_H
#define CLOG_LOG_H 

#include <stdarg.h>

void logLog(const char* format, ...);
void logWarning(const char* format, ...);
void logError(const char* format, ...);
void logFatal(const char* format, ...);

#endif // CLOG_LOG_H
