// Decompiled from classes.dex (SourceFile: MenuItemCompatIcs$OnActionExpandListenerWrapper.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MenuItemCompatIcs$OnActionExpandListenerWrapper implements android.view.MenuItem.OnActionExpandListener {
    // Fields
    private android.support.v4.view.MenuItemCompatIcs$SupportActionExpandProxy mWrapped;

    // Methods
    public MenuItemCompatIcs$OnActionExpandListenerWrapper(android.support.v4.view.MenuItemCompatIcs$SupportActionExpandProxy p0)
    {
      super();
      this.mWrapped = p0;
    }

    public boolean onMenuItemActionCollapse(android.view.MenuItem p0)
    {
      return this.mWrapped.onMenuItemActionCollapse(p0);
    }

    public boolean onMenuItemActionExpand(android.view.MenuItem p0)
    {
      return this.mWrapped.onMenuItemActionExpand(p0);
    }

}
