#ifndef ACTIVATION_TASK_H
#define ACTIVATION_TASK_H

#ifdef __cplusplus
extern "C" {
#endif

// ESBMC ActivationTask intrinsic function
// Creates a new thread with specified task priority
// task_id: String identifier for the task (used to lookup priority in JSON)
// func: Function pointer to the entry point of the task
// Returns: Thread ID of the created thread
unsigned int __ESBMC_activation_task(const char *task_id, void (*func)(void));

#ifdef __cplusplus
}
#endif

#endif /* ACTIVATION_TASK_H */
