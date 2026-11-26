// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.a.a;

public interface b extends android.view.MenuItem {
    // Fields
    public static final int a = 0;
    public static final int b = 0;
    public static final int c = 0;
    public static final int d = 0;
    public static final int e = 0;

    // Methods
    public abstract android.support.v4.a.a.b a();

    public abstract android.support.v4.view.ActionProvider b();

    public abstract android.support.v4.a.a.b c();

    public abstract boolean collapseActionView();

    public abstract boolean expandActionView();

    public abstract android.view.View getActionView();

    public abstract boolean isActionViewExpanded();

    public abstract android.view.MenuItem setActionView(int p0);

    public abstract android.view.MenuItem setActionView(android.view.View p0);

    public abstract void setShowAsAction(int p0);

    public abstract android.view.MenuItem setShowAsActionFlags(int p0);

}
