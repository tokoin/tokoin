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

void HelpMap()
{
 	FILE* dest = stderr;
	
	fprintf(dest, "tokoin: [options] file\n");
	fprintf(dest, "	  -h	Shows this help map\n");
	fprintf(dest, "   -v    Shows version of tokoin\n");
	fprintf(dest, "   -g    Start gui\n");
	
	exit(1);
}

void LoadWallet(char* path)
{

}

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		std::cerr << "Invalid arguments!" << std::endl;
		HelpMap();
	}

	int i;
	bool launch_gui = false;
	while (i < argc)
	{
		if (argv[i][0] == "-")
		{
			switch (argv[i][1])
			{
			case 'g':
				/*
				 * Open program in GUI
				*/
				launch_gui = true;
				break;
			case 'h':
				/*
				 * Shows the help map
				*/
				HelpMap();
				break;
			case 'v':
				/*
				 * Shows the version
				*/
				printf("Tokoin Version: %s\n", TK_VERSION);
				break;

			default:
				goto invalid_arg;
			}
		}
		i++;
	}

invalid_arg:
	HelpMap();
	std:cerr << "Invalid argument: '-" << argv[i][1] << "'";
	return 1;	

	return 0;
}


