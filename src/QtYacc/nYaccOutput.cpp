#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::YaccOutput:: YaccOutput(void)
{
}

N::YaccOutput:: YaccOutput(const YaccOutput & yacc)
{
  ME = yacc ;
}

N::YaccOutput::~YaccOutput(void)
{
}

N::YaccOutput & N::YaccOutput::operator = (const YaccOutput & yacc)
{ Q_UNUSED ( yacc ) ;
  return ME         ;
}
