// Decompiled from classes.dex (SourceFile: q.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class q implements bolts.l {
    // Fields
    final java.util.concurrent.Callable a;
    final bolts.l b;
    final java.util.concurrent.Executor c;
    final bolts.k d;
    final bolts.Task e;

    // Methods
    q(bolts.Task p0, java.util.concurrent.Callable p1, bolts.l p2, java.util.concurrent.Executor p3, bolts.k p4)
    {
      super();
      this.e = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
    
    }

    private bolts.Task<Void> a() throws Exception
    {
      if ( ((Boolean)this.a.call()).booleanValue() )
        return Task.forResult(null).b(this.b, this.c).b((bolts.l)this.d.a(), this.c);
      else
        return Task.forResult(null);
    }

    /* synthetic */ public final Object then(bolts.Task p0) throws Exception
    {
      if ( ((Boolean)this.a.call()).booleanValue() )
        return Task.forResult(null).b(this.b, this.c).b((bolts.l)this.d.a(), this.c);
      else
        return Task.forResult(null);
    }

}
