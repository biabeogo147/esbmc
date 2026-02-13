// ESBMC ActivationTask library functions

// Intrinsic function declarations for task-based priority scheduling
unsigned int __ESBMC_activation_task(const char *task_id, void (*func)(void));

// Implementation stubs - these will be handled by ESBMC intrinsics
unsigned int __ESBMC_activation_task(const char *task_id, void (*func)(void))
{
    // This function is handled as an intrinsic by ESBMC
    // The actual implementation is in goto-symex/builtin_functions.cpp
    return 0;
}
