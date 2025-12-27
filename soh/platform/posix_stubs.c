/*
 * This file provides dummy implementations to allow linking on such platforms.
 * TODO: This should be solved using #ifdefs in the libraries that require these functions later.
 */

#include <errno.h>

/* Used by portable-file-dialogs and imgui Platform_OpenInShellFn_DefaultImpl */
int execvp(const char *file, char *const argv[])
{
    (void)file;
    (void)argv;
    errno = ENOSYS;
    return -1;
}

/* Used by imgui Platform_OpenInShellFn_DefaultImpl */
int waitpid(int pid, int *status, int options)
{
    (void)pid;
    (void)status;
    (void)options;
    errno = ECHILD;
    return -1;
}

/* Used by imgui Platform_OpenInShellFn_DefaultImpl */
int fork(void)
{
    errno = ENOSYS;
    return -1;
}