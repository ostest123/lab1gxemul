OUTPUT_ARCH(mips)

ENTRY(_start)

SECTIONS
{
	. =0x80001000;
	.text :{
		*(.init)
		*(.text)
		*(.fini)
	}
	. =0x00004000;
	.data : {*(.data)}
	.bss  : {*(.bss)}
/*To do:
  fill in the correct address of the key section
  such as text data bss ...
*/

}
