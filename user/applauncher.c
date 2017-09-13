#include <inc/lib.h>

void umain(int argc, char **argv)
{
    struct interface interface;
    interface_init(graph.scrnx, graph.scrny, graph.framebuffer, &interface);
    add_title("JOS App Launcher", 0x12, 0x79, &interface);
    add_content(0x88,&interface);
    init_palette("/bin/palette.plt",frame);
    draw_interface(&interface);
    draw_bitmap("/bin/rocket.bmp",120,120,&interface);
    sys_updatescreen();
}
