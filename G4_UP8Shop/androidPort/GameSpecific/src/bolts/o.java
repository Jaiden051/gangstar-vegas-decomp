// Decompiled from classes.dex (SourceFile: o.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class o implements java.lang.Runnable {
    // Fields
    final bolts.w a;
    final java.util.concurrent.Callable b;

    // Methods
    o(bolts.w p0, java.util.concurrent.Callable p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      try
      {
        this.a.b(this.b.call());
      }
      catch ( Exception v1 )
      {
        this.a.b(v1);
      }
    }

}
