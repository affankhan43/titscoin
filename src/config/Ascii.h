// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =

          "\n   _____ _______ _____  ______ ______ __  __ _____ ______ \n"
            "  / ____|__   __|  __ \|  ____|  ____|  \/  |_   _|  ____|\n"
            " | (___    | |  | |__) | |__  | |__  | \  / | | | | |__   \n"
            "  \___ \   | |  |  _  /|  __| |  __| | |\/| | | | |  __|  \n"
            "  ____) |  | |  | | \ \| |____| |____| |  | |_| |_| |____ \n"
            " |_____/   |_|  |_|  \_\______|______|_|  |_|_____|______|\n";



const std::string nonWindowsAsciiArt = 
      
         "\n███████╗████████╗██████╗ ███████╗███████╗███╗   ███╗██╗███████╗\n"
           "██╔════╝╚══██╔══╝██╔══██╗██╔════╝██╔════╝████╗ ████║██║██╔════╝\n"
           "███████╗   ██║   ██████╔╝█████╗  █████╗  ██╔████╔██║██║█████╗  \n"
           "╚════██║   ██║   ██╔══██╗██╔══╝  ██╔══╝  ██║╚██╔╝██║██║██╔══╝  \n"
           "███████║   ██║   ██║  ██║███████╗███████╗██║ ╚═╝ ██║██║███████╗\n"
           "╚══════╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚══════╝╚═╝     ╚═╝╚═╝╚══════╝\n"
           "\n                                                              \n";


/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
