
/***
@title 	Variable and Function Naming Conventions:
@source http://users.ece.cmu.edu/~eno/coding/CCodingStandard.html

-------------------------------------------------------------------------------------------------------

@begin
	@subpart Variable Naming and Declaration
	- global variables should be prepended with a 'g_'
	- pointer variables should be prepended with a 'p' before the variable name
	- alternatively, arrays should be prepended with a 'p' as in the previous case
	- declare one variable per line at a time (this also gives the opportunity for documentation
	- global constants should be defined with a 'g_const_' header, and its name should be all CAPS
	  (alternatively, if it is a static variable, it should instead be 's_const_')
	- static variables (existing only within a file) should be prepended with an 's_' instead of a 'g_'
	- flags will be prepended with an 'x', regardless of it being global or static
	- typedef struct/enums: t_ (for struct), E_ (for enum), followed by the name, and members of enum 
	  will have <name>_<identifier>
	
	@example Examples:
	- one line one variable declaration example
				do not do:
			>> uint16_t SurfaceTemp, Distance;
				but do:
			>> uint16_t SurfaceTemp;						// TODO: Insert description for SurfaceTemp variable
			>> uint16_t Distance;							// TODO: Insert description for Distance variable
	- global variable declaration example
			>> uint_fast32_t 	g_ClockSpeed;				// variable holding mcu clock speed
			>> uint8_t 		 	g_pTxBuffer[10]; 			// array variable that holds the transmit buffer
			>> uint8_t 			g_const_I2C_MSG_LENGTH;		// global const variable
	- static variable declaration example
			>> uint16_t s_pRxBuffer[5];						// Static and pointer/array variable
			>> uint16_t s_const_pCOMMANDBUFFER[5];			// Static, const, and pointer/array variable
	- flags declaration example
			>> static FlagStatus	xPerformTransmit;
			>> FlagStatus			xCommandReceived;
	- typedef struct declaration:
			>> typedef struct
			>> {
			>>		...
			>>		...
			>> } t_AppState;
	- enum declaration and member declaration:
			>> typedef enum {
			>>		RXIRQSOURCE_COMMAND 	= 0x00,
			>>		RXIRQSOURCE_MESSAGE 	= 0x11,
			>> 		RXIRQSOURCE_NOSOURCE 	= 0x22,
			>> } E_RxIrqSource;
@end

@begin
	@subpart Function Naming
	- Functions should indicate which peripheral/sensor it is related to
	- Functions that return nothing should start with a 'v'	
	- Functions that return a value should start with an 'x'

	@example Function Naming Examples
	- indication of which peripheral/sensor it is driving
			>> xMlx_Initialize()		// should initialize the Melexis IR Thermometer
			>> vMotor_ResetPos()		// should reset motor position but not return anything
@end


***/