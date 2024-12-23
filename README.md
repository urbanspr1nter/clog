# clog
Simple logger implemented in C.

It's pretty easy to use. Just copy these files to any project.

```c
#include "log.h"

int main() {
    logLog("Here is a generic logging statement.");

    logWarning("Here is a warning.");

    logLog("Some data: %d, %d, %d", a, b, c);

    return 0;
}
```

See `log.h` for all the available API available.

