// Decompiled from classes.dex (SourceFile: MenuItemCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MenuItemCompatIcs {
    // Methods
    MenuItemCompatIcs()
    {
      super();
    }

    public static boolean collapseActionView(android.view.MenuItem p0)
    {
      return p0.collapseActionView();
    }

    public static boolean expandActionView(android.view.MenuItem p0)
    {
      return p0.expandActionView();
    }

    public static boolean isActionViewExpanded(android.view.MenuItem p0)
    {
      return p0.isActionViewExpanded();
    }

    public static android.view.MenuItem setOnActionExpandListener(
            android.view.MenuItem p0,
            android.support.v4.view.MenuItemCompatIcs$SupportActionExpandProxy p1)
    {
      return p0.setOnActionExpandListener((android.view.MenuItem.OnActionExpandListener)new android.support.v4.view.MenuItemCompatIcs$OnActionExpandListenerWrapper(p1));
    }

}
