#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::YaccHelp:: YaccHelp(void)
{
}

N::YaccHelp:: YaccHelp(const YaccHelp & help)
{
  ME = help ;
}

N::YaccHelp::~YaccHelp(void)
{
}

N::YaccHelp & N::YaccHelp::operator = (const YaccHelp & help)
{ Q_UNUSED ( help ) ;
  return ME         ;
}
