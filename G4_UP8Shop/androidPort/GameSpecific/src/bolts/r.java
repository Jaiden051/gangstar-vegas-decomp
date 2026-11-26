// Decompiled from classes.dex (SourceFile: r.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class r<TResult> implements bolts.l {
    // Fields
    final bolts.w a;
    final bolts.l b;
    final java.util.concurrent.Executor c;
    final bolts.Task d;

    // Methods
    r(bolts.Task p0, bolts.w p1, bolts.l p2, java.util.concurrent.Executor p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    private Void a(bolts.Task<TResult> p0)
    {
      Task.access$100(this.a, this.b, p0, this.c);
      return null;
    }

    /* synthetic */ public final Object then(bolts.Task p0)
    {
      Task.access$100(this.a, this.b, p0, this.c);
      return null;
    }

}
