
#ifdef VERSION_STRING
	#define VER     " "VERSION_STRING
#else
	#define VER     ""
#endif


const char Version[]      = AUTHOR_STRING VER;
const char UART_Version[] = "CeruleanMod, Open Edition, " AUTHOR_STRING VER "\r\n";

