#pragma once

#include <gtk/gtk.h>

#define EXAMPLE_TYPE_APP (example_app_get_type ())

G_DECLARE_FINAL_TYPE (ExampleApp, example_app, EXAMPLE, APP, GtkApplication)

ExampleApp *
example_app_new (void);

