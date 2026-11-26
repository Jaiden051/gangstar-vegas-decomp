// Decompiled from classes.dex (SourceFile: KeyEventCompat$KeyEventVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

interface KeyEventCompat$KeyEventVersionImpl {
    // Methods
    public abstract boolean dispatch(android.view.KeyEvent p0, android.view.KeyEvent.Callback p1, java.lang.Object p2, java.lang.Object p3);

    public abstract java.lang.Object getKeyDispatcherState(android.view.View p0);

    public abstract boolean isTracking(android.view.KeyEvent p0);

    public abstract boolean metaStateHasModifiers(int p0, int p1);

    public abstract boolean metaStateHasNoModifiers(int p0);

    public abstract int normalizeMetaState(int p0);

    public abstract void startTracking(android.view.KeyEvent p0);

}
