--- zebra/kernel_socket.c.orig	Sat Jun 28 18:41:40 2003
+++ zebra/kernel_socket.c	Sat Jun 28 18:43:29 2003
@@ -37,6 +37,7 @@
 #include "zebra/zserv.h"
 #include "zebra/debug.h"
 
+extern struct zebra_t zebrad;
 extern struct zebra_privs_t zserv_privs;
 
 /* Socket length roundup function. */
@@ -764,7 +765,7 @@
       return 0;
     }
 
-  thread_add_read (master, kernel_read, NULL, sock);
+  thread_add_read (zebrad.master, kernel_read, NULL, sock);
 
   if (IS_ZEBRA_DEBUG_KERNEL)
     rtmsg_debug (&buf.r.rtm);
@@ -820,7 +821,7 @@
     zlog_err ("routing_socket: Can't lower privileges");
 
   /* kernel_read needs rewrite. */
-  thread_add_read (master, kernel_read, NULL, routing_sock);
+  thread_add_read (zebrad.master, kernel_read, NULL, routing_sock);
 }
 
 /* Exported interface function.  This function simply calls
