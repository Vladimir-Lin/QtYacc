#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::YaccReductions:: YaccReductions (void)
                  : Next           (NULL)
                  , Number         (0   )
                  , Total          (0   )
                  , Rules          (NULL)
{
}

N::YaccReductions:: YaccReductions (const YaccReductions & reductions)
{
  ME = reductions ;
}

N::YaccReductions::~YaccReductions(void)
{
}

N::YaccReductions & N::YaccReductions::operator = (const YaccReductions & reductions)
{
  nMemberCopy ( reductions , Next   ) ;
  nMemberCopy ( reductions , Number ) ;
  nMemberCopy ( reductions , Total  ) ;
  nMemberCopy ( reductions , Rules  ) ;
  return ME                           ;
}
