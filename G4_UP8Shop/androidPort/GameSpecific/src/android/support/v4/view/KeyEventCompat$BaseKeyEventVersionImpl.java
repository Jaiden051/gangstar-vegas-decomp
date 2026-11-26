// Decompiled from classes.dex (SourceFile: KeyEventCompat$BaseKeyEventVersionImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class KeyEventCompat$BaseKeyEventVersionImpl implements android.support.v4.view.KeyEventCompat$KeyEventVersionImpl {
    // Fields
    private static int META_ALL_MASK;
    private static int META_MODIFIER_MASK;

    // Methods
    KeyEventCompat$BaseKeyEventVersionImpl()
    {
      super();
    }

    private static int metaStateFilterDirectionalModifiers(
            int p0,
            int p1,
            int p2,
            int p3,
            int p4)
    {
      if ( (p1 & p2) != 0 )
      {
        if ( (p1 & (p3 | p4)) != 0 )
          throw new IllegalArgumentException("bad arguments");
        return p0 & ~(p3 | p4);
      }
      else if ( (p1 & (p3 | p4)) != 0 )
      {
        return p0 & ~p2;
      }
      return p0;
    }

    public boolean dispatch(
            android.view.KeyEvent p0,
            android.view.KeyEvent.Callback p1,
            Object p2,
            Object p3)
    {
      return p0.dispatch(p1);
    }

    public Object getKeyDispatcherState(android.view.View p0)
    {
      return null;
    }

    public boolean isTracking(android.view.KeyEvent p0)
    {
      return false;
    }

    public boolean metaStateHasModifiers(int p0, int p1)
    {
      return metaStateFilterDirectionalModifiers(
               metaStateFilterDirectionalModifiers(this.normalizeMetaState(p0) & 0xF7, p1, 1, 64, 128),
               p1,
               2,
               16,
               32) == p1;
    }

    public boolean metaStateHasNoModifiers(int p0)
    {
      return (this.normalizeMetaState(p0) & 0xF7) == 0;
    }

    public int normalizeMetaState(int p0)
    {
      byte v2;
      if ( (p0 & 0xC0) != 0 )
        v2 = (byte)(p0 | 1);
      else
        v2 = (byte)p0;
      if ( (v2 & 0x30) != 0 )
        v2 |= 2;
      return v2 & 0xF7;
    }

    public void startTracking(android.view.KeyEvent p0)
    {
      ;
    }

}
