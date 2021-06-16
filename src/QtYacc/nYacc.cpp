#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::Yacc:: Yacc(void)
{
}

N::Yacc:: Yacc(const Yacc & yacc)
{
  ME = yacc ;
}

N::Yacc::~Yacc(void)
{
}

N::Yacc & N::Yacc::operator = (const Yacc & yacc)
{ Q_UNUSED ( yacc ) ;
  return ME         ;
}

void N::Yacc::TransitiveClosure(unsigned * R,int n)
{
  int        rowsize                         ;
  unsigned   i                               ;
  unsigned * rowj                            ;
  unsigned * rp                              ;
  unsigned * rend                            ;
  unsigned * ccol                            ;
  unsigned * relend                          ;
  unsigned * cword                           ;
  unsigned * rowi                            ;
  ////////////////////////////////////////////
  rowsize = WORDSIZE(n)                      ;
  relend  = R + n * rowsize                  ;
  ////////////////////////////////////////////
  cword = R                                  ;
  i     = 0                                  ;
  rowi  = R                                  ;
  ////////////////////////////////////////////
  while (rowi < relend)                      {
    ccol = cword                             ;
    rowj = R                                 ;
    while (rowj < relend)                    {
      if  ( *ccol & (unsigned)(1 << i) )     {
        rp   = rowi                          ;
        rend = rowj + rowsize                ;
        while (rowj < rend) *rowj++ |= *rp++ ;
      } else                                 {
        rowj += rowsize                      ;
      }                                      ;
      ccol += rowsize                        ;
    }                                        ;
    if (++i >= BITS_PER_WORD)                {
      i = 0                                  ;
      cword++                                ;
    }                                        ;
    rowi += rowsize                          ;
  }                                          ;
}

void N::Yacc::ReflexiveTransitiveClosure(unsigned * R,int n)
{
  int        rowsize          ;
  unsigned   i                ;
  unsigned * rp               ;
  unsigned * relend           ;
  /////////////////////////////
  TransitiveClosure ( R , n ) ;
  /////////////////////////////
  rowsize = WORDSIZE(n)       ;
  relend  = R + n * rowsize   ;
  i       = 0                 ;
  rp      = R                 ;
  while (rp < relend)         {
    *rp |= (unsigned)(1 << i) ;
    if (++i >= BITS_PER_WORD) {
      i = 0                   ;
      rp++                    ;
    }                         ;
    rp += rowsize             ;
  }                           ;
}
