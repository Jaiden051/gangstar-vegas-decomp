// Decompiled from classes.dex (SourceFile: MenuItemCompat$BaseMenuVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MenuItemCompat$BaseMenuVersionImpl implements android.support.v4.view.MenuItemCompat$MenuVersionImpl {
    // Methods
    MenuItemCompat$BaseMenuVersionImpl()
    {
      super();
    }

    public boolean collapseActionView(android.view.MenuItem p0)
    {
      return false;
    }

    public boolean expandActionView(android.view.MenuItem p0)
    {
      return false;
    }

    public android.view.View getActionView(android.view.MenuItem p0)
    {
      return null;
    }

    public boolean isActionViewExpanded(android.view.MenuItem p0)
    {
      return false;
    }

    public android.view.MenuItem setActionView(android.view.MenuItem p0, int p1)
    {
      return p0;
    }

    public android.view.MenuItem setActionView(
            android.view.MenuItem p0,
            android.view.View p1)
    {
      return p0;
    }

    public android.view.MenuItem setOnActionExpandListener(
            android.view.MenuItem p0,
            android.support.v4.view.MenuItemCompat$OnActionExpandListener p1)
    {
      return p0;
    }

    public void setShowAsAction(android.view.MenuItem p0, int p1)
    {
      ;
    }

}
