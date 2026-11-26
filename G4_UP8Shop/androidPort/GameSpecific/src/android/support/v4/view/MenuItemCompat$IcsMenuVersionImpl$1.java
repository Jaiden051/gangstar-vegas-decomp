// Decompiled from classes.dex (SourceFile: MenuItemCompat$IcsMenuVersionImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class MenuItemCompat$IcsMenuVersionImpl$1 implements android.support.v4.view.MenuItemCompatIcs$SupportActionExpandProxy {
    // Fields
    final android.support.v4.view.MenuItemCompat$IcsMenuVersionImpl this$0;
    final android.support.v4.view.MenuItemCompat$OnActionExpandListener val$listener;

    // Methods
    MenuItemCompat$IcsMenuVersionImpl$1(
            android.support.v4.view.MenuItemCompat$IcsMenuVersionImpl p0,
            android.support.v4.view.MenuItemCompat$OnActionExpandListener p1)
    {
      super();
      this.this$0 = p0;
      this.val$listener = p1;
    
    }

    public boolean onMenuItemActionCollapse(android.view.MenuItem p0)
    {
      return this.val$listener.onMenuItemActionCollapse(p0);
    }

    public boolean onMenuItemActionExpand(android.view.MenuItem p0)
    {
      return this.val$listener.onMenuItemActionExpand(p0);
    }

}
