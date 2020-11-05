#include <cairo.h>

int main (int argc, char *argv[])
{
        cairo_surface_t *surface;
        cairo_t *cr;

        surface =cairo_image_surface_create (CAIRO_FORMAT_ARGB32, 400, 800);
        cr = cairo_create (surface);

        cairo_set_source_rgb (cr, 1, 0, 0);
        cairo_rectangle(cr,0,0,400,800);
        cairo_fill(cr);
         cairo_select_font_face (cr, "Adobe Heiti Std", CAIRO_FONT_SLANT_NORMAL, CAIRO_FONT_WEIGHT_NORMAL);
        cairo_set_font_size (cr, 30.0);

        cairo_move_to (cr, 100, 400);
        cairo_set_source_rgb (cr, 0, 1, 0);
        cairo_show_text (cr, "I Love Chinese !");

        cairo_surface_write_to_png (surface, "image.png");

        cairo_destroy (cr);
        cairo_surface_destroy (surface);

        return 0;
}
