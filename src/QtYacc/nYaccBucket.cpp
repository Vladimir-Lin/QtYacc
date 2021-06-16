#include <qtyacc.h>

#define BITS_PER_WORD 32
#define WORDSIZE(n)   (((n)+(BITS_PER_WORD-1))/BITS_PER_WORD)

#define TABLE_SIZE 1024

N::YaccBucket:: YaccBucket  (void)
              : Link        (NULL)
              , Next        (NULL)
              , Tag         (NULL)
              , Name        (""  )
              , Value       (0   )
              , Index       (0   )
              , Precision   (0   )
              , Class       (0   )
              , Association (0   )
{
}

N::YaccBucket:: YaccBucket  ( QString name   )
              : Link        ( NULL           )
              , Next        ( NULL           )
              , Tag         ( NULL           )
              , Name        ( name           )
              , Value       ( YACC_UNDEFINED )
              , Index       ( 0              )
              , Precision   ( 0              )
              , Class       ( YACC_UNKNOWN   )
              , Association ( YACC_TOKEN     )
{
}

N::YaccBucket:: YaccBucket ( const YaccBucket & bucket )
{
  ME = bucket ;
}

N::YaccBucket::~YaccBucket(void)
{
}

N::YaccBucket & N::YaccBucket::operator = (const YaccBucket & bucket)
{
  nMemberCopy ( bucket , Link        ) ;
  nMemberCopy ( bucket , Next        ) ;
  nMemberCopy ( bucket , Tag         ) ;
  nMemberCopy ( bucket , Name        ) ;
  nMemberCopy ( bucket , Value       ) ;
  nMemberCopy ( bucket , Index       ) ;
  nMemberCopy ( bucket , Precision   ) ;
  nMemberCopy ( bucket , Class       ) ;
  nMemberCopy ( bucket , Association ) ;
  return ME                            ;
}
