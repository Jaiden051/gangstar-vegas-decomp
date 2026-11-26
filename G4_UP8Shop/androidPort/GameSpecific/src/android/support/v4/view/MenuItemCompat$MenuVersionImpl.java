// Decompiled from classes.dex (SourceFile: MenuItemCompat$MenuVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

interface MenuItemCompat$MenuVersionImpl {
    // Methods
    public abstract boolean collapseActionView(android.view.MenuItem p0);

    public abstract boolean expandActionView(android.view.MenuItem p0);

    public abstract android.view.View getActionView(android.view.MenuItem p0);

    public abstract boolean isActionViewExpanded(android.view.MenuItem p0);

    public abstract android.view.MenuItem setActionView(android.view.MenuItem p0, int p1);

    public abstract android.view.MenuItem setActionView(android.view.MenuItem p0, android.view.View p1);

    public abstract android.view.MenuItem setOnActionExpandListener(android.view.MenuItem p0, android.support.v4.view.MenuItemCompat$OnActionExpandListener p1);

    public abstract void setShowAsAction(android.view.MenuItem p0, int p1);

}
