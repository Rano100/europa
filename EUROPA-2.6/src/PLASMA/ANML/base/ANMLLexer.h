/** \file
 *  This C header file was generated by $ANTLR version 3.1.2
 *
 *     -  From the grammar source file : ANML/base/antlr/ANML.g
 *     -                            On : 2011-08-19 15:00:53
 *     -                 for the lexer : ANMLLexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer ANMLLexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pANMLLexer, which is returned from a call to ANMLLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pANMLLexer are  as follows:
 *
 *  -  void      pANMLLexer->Boolean(pANMLLexer)
 *  -  void      pANMLLexer->Integer(pANMLLexer)
 *  -  void      pANMLLexer->Float(pANMLLexer)
 *  -  void      pANMLLexer->Symbol(pANMLLexer)
 *  -  void      pANMLLexer->String(pANMLLexer)
 *  -  void      pANMLLexer->Object(pANMLLexer)
 *  -  void      pANMLLexer->Vector(pANMLLexer)
 *  -  void      pANMLLexer->NotLog(pANMLLexer)
 *  -  void      pANMLLexer->AndLog(pANMLLexer)
 *  -  void      pANMLLexer->OrLog(pANMLLexer)
 *  -  void      pANMLLexer->XorLog(pANMLLexer)
 *  -  void      pANMLLexer->EqualLog(pANMLLexer)
 *  -  void      pANMLLexer->Implies(pANMLLexer)
 *  -  void      pANMLLexer->NotBit(pANMLLexer)
 *  -  void      pANMLLexer->AndBit(pANMLLexer)
 *  -  void      pANMLLexer->OrBit(pANMLLexer)
 *  -  void      pANMLLexer->XorBit(pANMLLexer)
 *  -  void      pANMLLexer->Times(pANMLLexer)
 *  -  void      pANMLLexer->Divide(pANMLLexer)
 *  -  void      pANMLLexer->Plus(pANMLLexer)
 *  -  void      pANMLLexer->Minus(pANMLLexer)
 *  -  void      pANMLLexer->Equal(pANMLLexer)
 *  -  void      pANMLLexer->NotEqual(pANMLLexer)
 *  -  void      pANMLLexer->LessThan(pANMLLexer)
 *  -  void      pANMLLexer->LessThanE(pANMLLexer)
 *  -  void      pANMLLexer->GreaterThan(pANMLLexer)
 *  -  void      pANMLLexer->GreaterThanE(pANMLLexer)
 *  -  void      pANMLLexer->SetAssign(pANMLLexer)
 *  -  void      pANMLLexer->Assign(pANMLLexer)
 *  -  void      pANMLLexer->Consume(pANMLLexer)
 *  -  void      pANMLLexer->Produce(pANMLLexer)
 *  -  void      pANMLLexer->Use(pANMLLexer)
 *  -  void      pANMLLexer->Lend(pANMLLexer)
 *  -  void      pANMLLexer->Change(pANMLLexer)
 *  -  void      pANMLLexer->When(pANMLLexer)
 *  -  void      pANMLLexer->Else(pANMLLexer)
 *  -  void      pANMLLexer->Exists(pANMLLexer)
 *  -  void      pANMLLexer->ForAll(pANMLLexer)
 *  -  void      pANMLLexer->With(pANMLLexer)
 *  -  void      pANMLLexer->Within(pANMLLexer)
 *  -  void      pANMLLexer->Contains(pANMLLexer)
 *  -  void      pANMLLexer->Constant(pANMLLexer)
 *  -  void      pANMLLexer->Fluent(pANMLLexer)
 *  -  void      pANMLLexer->Function(pANMLLexer)
 *  -  void      pANMLLexer->Predicate(pANMLLexer)
 *  -  void      pANMLLexer->Variable(pANMLLexer)
 *  -  void      pANMLLexer->Type(pANMLLexer)
 *  -  void      pANMLLexer->Action(pANMLLexer)
 *  -  void      pANMLLexer->Fact(pANMLLexer)
 *  -  void      pANMLLexer->Goal(pANMLLexer)
 *  -  void      pANMLLexer->Decomposition(pANMLLexer)
 *  -  void      pANMLLexer->Ordered(pANMLLexer)
 *  -  void      pANMLLexer->Unordered(pANMLLexer)
 *  -  void      pANMLLexer->Delta(pANMLLexer)
 *  -  void      pANMLLexer->Undefined(pANMLLexer)
 *  -  void      pANMLLexer->All(pANMLLexer)
 *  -  void      pANMLLexer->Start(pANMLLexer)
 *  -  void      pANMLLexer->End(pANMLLexer)
 *  -  void      pANMLLexer->Duration(pANMLLexer)
 *  -  void      pANMLLexer->Infinity(pANMLLexer)
 *  -  void      pANMLLexer->True(pANMLLexer)
 *  -  void      pANMLLexer->False(pANMLLexer)
 *  -  void      pANMLLexer->INT(pANMLLexer)
 *  -  void      pANMLLexer->FLOAT(pANMLLexer)
 *  -  void      pANMLLexer->STRING(pANMLLexer)
 *  -  void      pANMLLexer->ID(pANMLLexer)
 *  -  void      pANMLLexer->ESC(pANMLLexer)
 *  -  void      pANMLLexer->LETTER(pANMLLexer)
 *  -  void      pANMLLexer->DIGIT(pANMLLexer)
 *  -  void      pANMLLexer->WS(pANMLLexer)
 *  -  void      pANMLLexer->SLC(pANMLLexer)
 *  -  void      pANMLLexer->MLC(pANMLLexer)
 *  -  void      pANMLLexer->Dot(pANMLLexer)
 *  -  void      pANMLLexer->Dots(pANMLLexer)
 *  -  void      pANMLLexer->Comma(pANMLLexer)
 *  -  void      pANMLLexer->Semi(pANMLLexer)
 *  -  void      pANMLLexer->Colon(pANMLLexer)
 *  -  void      pANMLLexer->LeftP(pANMLLexer)
 *  -  void      pANMLLexer->RightP(pANMLLexer)
 *  -  void      pANMLLexer->LeftC(pANMLLexer)
 *  -  void      pANMLLexer->RightC(pANMLLexer)
 *  -  void      pANMLLexer->LeftB(pANMLLexer)
 *  -  void      pANMLLexer->RightB(pANMLLexer)
 *  -  void      pANMLLexer->Undefine(pANMLLexer)
 *  -  void      pANMLLexer->Skip(pANMLLexer)
 *  -  void      pANMLLexer->Tokens(pANMLLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_ANMLLexer_H
#define _ANMLLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#include "AnmlInterpreter.hh" 

using namespace EUROPA;

 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct ANMLLexer_Ctx_struct ANMLLexer, * pANMLLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for ANMLLexer
 */
struct ANMLLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mBoolean)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mInteger)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mFloat)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mSymbol)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mString)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mObject)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mVector)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mNotLog)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mAndLog)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mOrLog)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mXorLog)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mEqualLog)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mImplies)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mNotBit)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mAndBit)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mOrBit)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mXorBit)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mTimes)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mDivide)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mPlus)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mMinus)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mEqual)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mNotEqual)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mLessThan)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mLessThanE)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mGreaterThan)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mGreaterThanE)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mSetAssign)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mAssign)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mConsume)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mProduce)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mUse)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mLend)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mChange)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mWhen)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mElse)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mExists)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mForAll)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mWith)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mWithin)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mContains)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mConstant)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mFluent)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mFunction)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mPredicate)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mVariable)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mType)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mAction)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mFact)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mGoal)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mDecomposition)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mOrdered)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mUnordered)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mDelta)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mUndefined)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mAll)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mStart)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mEnd)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mDuration)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mInfinity)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mTrue)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mFalse)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mINT)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mFLOAT)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mSTRING)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mID)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mESC)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mLETTER)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mDIGIT)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mWS)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mSLC)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mMLC)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mDot)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mDots)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mComma)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mSemi)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mColon)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mLeftP)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mRightP)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mLeftC)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mRightC)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mLeftB)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mRightB)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mUndefine)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mSkip)	(struct ANMLLexer_Ctx_struct * ctx);
     void (*mTokens)	(struct ANMLLexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct ANMLLexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pANMLLexer ANMLLexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pANMLLexer ANMLLexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define IndefinitePoint      31
#define LessThan      61
#define Ket      33
#define Implies      100
#define OrBit      107
#define AndLog      103
#define TDuration      41
#define Stmts      11
#define LETTER      134
#define Before      34
#define Fluents      7
#define Constants      6
#define Bind      18
#define After      36
#define DefinitePoint      29
#define XorLog      101
#define Lend      91
#define LabelRef      16
#define Actions      8
#define EOF      -1
#define LessThanE      129
#define ProblemStmts      12
#define AndBit      110
#define Variable      71
#define NotLog      79
#define ForAll      86
#define When      53
#define TEnd      40
#define NotBit      80
#define Access      19
#define Undefined      74
#define Use      92
#define ContainsAllExpr      48
#define ExistsExpr      51
#define Decompositions      14
#define ForAllStmt      50
#define This      58
#define ContainsSomeExpr      47
#define TimedStmt      43
#define DefiniteInterval      28
#define INT      121
#define Colon      99
#define Action      26
#define NotEqual      127
#define TimedExpr      44
#define Equal      82
#define Fluent      21
#define With      63
#define Object      120
#define Block      13
#define Float      117
#define LeftC      64
#define Range      56
#define Minus      106
#define WS      135
#define Semi      60
#define LeftB      66
#define Function      72
#define Times      108
#define OrLog      102
#define MLC      137
#define ExistsStmt      52
#define TBra      37
#define IndefiniteInterval      30
#define Else      85
#define Label      27
#define ForAllExpr      49
#define Types      5
#define End      114
#define Parameters      9
#define Fact      78
#define Unordered      111
#define Undefine      75
#define Within      93
#define LeftP      69
#define ESC      133
#define All      97
#define TStart      39
#define SLC      136
#define Decomposition      77
#define False      125
#define GreaterThanE      130
#define Constant      23
#define FLOAT      122
#define Enum      55
#define ID      57
#define GreaterThan      128
#define Consume      90
#define Arguments      10
#define Assign      62
#define Change      88
#define ANML      4
#define Chain      42
#define TypeRef      15
#define Produce      89
#define WhenElse      54
#define Ordered      112
#define ConstantFunction      24
#define Bra      32
#define Exists      87
#define Symbol      118
#define String      119
#define DIGIT      131
#define Predicate      73
#define ContainsSomeStmt      45
#define True      124
#define Vector      68
#define RightP      70
#define Start      113
#define Type      20
#define At      35
#define Delta      96
#define XorBit      104
#define Contains      84
#define TKet      38
#define ContainsAllStmt      46
#define RightC      65
#define RightB      67
#define SetAssign      94
#define Duration      76
#define Divide      109
#define Parameter      25
#define Goal      83
#define Ref      17
#define Skip      95
#define Plus      105
#define Boolean      115
#define Dot      132
#define EqualLog      81
#define Dots      98
#define Infinity      126
#define Comma      59
#define Integer      116
#define STRING      123
#define FluentFunction      22
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for ANMLLexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
