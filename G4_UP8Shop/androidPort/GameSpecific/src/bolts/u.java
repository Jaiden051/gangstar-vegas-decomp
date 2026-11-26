// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class u<TResult, TContinuationResult> implements bolts.l {
    // Fields
    final bolts.l a;
    final bolts.Task b;

    // Methods
    u(bolts.Task p0, bolts.l p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private bolts.Task<TContinuationResult> a(bolts.Task<TResult> p0)
    {
      if ( p0.b() )
        return Task.forError(p0.d());
      if ( p0.a() )
        return Task.cancelled();
      return p0.b(this.a);
    }

    /* synthetic */ public final Object then(bolts.Task p0)
    {
      if ( p0.b() )
        return Task.forError(p0.d());
      if ( p0.a() )
        return Task.cancelled();
      return p0.b(this.a);
    }

}
