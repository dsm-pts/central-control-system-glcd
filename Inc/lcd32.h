

#define u16 uint16_t
#define u8 uint8_t
#define u32 uint32_t


void bsp_lcd32_init(void);
void lcd32_writeram_prepare(void);
void lcd32_setcursor (u16 Xpos, u16 Ypos);
void lcd32_clear_screen(unsigned int color);
void lcd32_draw_point(u16 x, u16 y);
void lcd32_draw_point_with_color(u16 x, u16 y, unsigned int color);
void lcd32_fill_color(u8 xsta, u16 ysta, u8 xend, u16 yend, u16 color);
void lcd32_draw_line(u16 x1, u16 y1, u16 x2, u16 y2);
void lcd32_draw_rectangle(u8 x1, u16 y1, u8 x2, u16 y2);
void lcd32_draw_circle(u8 x0, u16 y0, u8 r);
void lcd32_show_char (u8 x, u16 y, u8 num, u8 size, u8 mode);
void lcd32_show_num(u8 x, u16 y, u32 num, u8 len, u8 size);
void lcd32_show_string (u8 x, u16 y, const u8 *p);
void lcd32_draw_point_big(u16 x,u16 y);

void LCD_DrawRect(u8 type, u16 x1, u16 y1, u16 x2, u16 y2, u16 color);

void lcd32_background_image(void);

void lcd32_print_TimeFont(u16 x, u16 y, u16 c, unsigned int color);
void lcd32_print_TimeFonts(u8 x, u16 y, const u16 *p, unsigned int color);
void lcd32_print_TimeFonts_ascii(u8 x, u16 y, const u8 *p, unsigned int color);
	 



