// link: https://stackoverflow.com/questions/61183853/shutting-down-and-restarting-pc-via-c-in-wsl
 
std::system("/mnt/c/Windows/System32/shutdown.exe /i");

std::system("/mnt/c/Windows/System32/shutdown.exe /s"); 

std::system("/mnt/c/Windows/System32/shutdown.exe /r");
