// SPDX-License-Identifier: MIT
/*
 * Copyright (C) 2022  Leonard Steinhoff. All rights reserved.
 * Licensed under MIT
 *
 *
 * You should find a copy of the license in 'LICENSE', if you don't
 * you can get it on: 
 *
 * <https://www.opensource.org/licenses/mit>
 *
*/

#include <iostream>
#include <memory>


//
// Top level defines
//
extern char** environ;
//
// END
//

void HelpMap(FILE* dest)
{
	fprintf(dest, "tokoin: [options] file\n");
	fprintf(dest, "	  -h	Shows this help map\n");
	fprintf(dest, "   -v    Shows version of tokoin\n");
	fprintf(dest, "   -g    Start gui\n");
	
	dest == stderr ? exit(1) : exit(0);
}

int ParseArgs(int argc, char* argv[])
{
	int i=1;	
	while (i < argc)
	{
		if (argv[i][0] != '-')
		{
			fprintf(stderr, "Invalid argument: %s", argv[i]);
			HelpMap(stderr);
			return 1;
		}
		i++;
	}
}

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cerr << "Invalid arguments!" << std::endl;
		HelpMap(stderr);
	}

	ParseArgs( argc, argv );

	return 0;
}


