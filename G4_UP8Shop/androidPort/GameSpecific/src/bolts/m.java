// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class m implements java.lang.Runnable {
    // Fields
    final bolts.l a;
    final bolts.Task b;
    final bolts.w c;

    // Methods
    m(bolts.l p0, bolts.Task p1, bolts.w p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void run()
    {
      bolts.Task v1;
      try
      {
        v1 = (bolts.Task)this.a.then(this.b);
        if ( v1 != null )
          v1.a((bolts.l)new bolts.n(this));
        else
          this.c.b(null);
      }
      catch ( Exception v2 )
      {
        this.c.b(v2);
      }
    }

}
