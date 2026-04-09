#if !defined(DUK_CMDLINE_H_INCLUDED)
#define DUK_CMDLINE_H_INCLUDED

/* Defined in duk_cmdline_lowmem.c. */
extern void *lowmem_pool_ptr;

void lowmem_init(void);
void lowmem_free(void);
void lowmem_dump(void);
void lowmem_register(duk_context *ctx);
void lowmem_start_exec_timeout(void);
void lowmem_clear_exec_timeout(void);
void *lowmem_alloc_wrapped(void *udata, duk_size_t size);
void *lowmem_realloc_wrapped(void *udata, void *ptr, duk_size_t size);
void lowmem_free_wrapped(void *udata, void *ptr);

/* Duktape interrupt-based execution timeout */
duk_bool_t cmdline_exec_timeout_check(void *udata);
void cmdline_set_exec_timeout(duk_context *ctx, int timeout_seconds);
void cmdline_clear_exec_timeout(duk_context *ctx);

#endif /* DUK_CMDLINE_H_INCLUDED */