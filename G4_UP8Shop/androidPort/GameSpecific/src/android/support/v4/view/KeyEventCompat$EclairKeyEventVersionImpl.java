// Decompiled from classes.dex (SourceFile: KeyEventCompat$EclairKeyEventVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class KeyEventCompat$EclairKeyEventVersionImpl extends android.support.v4.view.KeyEventCompat$BaseKeyEventVersionImpl {
    // Methods
    KeyEventCompat$EclairKeyEventVersionImpl()
    {
      super();
    }

    public boolean dispatch(
            android.view.KeyEvent p0,
            android.view.KeyEvent.Callback p1,
            Object p2,
            Object p3)
    {
      return KeyEventCompatEclair.dispatch(p0, p1, p2, p3);
    }

    public Object getKeyDispatcherState(android.view.View p0)
    {
      return KeyEventCompatEclair.getKeyDispatcherState(p0);
    }

    public boolean isTracking(android.view.KeyEvent p0)
    {
      return KeyEventCompatEclair.isTracking(p0);
    }

    public void startTracking(android.view.KeyEvent p0)
    {
      KeyEventCompatEclair.startTracking(p0);
    }

}
