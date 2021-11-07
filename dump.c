#define luaT_typenames 0x04603E8
void main()
{
	// Simple ASLR for internal exploits.
	uintptr_t typenames = Utils::Rebase::IDA(luaT_typenames);
	int MemI = 0;
	while(true)
	{
		/* If the array holds no more values */
		if(*(uintptr_t*)(typenames + MemI) == NULL)
			break;
		printf("> [%d] %s\n", MemI / 4, *(const char**)(typenames + MemI));
		MemI += 4; // Memory spacing between each array element.
	}
}
