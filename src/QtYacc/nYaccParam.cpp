#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

N::YaccParam:: YaccParam (void)
             : Next      (NULL)
             , name      (0   )
             , type      (0   )
             , type2     (NULL)
{
}

N::YaccParam:: YaccParam (const YaccParam & param)
{
  ME = param ;
}

N::YaccParam::~YaccParam(void)
{
}

N::YaccParam & N::YaccParam::operator = (const YaccParam & param)
{
  nMemberCopy ( param , Next  ) ;
  nMemberCopy ( param , name  ) ;
  nMemberCopy ( param , type  ) ;
  nMemberCopy ( param , type2 ) ;
  return ME                     ;
}
