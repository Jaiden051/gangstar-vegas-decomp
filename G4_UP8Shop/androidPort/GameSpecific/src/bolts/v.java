// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class v implements java.lang.Runnable {
    // Fields
    final bolts.l a;
    final bolts.Task b;
    final bolts.w c;

    // Methods
    v(bolts.l p0, bolts.Task p1, bolts.w p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void run()
    {
      try
      {
        this.c.b(this.a.then(this.b));
      }
      catch ( Exception v1 )
      {
        this.c.b(v1);
      }
    }

}
