#pragma once

#ifdef __linux__

#include "../Common/Types.h"

#else

#include "..\Common\Types.h"

#endif

#include <string>

class CommandLine {

	public:
		static const u_byte MAX_NUM_TOKENS = 50;
		CommandLine ( const u_byte argc, const char **argv );
		void PrintTokens ();
		inline u_byte GetNumTokens () { return tokc; }
		inline std::string GetAppName () { return appName; }
		inline std::string* GetTokens () { return tokens; }

		virtual ~CommandLine ();

	private:
		u_byte		tokc;
		std::string	appName;
		std::string	tokens[MAX_NUM_TOKENS];

};
