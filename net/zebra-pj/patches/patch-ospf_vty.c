--- ospfd/ospf_vty.c.orig	Sat Jun 28 18:34:50 2003
+++ ospfd/ospf_vty.c	Sat Jun 28 18:36:03 2003
@@ -3220,7 +3220,11 @@
            VTY_NEWLINE);
   vty_out (vty, "  LS Flags: 0x%-2x %s%s",
            lsa->flags, 
+#ifdef HAVE_NSSA
            ((lsa->flags & OSPF_LSA_LOCAL_XLT) ? "(Translated from Type-7)" : ""),
+#else
+           "",
+#endif
            VTY_NEWLINE);
 
   if (lsa->data->type == OSPF_ROUTER_LSA)
