/*****************************************************************/ /**
                                                                     * @file main_video_test.cpp
                                                                     *
                                                                     * @brief Basic test of 4 basic i/o cores
                                                                     *
                                                                     * @author p chu
                                                                     * @version v1.0: initial release
                                                                     *
                                                                     *********************************************************************/

// #define _DEBUG
#include "chu_init.h"
#include "gpio_cores.h"
#include "vga_core.h"
#include "sseg_core.h"
#include "ddfs_core.h"
#include "ps2_core.h"
#include <string.h>

void init_writing(OsdCore *osd_p, int ver)
{
    // WELCOME TO HANGMAN
    //    osd_p->wr_char(x, y, ch, reverse)
    osd_p->set_color(0x0f0, 0x000);
    osd_p->wr_char(24, 5, 87, 0); // 57 = W
    osd_p->wr_char(26, 5, 69, 0); // 69 = E
    osd_p->wr_char(28, 5, 76, 0); // L
    osd_p->wr_char(30, 5, 67, 0); // C
    osd_p->wr_char(32, 5, 79, 0); // O
    osd_p->wr_char(34, 5, 77, 0); // M
    osd_p->wr_char(36, 5, 69, 0); // E
    osd_p->wr_char(40, 5, 84, 0); // T
    osd_p->wr_char(42, 5, 79, 0); // O
    osd_p->wr_char(46, 5, 72, 0); // H
    osd_p->wr_char(48, 5, 65, 0); // A
    osd_p->wr_char(50, 5, 78, 0); // N
    osd_p->wr_char(52, 5, 71, 0); // G
    osd_p->wr_char(54, 5, 77, 0); // M
    osd_p->wr_char(56, 5, 65, 0); // A
    osd_p->wr_char(58, 5, 78, 0); // N

    // question display
    if (ver == 0) //microblaze
    {
        osd_p->wr_char(30, 20, 95, 0); // _ m
        osd_p->wr_char(32, 20, 95, 0); // _i
        osd_p->wr_char(34, 20, 95, 0); // _
        osd_p->wr_char(36, 20, 95, 0); // _
        osd_p->wr_char(38, 20, 95, 0); // _
        osd_p->wr_char(40, 20, 95, 0); // _
        osd_p->wr_char(42, 20, 95, 0); // _
        osd_p->wr_char(44, 20, 95, 0); // _
        osd_p->wr_char(46, 20, 95, 0); // _
        osd_p->wr_char(48, 20, 95, 0); // _
    }
    else if (ver ==1 ) //verilog
    {
        osd_p->wr_char(30, 20, 95, 0); // _ V
        osd_p->wr_char(32, 20, 95, 0); // _ E
        osd_p->wr_char(34, 20, 95, 0); // _ R
        osd_p->wr_char(36, 20, 95, 0); // _ I
        osd_p->wr_char(38, 20, 95, 0); // _ L
        osd_p->wr_char(40, 20, 95, 0); // _ O
        osd_p->wr_char(42, 20, 95, 0); // _ G
    }

    osd_p->wr_char(5, 13, 87, 0);  //  = W
    osd_p->wr_char(7, 13, 82, 0);  //  = R
    osd_p->wr_char(9, 13, 79, 0);  //  = O
    osd_p->wr_char(11, 13, 78, 0); //  = N
    osd_p->wr_char(13, 13, 71, 0); //  = G
}
void wrong_writer(OsdCore *osd_p, char guess, int lives)
{

    int location = 8 - lives;
    int ascii = (int)guess;
    int y = 15;
    int x = 0;
    ascii = ascii > 90 ? ascii - 32 : ascii;
    y = (lives <= 3) ? 16 : 15;
    x = (lives <= 3) ? (3 + (2 * (location - 3))) : 3 + (2 * location);
    osd_p->wr_char(x, y, ascii, 0);
}
void ans_display(OsdCore *osd_p, int i, int ver)
{

    osd_p->set_color(0x0f0, 0x000);
    if (ver == 0)
    {
        switch (i)
        {
        case 1:
            osd_p->wr_char(30, 20, 77, 0); // M
            break;
        case 2:
            osd_p->wr_char(32, 20, 105, 0); // i
            break;
        case 3:
            osd_p->wr_char(34, 20, 99, 0); // c
            break;
        case 4:
            osd_p->wr_char(36, 20, 114, 0); // r
            break;
        case 5:
            osd_p->wr_char(38, 20, 111, 0); // O
            break;
        case 6:
            osd_p->wr_char(40, 20, 98, 0); // b
            break;
        case 7:
            osd_p->wr_char(42, 20, 108, 0); // l
            break;
        case 8:
            osd_p->wr_char(44, 20, 97, 0); // a
            break;
        case 9:
            osd_p->wr_char(46, 20, 122, 0); // z
            break;
        case 10:
            osd_p->wr_char(48, 20, 101, 0); // e
            break;

        default:
            break;
        }
    }
    else if (ver == 1)
    {
        switch (i)
        {
        case 1:
            osd_p->wr_char(30, 20, 86, 0); // V
            break;
        case 2:
            osd_p->wr_char(32, 20, 101, 0); // e
            break;
        case 3:
            osd_p->wr_char(34, 20, 114, 0); // r
            break;
        case 4:
            osd_p->wr_char(36, 20, 105, 0); // i
            break;
        case 5:
            osd_p->wr_char(38, 20, 108, 0); // l
            break;
        case 6:
            osd_p->wr_char(40, 20, 111, 0); // o
            break;
        case 7:
            osd_p->wr_char(42, 20, 103, 0); // g
            break;
        default:
            break;
        }
    }
}

void test_start(GpoCore *led_p)
{
    int i;

    for (i = 0; i < 20; i++)
    {
        led_p->write(0xff00);
        sleep_ms(50);
        led_p->write(0x0000);
        sleep_ms(50);
    }
}

/**
 * check bar generator core
 * @param bar_p pointer to Gpv instance
 */
void bar_check(GpvCore *bar_p)
{
    bar_p->bypass(0);
    sleep_ms(3000);
}

/**
 * check color-to-grayscale core
 * @param gray_p pointer to Gpv instance
 */
void gray_check(GpvCore *gray_p)
{
    gray_p->bypass(0);
    sleep_ms(3000);
    gray_p->bypass(1);
}

/**
 * check osd core
 * @param osd_p pointer to osd instance
 */
void osd_check(OsdCore *osd_p)
{
    osd_p->set_color(0x0f0, 0x001); // dark gray/green
    osd_p->bypass(0);
    osd_p->clr_screen();
    for (int i = 0; i < 64; i++)
    {
        osd_p->wr_char(8 + i, 20, i);
        osd_p->wr_char(8 + i, 21, 64 + i, 1);
        sleep_ms(100);
    }
    sleep_ms(3000);
}

/**
 * test frame buffer core
 * @param frame_p pointer to frame buffer instance
 */
void frame_check(FrameCore *frame_p)
{
    int x, y, color;

    frame_p->bypass(0);
    for (int i = 0; i < 10; i++)
    {
        frame_p->clr_screen(0x008); // dark green
        for (int j = 0; j < 20; j++)
        {
            x = rand() % 640;
            y = rand() % 480;
            color = rand() % 512;
            frame_p->plot_line(400, 200, x, y, color);
        }
        sleep_ms(300);
    }
    sleep_ms(3000);
}

/**
 * test ghost sprite
 * @param ghost_p pointer to mouse sprite instance
 */
void mouse_check(SpriteCore *mouse_p)
{
    int x, y;

    // don't bypass = show image
    mouse_p->bypass(0);

    // clear top and bottom lines
    for (int i = 0; i < 32; i++)
    {
        mouse_p->wr_mem(i, 0);
        mouse_p->wr_mem(31 * 32 + i, 0);
    }

    // slowly move mouse pointer
    x = 0;
    y = 0;
    for (int i = 0; i < 80; i++)
    {
        mouse_p->move_xy(x, y);
        sleep_ms(50);
        x = x + 4;
        y = y + 3;
    }
    sleep_ms(3000);
    // load top and bottom rows
    for (int i = 0; i < 32; i++)
    {
        sleep_ms(20);
        mouse_p->wr_mem(i, 0x00f);
        mouse_p->wr_mem(31 * 32 + i, 0xf00);
    }
    sleep_ms(3000);
}

/**
 * test ghost sprite
 * @param ghost_p pointer to ghost sprite instance
 */
void ghost_check(SpriteCore *ghost_p)
{
    int x, y;

    // slowly move mouse pointer
    ghost_p->bypass(0);
    ghost_p->wr_ctrl(0x1c); // animation; blue ghost

    // location
    x = 0;
    y = 100;
    for (int i = 0; i < 156; i++)
    {
        ghost_p->move_xy(x, y);
        sleep_ms(100);
        x = x + 4;
        if (i == 80)
        {
            // change to red ghost half way
            ghost_p->wr_ctrl(0x04);
        }
    }
    sleep_ms(3000);
}

/**
 * test hangman sprite
 * @param ghost_p pointer to ghost sprite instance
 */
void hangman_check(HangmanCore *hangman_p)
{

    // slowly move mouse pointer
    hangman_p->bypass(0);
    hangman_p->wr_ctrl(0x16);
    hangman_p->move_xy(320, 200);
}

void ddfs_check(DdfsCore *ddfs_p, GpoCore *led_p)
{
    int i, j;
    float env;

    // vol = (float)sw.read_pin()/(float)(1<<16),
    ddfs_p->set_env_source(0); // select envelop source
    ddfs_p->set_env(0.0);      // set volume
    sleep_ms(500);
    ddfs_p->set_env(1.0); // set volume
    ddfs_p->set_carrier_freq(262);
    sleep_ms(2000);
    ddfs_p->set_env(0.0); // set volume
    sleep_ms(2000);
    // volume control (attenuation)
    ddfs_p->set_env(0.0); // set volume
    env = 1.0;
    for (i = 0; i < 1000; i++)
    {
        ddfs_p->set_env(env);
        sleep_ms(10);
        env = env / 1.0109; // 1.0109**1024=2**16
    }
    // frequency modulation 635-912 800 - 2000 siren sound
    ddfs_p->set_env(1.0); // set volume
    ddfs_p->set_carrier_freq(635);
    for (i = 0; i < 5; i++)
    { // 10 cycles
        for (j = 0; j < 30; j++)
        {                                    // sweep 30 steps
            ddfs_p->set_offset_freq(j * 10); // 10 Hz increment
            sleep_ms(25);
        } // end j loop
    }     // end i loop
    ddfs_p->set_offset_freq(0);
    ddfs_p->set_env(0.0); // set volume
    sleep_ms(1000);
}
char take_inputs(Ps2Core *ps2_p)
{
    int count = 1;
    char ch;
    char alphabet[53] = {
        'a', 'A',
        'b', 'B',
        'c', 'C',
        'd', 'D',
        'e', 'E',
        'f', 'F',
        'g', 'G',
        'h', 'H',
        'i', 'I',
        'j', 'J',
        'k', 'K',
        'l', 'L',
        'm', 'M',
        'n', 'N',
        'o', 'O',
        'p', 'P',
        'q', 'Q',
        'r', 'R',
        's', 'S',
        't', 'T',
        'u', 'U',
        'v', 'V',
        'w', 'W',
        'x', 'X',
        'y', 'Y',
        'z', 'Z',
        '@'};
    while (count == 1)
    {
        ps2_p->get_kb_ch(&ch);
        for (int i = 0; i < 52; i++)
        {
            if (alphabet[i] == ch)
            {
                if (i % 2 == 1)
                {
                    ch = alphabet[i - 1]; // Normalize all to lowercase
                }
                count--;
                break;
            }
        }
    }
    return ch;
}
void sound_correct(DdfsCore *ddfs_p)
{
    ddfs_p->set_env(1.0); // set volume
    ddfs_p->set_carrier_freq(635);
    ddfs_p->set_offset_freq(150);
    sleep_ms(150);
    ddfs_p->set_offset_freq(300);
    sleep_ms(250);
    ddfs_p->set_offset_freq(0);
    ddfs_p->set_env(0.0); // set volume
}
int word_sel(Ps2Core *ps2_p)
{
    int count = 1;
    int b;
    char ch;
    while (count == 1)
    {
        ps2_p->get_kb_ch(&ch);
        if (ch == '1')
        {
            count--;
            b = 1;
        }
        if (ch == '0')
        {
            count--;
            b = 0;
        }
    }
    return b;
}
void sound_incorrect(DdfsCore *ddfs_p)
{
    ddfs_p->set_env(1.0); // set volume
    ddfs_p->set_carrier_freq(635);
    ddfs_p->set_offset_freq(300);
    sleep_ms(150);
    ddfs_p->set_offset_freq(150);
    sleep_ms(250);
    ddfs_p->set_offset_freq(0);
    ddfs_p->set_env(0.0); // set volume
}
void wrong_display(OsdCore *osd_p, char ch, int num)
{
    osd_p->set_color(0x0f0, 0x000);
    int cur_pos = 54;
    osd_p->wr_char(cur_pos + num, 20, ch, 0); // _
}

void passed(DdfsCore *ddfs_p, OsdCore *osd_p)
{
    osd_p->wr_char(32, 8, 89, 0);
    osd_p->wr_char(34, 8, 79, 0);
    osd_p->wr_char(36, 8, 85, 0);
    osd_p->wr_char(40, 8, 87, 0);
    osd_p->wr_char(42, 8, 73, 0);
    osd_p->wr_char(44, 8, 78, 0);

    ddfs_p->set_env(1.0); // set volume
    ddfs_p->set_carrier_freq(125);
    ddfs_p->set_offset_freq(300);
    sleep_ms(150);
    ddfs_p->set_offset_freq(335);
    sleep_ms(250);
    ddfs_p->set_offset_freq(635);
    sleep_ms(250);
    ddfs_p->set_offset_freq(0);
    ddfs_p->set_env(0.0); // set volume
}

void failed(DdfsCore *ddfs_p, OsdCore *osd_p)
{
    osd_p->wr_char(32, 8, 89, 0);
    osd_p->wr_char(34, 8, 79, 0);
    osd_p->wr_char(36, 8, 85, 0);
    osd_p->wr_char(40, 8, 76, 0);
    osd_p->wr_char(42, 8, 79, 0);
    osd_p->wr_char(44, 8, 83, 0);
    osd_p->wr_char(46, 8, 69, 0);

    ddfs_p->set_env(1.0); // set volume
    ddfs_p->set_carrier_freq(635);
    ddfs_p->set_offset_freq(300);
    sleep_ms(150);
    ddfs_p->set_offset_freq(335);
    sleep_ms(250);
    ddfs_p->set_offset_freq(125);
    sleep_ms(250);
    ddfs_p->set_offset_freq(0);
    ddfs_p->set_env(0.0); // set volume
}
void word_sel_screen(OsdCore *osd_p)
{
    osd_p->set_color(0x0f0, 0x000);
    osd_p->wr_char(24, 5, 83, 0); // 57 = S	// ] DONE
    osd_p->wr_char(26, 5, 69, 0); // 69 = E //DONE
    osd_p->wr_char(28, 5, 76, 0); // L	//DONE
    osd_p->wr_char(30, 5, 69, 0); // E	// DONE
    osd_p->wr_char(32, 5, 67, 0); // C	//  DONE
    osd_p->wr_char(34, 5, 84, 0); // T	// DONE
    osd_p->wr_char(38, 5, 86, 0); // V	//  DONE
    osd_p->wr_char(40, 5, 69, 0); // E	//  DONE
    osd_p->wr_char(42, 5, 82, 0); // R	// DONE
    osd_p->wr_char(44, 5, 83, 0); // S	//  DONE
    osd_p->wr_char(46, 5, 73, 0); // I	//  DONE
    osd_p->wr_char(48, 5, 79, 0); // O	//  DONE
    osd_p->wr_char(50, 5, 78, 0); // N	// DONE
    osd_p->wr_char(24, 7, 80, 0); // P	// DONE
    osd_p->wr_char(26, 7, 82, 0); // R	// DONE
    osd_p->wr_char(28, 7, 69, 0); // E	//  DONE
    osd_p->wr_char(30, 7, 83, 0); // S	//  DONE
    osd_p->wr_char(32, 7, 83, 0); // S	// DONE
    osd_p->wr_char(36, 7, 48, 0); // 0	//  DONE
    osd_p->wr_char(40, 7, 79, 0); // O	// DONE
    osd_p->wr_char(42, 7, 82, 0); // R	// DONE
    osd_p->wr_char(46, 7, 49, 0); // 1	// DONE
}
int init(OsdCore *osd_p, FrameCore *frame_p, HangmanCore *hangman_p,
         SpriteCore *ghost_p, SpriteCore *mouse_p, GpvCore *bar_p, GpvCore *gray_p, Ps2Core *ps2_p)
{
    int a;
    int y = 200;
    int x = 0;
    // Declarations //
    ghost_p->bypass(1);
    mouse_p->bypass(1);
    bar_p->bypass(1);
    gray_p->bypass(1);
    hangman_p->bypass(1); // Bypass hangman for now
    // Bypass Ghost, mouse, bar, gray

    osd_p->bypass(0);           // Need text
    osd_p->clr_screen();        // Clear text
    frame_p->clr_screen(0xfff); // Clear frame buffer
    frame_p->bypass(0);         // Dont bypass

    word_sel_screen(osd_p);     // Word Select Screen
    a = word_sel(ps2_p);        // Return value (1 or 0)
    frame_p->clr_screen(0xfff); // Clear screen again
    osd_p->clr_screen();        // Clear Screen again (text)

    init_writing(osd_p, a);      // Init writing
    hangman_p->bypass(0);        // Need hangman now
    hangman_p->wr_ctrl(0x00);    // Form 0
    for (int i = 0; i < 80; i++) // Move Sprite
    {
        hangman_p->move_xy(x, y);
        sleep_ms(25);
        x = x + 4;
    }
    hangman_p->move_xy(320, 200); // Ensure Centered
    return a;                     // Return Choice (0 or 1)
}

// external core instantiation
GpoCore led(get_slot_addr(BRIDGE_BASE, S2_LED));
GpiCore sw(get_slot_addr(BRIDGE_BASE, S3_SW));
DdfsCore ddfs(get_slot_addr(BRIDGE_BASE, S12_DDFS));
FrameCore frame(FRAME_BASE);
GpvCore bar(get_sprite_addr(BRIDGE_BASE, V7_BAR));
GpvCore gray(get_sprite_addr(BRIDGE_BASE, V6_GRAY));
HangmanCore hangman(get_sprite_addr(BRIDGE_BASE, V5_USER5), 8192);
SpriteCore ghost(get_sprite_addr(BRIDGE_BASE, V3_GHOST), 1024);
SpriteCore mouse(get_sprite_addr(BRIDGE_BASE, V1_MOUSE), 1024);
OsdCore osd(get_sprite_addr(BRIDGE_BASE, V2_OSD));
SsegCore sseg(get_slot_addr(BRIDGE_BASE, S8_SSEG));
Ps2Core ps2(get_slot_addr(BRIDGE_BASE, S11_PS2));

int main()
{
    char word[11];
    char outputList[11] = {"__________"};
    char guesslist[26];
    char word0[11] = {"microblaze"};
    char word1[8] = {"verilog"}; // Two Choices for word

    int lives = 7;
    // ans length
    int len = 10;
    char ch;
    int word_code;
    int hangman_count = 1;
    int listcount = 0;
    int counter;
    bool guessflag = false;
    //    init_writing(&osd);
    word_code = init(&osd, &frame, &hangman, &ghost, &mouse, &bar, &gray, &ps2); // Init.
    if (word_code == 0)
    { // if 0 play microbaze
        strncpy(word, word0, 11);
        counter = 10;
        uart.disp("word = ");
        uart.disp(word);
    }
    else
    { // If 1 play verilog
        strncpy(word, word1, 11);
        counter = 7;
        uart.disp("word = ");
        uart.disp(word);
    }
    while (1)
    {

        ch = take_inputs(&ps2); // Take the imput
        uart.disp("input = ");
        uart.disp(ch);
        // len =10
        // i=0
        for (int i = 0; i < len; i++) // Iterate through the entire word.
        {
            //
            for (int z = 0; z < listcount; z++) // Make sure not in guess list.
            {
                if (guessflag == true)
                    break;
                else if (guesslist[z] == ch)
                {
                    guessflag = true;
                    break;
                }
            }
            // correct
            if (word[i] == ch && guessflag == false)
            {
                outputList[i] = ch;
                guesslist[listcount] = ch;
                listcount++;
                sound_correct(&ddfs);
                uart.disp(" correct, lives = ");
                uart.disp(lives);
                uart.disp("\n\r");
                counter--;
                guessflag = true;
                ans_display(&osd, i + 1, word_code);
            }
        }

        // wrong
        if (guessflag == false)
        {
            lives--;
            sound_incorrect(&ddfs);
            uart.disp(" wrong, lives = ");
            uart.disp(lives);
            uart.disp("\n\r");
            hangman_count = (hangman_count % 8 == 0) ? 1 : hangman_count + 1;
            hangman.wr_ctrl(hangman_count - 1);
            wrong_writer(&osd, ch, lives);
        }
        guessflag = false;
        if (counter == 0 || lives == 0)
        {
            uart.disp(" lives = ");
            uart.disp(lives);
            uart.disp("end game");
            break;
        }

    } // while
    if (counter == 0)
    {
        gray.bypass(0);
        passed(&ddfs, &osd); // Sound + You Win
    }
    if (lives == 0)
    {
        gray.bypass(0);
        hangman.wr_ctrl(7);
        failed(&ddfs, &osd); // Sound + You Lose
    }
} // main
