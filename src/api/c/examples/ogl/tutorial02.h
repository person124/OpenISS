#ifndef _TUTORIAL02_H
#define _TUTORIAL02_H

typedef struct
{
    void (*vfx_init) (void);
    void (*vfx_draw) (void);
    void (*vfx_free) (void);
}
t_iss_vfx_ops;

extern t_iss_vfx_ops p_ovfxEmptyOpenGLTest;

#endif
