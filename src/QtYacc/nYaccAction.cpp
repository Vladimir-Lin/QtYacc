#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::YaccAction:: YaccAction  (void)
              : Next        (NULL)
              , Symbol      (0   )
              , Number      (0   )
              , Precision   (0   )
              , Code        (0   )
              , Association (0   )
              , Suppressed  (0   )
{
}

N::YaccAction:: YaccAction  (const YaccAction & action)
{
}

N::YaccAction::~YaccAction(void)
{
}

N::YaccAction & N::YaccAction::operator = (const YaccAction & action)
{
  nMemberCopy ( action , Next        ) ;
  nMemberCopy ( action , Symbol      ) ;
  nMemberCopy ( action , Number      ) ;
  nMemberCopy ( action , Precision   ) ;
  nMemberCopy ( action , Code        ) ;
  nMemberCopy ( action , Association ) ;
  nMemberCopy ( action , Suppressed  ) ;
  return ME                            ;
}
