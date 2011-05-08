/**
 ** @node options.h
 ** @section options.h
 **/

#ifndef OPTIONS_H
#define OPTIONS_H

#include <glib.h>

/**
 ** @deftypefun void options_init @
 **   (gint   @var{argc},         @
 **    gchar* @var{argv}[])
 ** Populate options using the command line.
 ** @end deftypefun
 **/
void options_init(gint argc, gchar* argv[]);

/**
 ** @deftypefun void options_deinit @
 **   (void)
 ** Free memory used by @code{options_init()}.
 ** @end deftypefun
 **/
void options_deinit(void);

/**
 ** @deftypefun gboolean options_file_logging @
 **   (void)
 ** Get the value of the @code{-file-logging} flag.
 ** @end deftypefun
 **/
gboolean options_file_logging(void);

/**
 ** @deftypefun gchar* options_port @
 **   (void)
 ** Get the value of the @code{-port} flag.
 ** @end deftypefun
 **/
gchar* options_port(void);

/**
 ** @deftypefun gchar* options_zmq_pub_endpoint @
 **   (void)
 ** Get the value of the @code{-zmq-pub-endpoint} option.
 ** @end deftypefun
 **/
gchar* options_zmq_pub_endpoint(void);

/**
 ** @deftypefun gchar* options_zmq_req_endpoint @
 **   (void)
 ** Get the value of the @code{-zmq-req-endpoint} option.
 ** @end deftypefun
 **/
gchar* options_zmq_req_endpoint(void);

#endif