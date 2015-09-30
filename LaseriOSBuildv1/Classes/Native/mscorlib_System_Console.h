#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t1057;
// System.IO.TextReader
struct TextReader_t1163;
// System.Text.Encoding
struct Encoding_t589;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t1056  : public Object_t
{
};
struct Console_t1056_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t1057 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t1057 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1163 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t589 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t589 * ___outputEncoding_4;
};
