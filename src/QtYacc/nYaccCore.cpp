#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::YaccCore:: YaccCore        (void)
            : Link            (NULL)
            , Next            (NULL)
            , Number          (0   )
            , AccessingSymbol (0   )
            , Total           (0   )
            , Items           (NULL)
{
}

N::YaccCore:: YaccCore (const YaccCore & core)
{
  ME = core ;
}

N::YaccCore::~YaccCore(void)
{
}

N::YaccCore & N::YaccCore::operator = (const YaccCore & core)
{
  nMemberCopy ( core , Link            ) ;
  nMemberCopy ( core , Next            ) ;
  nMemberCopy ( core , Number          ) ;
  nMemberCopy ( core , AccessingSymbol ) ;
  nMemberCopy ( core , Total           ) ;
  nMemberCopy ( core , Items           ) ;
  return ME                              ;
}
