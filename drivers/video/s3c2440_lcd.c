
#include <common.h>
#include <lcd.h>
#include <linux/types.h>

typedef struct vidinfo {
	ushort	vl_col;		/* Number of columns (i.e. 160) */
	ushort	vl_row;		/* Number of rows (i.e. 100) */
	ushort	vl_rot;		/* Rotation of Display (0, 1, 2, 3) */
	u_char	vl_bpix;	/* Bits per pixel, 0 = 1 */
	ushort	*cmap;		/* Pointer to the colormap */
	void	*priv;		/* Pointer to driver-specific data */
} vidinfo_t;


vidinfo_t panel_info = {
	.vl_col		= 640,
	.vl_row		= 480,
	.vl_width	= 640,
	.vl_height	= 480,
	.vl_clkp	= CONFIG_SYS_HIGH,
	.vl_oep		= CONFIG_SYS_HIGH,
	.vl_hsp		= CONFIG_SYS_HIGH,
	.vl_vsp		= CONFIG_SYS_HIGH,
	.vl_dp		= CONFIG_SYS_HIGH,
	.vl_bpix	= LCD_BPP,
};



int lcd_ctrl_init(void)
{
	
}

void lcd_enable(void)
{

}













