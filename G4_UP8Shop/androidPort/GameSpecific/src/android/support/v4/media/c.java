// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.media;

final class c implements android.view.KeyEvent.Callback {
    // Fields
    final android.support.v4.media.TransportMediator a;

    // Methods
    c(android.support.v4.media.TransportMediator p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      return TransportMediator.isMediaKey(p0);
    }

    public final boolean onKeyLongPress(int p0, android.view.KeyEvent p1)
    {
      return false;
    }

    public final boolean onKeyMultiple(int p0, int p1, android.view.KeyEvent p2)
    {
      return false;
    }

    public final boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      return TransportMediator.isMediaKey(p0);
    }

}
