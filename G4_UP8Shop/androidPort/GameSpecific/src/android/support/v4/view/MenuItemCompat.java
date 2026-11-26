// Decompiled from classes.dex (SourceFile: MenuItemCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
import android.util.Log;
public class MenuItemCompat {
    // Fields
    static final android.support.v4.view.MenuItemCompat$MenuVersionImpl IMPL;
    public static int SHOW_AS_ACTION_ALWAYS;
    public static int SHOW_AS_ACTION_COLLAPSE_ACTION_VIEW;
    public static int SHOW_AS_ACTION_IF_ROOM;
    public static int SHOW_AS_ACTION_NEVER;
    public static int SHOW_AS_ACTION_WITH_TEXT;
    private static java.lang.String TAG;

    // Methods
    static
    {
      int v0;
      v0 = Build.VERSION.SDK_INT;
      if ( v0 < 14 )
      {
        if ( v0 < 11 )
          IMPL = (android.support.v4.view.MenuItemCompat$MenuVersionImpl)new android.support.v4.view.MenuItemCompat$BaseMenuVersionImpl();
        else
          IMPL = (android.support.v4.view.MenuItemCompat$MenuVersionImpl)new android.support.v4.view.MenuItemCompat$HoneycombMenuVersionImpl();
      }
      else
      {
        IMPL = (android.support.v4.view.MenuItemCompat$MenuVersionImpl)new android.support.v4.view.MenuItemCompat$IcsMenuVersionImpl();
      }
    }

    public MenuItemCompat()
    {
      super();
    }

    public static boolean collapseActionView(android.view.MenuItem p0)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return ((android.support.v4.a.a.b)p0).collapseActionView();
      else
        return IMPL.collapseActionView(p0);
    }

    public static boolean expandActionView(android.view.MenuItem p0)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return ((android.support.v4.a.a.b)p0).expandActionView();
      else
        return IMPL.expandActionView(p0);
    }

    public static android.support.v4.view.ActionProvider getActionProvider(android.view.MenuItem p0)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return ((android.support.v4.a.a.b)p0).b();
      Log.w("MenuItemCompat", "getActionProvider: item does not implement SupportMenuItem; returning null");
      return null;
    }

    public static android.view.View getActionView(android.view.MenuItem p0)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return ((android.support.v4.a.a.b)p0).getActionView();
      else
        return IMPL.getActionView(p0);
    }

    public static boolean isActionViewExpanded(android.view.MenuItem p0)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return ((android.support.v4.a.a.b)p0).isActionViewExpanded();
      else
        return IMPL.isActionViewExpanded(p0);
    }

    public static android.view.MenuItem setActionProvider(
            android.view.MenuItem p0,
            android.support.v4.view.ActionProvider p1)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return (android.view.MenuItem)((android.support.v4.a.a.b)p0).a();
      Log.w("MenuItemCompat", "setActionProvider: item does not implement SupportMenuItem; ignoring");
      return p0;
    }

    public static android.view.MenuItem setActionView(android.view.MenuItem p0, int p1)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return ((android.support.v4.a.a.b)p0).setActionView(p1);
      else
        return IMPL.setActionView(p0, p1);
    }

    public static android.view.MenuItem setActionView(android.view.MenuItem p0, android.view.View p1)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return ((android.support.v4.a.a.b)p0).setActionView(p1);
      else
        return IMPL.setActionView(p0, p1);
    }

    public static android.view.MenuItem setOnActionExpandListener(
            android.view.MenuItem p0,
            android.support.v4.view.MenuItemCompat$OnActionExpandListener p1)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        return (android.view.MenuItem)((android.support.v4.a.a.b)p0).c();
      else
        return IMPL.setOnActionExpandListener(p0, p1);
    }

    public static void setShowAsAction(android.view.MenuItem p0, int p1)
    {
      if ( p0 instanceof android.support.v4.a.a.b )
        ((android.support.v4.a.a.b)p0).setShowAsAction(p1);
      else
        IMPL.setShowAsAction(p0, p1);
    }

}
