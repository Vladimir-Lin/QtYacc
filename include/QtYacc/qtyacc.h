/****************************************************************************
 *                                                                          *
 * Copyright (C) 2015 Neutrino International Inc.                           *
 *                                                                          *
 * Author : Brian Lin <lin.foxman@gmail.com>, Skype: wolfram_lin            *
 *                                                                          *
 ****************************************************************************/

#ifndef QT_YACC_H
#define QT_YACC_H

#include <QtCore>
#include <QtNetwork>
#include <QtSql>
#include <QtScript>
#include <Essentials>

QT_BEGIN_NAMESPACE

#ifndef QT_STATIC
#    if defined(QT_BUILD_QTYACC_LIB)
#      define Q_YACC_EXPORT Q_DECL_EXPORT
#    else
#      define Q_YACC_EXPORT Q_DECL_IMPORT
#    endif
#else
#    define Q_YACC_EXPORT
#endif
namespace N {

class Q_YACC_EXPORT YaccOutput     ;
class Q_YACC_EXPORT YaccBucket     ;
class Q_YACC_EXPORT YaccCore       ;
class Q_YACC_EXPORT YaccShifts     ;
class Q_YACC_EXPORT YaccReductions ;
class Q_YACC_EXPORT YaccAction     ;
class Q_YACC_EXPORT YaccParam      ;
class Q_YACC_EXPORT YaccHelp       ;
class Q_YACC_EXPORT Yacc           ;

/*****************************************************************************
 *                                                                           *
 *                            YACC Interpreter                               *
 *                                                                           *
 *****************************************************************************/

#define YACC_TOKEN 0
#define YACC_LEFT 1
#define YACC_RIGHT 2
#define YACC_NONASSOC 3
#define YACC_MARK 4
#define YACC_TEXT 5
#define YACC_TYPE 6
#define YACC_START 7
#define YACC_UNION 8
#define YACC_IDENT 9
#define YACC_EXPECT 10
#define YACC_EXPECT_RR 11
#define YACC_PURE_PARSER 12
#define YACC_PARSE_PARAM 13
#define YACC_LEX_PARAM 14
#define YACC_POSIX_YACC 15

/*  symbol classes  */

#define YACC_UNKNOWN 0
#define YACC_TERM 1
#define YACC_NONTERM 2

/*  the undefined value  */

#define YACC_UNDEFINED (-1)

/*  action codes  */

#define YACC_SHIFT 1
#define YACC_REDUCE 2

class Q_YACC_EXPORT YaccOutput
{
  public:

    explicit YaccOutput     (void) ;
             YaccOutput     (const YaccOutput & yacc) ;
    virtual ~YaccOutput     (void) ;

    YaccOutput & operator = (const YaccOutput & yacc) ;

  protected:

  private:

};

class Q_YACC_EXPORT YaccBucket
{
  public:

    YaccBucket * Link        ;
    YaccBucket * Next        ;
    char       * Tag         ;
    QString      Name        ;
    short        Value       ;
    short        Index       ;
    short        Precision   ;
    char         Class       ;
    char         Association ;

    explicit YaccBucket     (void) ;
    explicit YaccBucket     (QString name) ;
             YaccBucket     (const YaccBucket & bucket) ;
    virtual ~YaccBucket     (void) ;

    YaccBucket & operator = (const YaccBucket & bucket) ;

  protected:

  private:

};

class Q_YACC_EXPORT YaccCore
{
  public:

    YaccCore * Link            ;
    YaccCore * Next            ;
    short      Number          ;
    short      AccessingSymbol ;
    short      Total           ;
    short    * Items           ;

    explicit YaccCore     (void) ;
             YaccCore     (const YaccCore & core) ;
    virtual ~YaccCore     (void) ;

    YaccCore & operator = (const YaccCore & core) ;

  protected:

  private:

};

class Q_YACC_EXPORT YaccShifts
{
  public:

    YaccShifts * Next   ;
    short        Number ;
    short        Total  ;
    short      * Shifts ;

    explicit YaccShifts     (void) ;
             YaccShifts     (const YaccShifts & shifts) ;
    virtual ~YaccShifts     (void) ;

    YaccShifts & operator = (const YaccShifts & shifts) ;

  protected:

  private:

};

class Q_YACC_EXPORT YaccReductions
{
  public:

    YaccReductions * Next   ;
    short            Number ;
    short            Total  ;
    short          * Rules  ;

    explicit YaccReductions     (void) ;
             YaccReductions     (const YaccReductions & reductions) ;
    virtual ~YaccReductions     (void) ;

    YaccReductions & operator = (const YaccReductions & reductions) ;

  protected:

  private:

};

class Q_YACC_EXPORT YaccAction
{
  public:

    YaccAction * Next        ;
    short        Symbol      ;
    short        Number      ;
    short        Precision   ;
    char         Code        ;
    char         Association ;
    char         Suppressed  ;

    explicit YaccAction     (void) ;
             YaccAction     (const YaccAction & action) ;
    virtual ~YaccAction     (void) ;

    YaccAction & operator = (const YaccAction & action) ;

  protected:

  private:

};

class Q_YACC_EXPORT YaccParam
{
  public:

    YaccParam * Next  ;
    char      * name  ;
    char      * type  ;
    char      * type2 ;

    explicit YaccParam     (void) ;
             YaccParam     (const YaccParam & param) ;
    virtual ~YaccParam     (void) ;

    YaccParam & operator = (const YaccParam & param) ;

  protected:

  private:

};

class Q_YACC_EXPORT YaccHelp
{
  public:

    explicit YaccHelp    (void) ;
             YaccHelp    (const YaccHelp & help) ;
    virtual ~YaccHelp    (void) ;

    YaccHelp & operator = (const YaccHelp & help) ;

  protected:

  private:

};

class Q_YACC_EXPORT Yacc
{
  public:

    explicit Yacc     (void) ;
             Yacc     (const Yacc & yacc) ;
    virtual ~Yacc     (void) ;

    Yacc & operator = (const Yacc & yacc) ;

  protected:

    void TransitiveClosure          ( unsigned * R , int n ) ;
    void ReflexiveTransitiveClosure ( unsigned * R , int n ) ;

  private:

};

}

Q_DECLARE_METATYPE(N::YaccOutput)
Q_DECLARE_METATYPE(N::YaccBucket)
Q_DECLARE_METATYPE(N::YaccCore)
Q_DECLARE_METATYPE(N::YaccShifts)
Q_DECLARE_METATYPE(N::YaccReductions)
Q_DECLARE_METATYPE(N::YaccAction)
Q_DECLARE_METATYPE(N::YaccParam)
Q_DECLARE_METATYPE(N::YaccHelp)
Q_DECLARE_METATYPE(N::Yacc)

QT_END_NAMESPACE

#endif
