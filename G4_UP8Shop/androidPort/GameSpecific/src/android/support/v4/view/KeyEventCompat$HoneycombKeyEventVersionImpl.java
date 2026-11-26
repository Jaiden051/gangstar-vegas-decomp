// Decompiled from classes.dex (SourceFile: KeyEventCompat$HoneycombKeyEventVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class KeyEventCompat$HoneycombKeyEventVersionImpl extends android.support.v4.view.KeyEventCompat$EclairKeyEventVersionImpl {
    // Methods
    KeyEventCompat$HoneycombKeyEventVersionImpl()
    {
      super();
    }

    public boolean metaStateHasModifiers(int p0, int p1)
    {
      return KeyEventCompatHoneycomb.metaStateHasModifiers(p0, p1);
    }

    public boolean metaStateHasNoModifiers(int p0)
    {
      return KeyEventCompatHoneycomb.metaStateHasNoModifiers(p0);
    }

    public int normalizeMetaState(int p0)
    {
      return KeyEventCompatHoneycomb.normalizeMetaState(p0);
    }

}
