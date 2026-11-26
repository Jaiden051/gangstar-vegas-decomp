// Decompiled from classes.dex (SourceFile: KeyEventCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
public class KeyEventCompat {
    // Fields
    static final android.support.v4.view.KeyEventCompat$KeyEventVersionImpl IMPL;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 11 )
        IMPL = (android.support.v4.view.KeyEventCompat$KeyEventVersionImpl)new android.support.v4.view.KeyEventCompat$BaseKeyEventVersionImpl();
      else
        IMPL = (android.support.v4.view.KeyEventCompat$KeyEventVersionImpl)new android.support.v4.view.KeyEventCompat$HoneycombKeyEventVersionImpl();
    }

    public KeyEventCompat()
    {
      super();
    }

    public static boolean dispatch(
            android.view.KeyEvent p0,
            android.view.KeyEvent.Callback p1,
            Object p2,
            Object p3)
    {
      return IMPL.dispatch(p0, p1, p2, p3);
    }

    public static Object getKeyDispatcherState(android.view.View p0)
    {
      return IMPL.getKeyDispatcherState(p0);
    }

    public static boolean hasModifiers(android.view.KeyEvent p0, int p1)
    {
      return IMPL.metaStateHasModifiers(p0.getMetaState(), p1);
    }

    public static boolean hasNoModifiers(android.view.KeyEvent p0)
    {
      return IMPL.metaStateHasNoModifiers(p0.getMetaState());
    }

    public static boolean isTracking(android.view.KeyEvent p0)
    {
      return IMPL.isTracking(p0);
    }

    public static boolean metaStateHasModifiers(int p0, int p1)
    {
      return IMPL.metaStateHasModifiers(p0, p1);
    }

    public static boolean metaStateHasNoModifiers(int p0)
    {
      return IMPL.metaStateHasNoModifiers(p0);
    }

    public static int normalizeMetaState(int p0)
    {
      return IMPL.normalizeMetaState(p0);
    }

    public static void startTracking(android.view.KeyEvent p0)
    {
      IMPL.startTracking(p0);
    }

}
