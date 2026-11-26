// Decompiled from classes.dex (SourceFile: MenuItemCompat$IcsMenuVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MenuItemCompat$IcsMenuVersionImpl extends android.support.v4.view.MenuItemCompat$HoneycombMenuVersionImpl {
    // Methods
    MenuItemCompat$IcsMenuVersionImpl()
    {
      super();
    }

    public boolean collapseActionView(android.view.MenuItem p0)
    {
      return MenuItemCompatIcs.collapseActionView(p0);
    }

    public boolean expandActionView(android.view.MenuItem p0)
    {
      return MenuItemCompatIcs.expandActionView(p0);
    }

    public boolean isActionViewExpanded(android.view.MenuItem p0)
    {
      return MenuItemCompatIcs.isActionViewExpanded(p0);
    }

    public android.view.MenuItem setOnActionExpandListener(
            android.view.MenuItem p0,
            android.support.v4.view.MenuItemCompat$OnActionExpandListener p1)
    {
      if ( p1 != null )
        return MenuItemCompatIcs.setOnActionExpandListener(
                 p0,
                 (android.support.v4.view.MenuItemCompatIcs$SupportActionExpandProxy)new android.support.v4.view.MenuItemCompat$IcsMenuVersionImpl$1(this, p1));
      else
        return MenuItemCompatIcs.setOnActionExpandListener(p0, null);
    }

}
