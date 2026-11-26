// Decompiled from classes.dex (SourceFile: KeyEventCompatEclair.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class KeyEventCompatEclair {
    // Methods
    KeyEventCompatEclair()
    {
      super();
    }

    public static boolean dispatch(
            android.view.KeyEvent p0,
            android.view.KeyEvent.Callback p1,
            Object p2,
            Object p3)
    {
      return p0.dispatch(p1, (android.view.KeyEvent.DispatcherState)p2, p3);
    }

    public static Object getKeyDispatcherState(android.view.View p0)
    {
      return p0.getKeyDispatcherState();
    }

    public static boolean isTracking(android.view.KeyEvent p0)
    {
      return p0.isTracking();
    }

    public static void startTracking(android.view.KeyEvent p0)
    {
      p0.startTracking();
    }

}
