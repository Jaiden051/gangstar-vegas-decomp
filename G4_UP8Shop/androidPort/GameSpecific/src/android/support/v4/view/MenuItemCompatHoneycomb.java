// Decompiled from classes.dex (SourceFile: MenuItemCompatHoneycomb.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MenuItemCompatHoneycomb {
    // Methods
    MenuItemCompatHoneycomb()
    {
      super();
    }

    public static android.view.View getActionView(android.view.MenuItem p0)
    {
      return p0.getActionView();
    }

    public static android.view.MenuItem setActionView(android.view.MenuItem p0, int p1)
    {
      return p0.setActionView(p1);
    }

    public static android.view.MenuItem setActionView(
            android.view.MenuItem p0,
            android.view.View p1)
    {
      return p0.setActionView(p1);
    }

    public static void setShowAsAction(android.view.MenuItem p0, int p1)
    {
      p0.setShowAsAction(p1);
    }

}
