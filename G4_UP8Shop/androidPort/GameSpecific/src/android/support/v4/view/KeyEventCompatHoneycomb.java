// Decompiled from classes.dex (SourceFile: KeyEventCompatHoneycomb.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.view.KeyEvent;
class KeyEventCompatHoneycomb {
    // Methods
    KeyEventCompatHoneycomb()
    {
      super();
    }

    public static boolean metaStateHasModifiers(int p0, int p1)
    {
      return KeyEvent.metaStateHasModifiers(p0, p1);
    }

    public static boolean metaStateHasNoModifiers(int p0)
    {
      return KeyEvent.metaStateHasNoModifiers(p0);
    }

    public static int normalizeMetaState(int p0)
    {
      return KeyEvent.normalizeMetaState(p0);
    }

}
