#ifndef INC_TokenStreamIOException_hpp__
#define INC_TokenStreamIOException_hpp__

/* ANTLR Translator Generator
 * Project led by Terence Parr at http://www.jGuru.com
 * Software rights: http://www.antlr.org/license.html
 *
 * $Id: TokenStreamIOException.hpp,v 1.1 2006-12-19 05:30:12 meboyce Exp $
 */

#include <antlr/config.hpp>
#include <antlr/TokenStreamException.hpp>

#ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
namespace antlr {
#endif

class TokenStreamIOException : public TokenStreamException {
public:
	TokenStreamIOException()
	: TokenStreamException()	
	{
	}
	TokenStreamIOException(const ANTLR_USE_NAMESPACE(std)exception& e)
	: TokenStreamException(e.what())
	, io(e)
	{
	}
	~TokenStreamIOException() throw()
	{
	}
private:
	ANTLR_USE_NAMESPACE(std)exception io;
};

#ifdef ANTLR_CXX_SUPPORTS_NAMESPACE
}
#endif

#endif //INC_TokenStreamIOException_hpp__
