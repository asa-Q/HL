#include<cairo.h>
#include<gtk/gtk.h>
 
cairo_surface_t *image;
 
staticgboolean
on_expose_event(GtkWidget *widget,
    GdkEventExpose *event,
    gpointer data)
{
  cairo_t *cr;
 
  cr = gdk_cairo_create (widget->window);
 
  cairo_set_source_surface(cr, image,10,10);
  cairo_paint(cr);
 
  cairo_destroy(cr);
 
  returnFALSE;
}
 
 
intmain(intargc, char *argv[])
{
  GtkWidget *window;
 
  image = cairo_image_surface_create_from_png("plaveckycastle.png");
 
  gtk_init(&argc, &argv);
 
  window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
 
  g_signal_connect(window,"expose-event",
      G_CALLBACK (on_expose_event), NULL);
  g_signal_connect(window,"destroy",
      G_CALLBACK (gtk_main_quit), NULL);
 
  gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(window),320,250);
  gtk_widget_set_app_paintable(window, TRUE);
 
  gtk_widget_show_all(window);
 
  gtk_main();
 
  cairo_surface_destroy(image);
 
  return0;
}
