#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::YaccShifts:: YaccShifts (void)
              : Next       (NULL)
              , Number     (0   )
              , Total      (0   )
              , Shifts     (NULL)
{
}

N::YaccShifts:: YaccShifts (const YaccShifts & shifts)
{
  ME = shifts ;
}

N::YaccShifts::~YaccShifts(void)
{
}

N::YaccShifts & N::YaccShifts::operator = (const YaccShifts & shifts)
{
  nMemberCopy ( shifts , Next   ) ;
  nMemberCopy ( shifts , Number ) ;
  nMemberCopy ( shifts , Total  ) ;
  nMemberCopy ( shifts , Shifts ) ;
  return ME                       ;
}
