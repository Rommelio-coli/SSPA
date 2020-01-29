#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
 Check these declarations against the C/Fortran source code.
 */

/* .C calls */
extern void massdistc(void *, void *, void *, void *, void *, void *, void *);
extern void nncgc(void *, void *, void *, void *, void *, void *, void *, void *, void *, void *);

static const R_CMethodDef CEntries[] = {
  {"massdistc", (DL_FUNC) &massdistc,  7},
  {"nncgc",     (DL_FUNC) &nncgc,     10},
  {NULL, NULL, 0}
};

void R_init_SSPA(DllInfo *dll)
{
  R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}