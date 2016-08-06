#include "CommandLine.h"
#include <stdio.h>
#include <iostream>

CommandLine::CommandLine ( const u_byte argc, const char **argv ) {
	tokc = argc - 1;
	appName = argv[0];
	for ( u_byte i = 0; i < tokc; i++ ) {
		tokens[i] = argv[i + 1];
	}
}

void CommandLine::PrintTokens () {
	for ( u_byte i = 0; i < tokc; i++ ) {
		printf( "tokens[%d] = %s\n", i, tokens[i].c_str() );
	}
}

CommandLine::~CommandLine () {
	printf( "CommandLine deleted...\n" );
}
