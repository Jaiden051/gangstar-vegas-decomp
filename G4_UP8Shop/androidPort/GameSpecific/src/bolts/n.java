// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class n<TContinuationResult> implements bolts.l {
    // Fields
    final bolts.m a;

    // Methods
    n(bolts.m p0)
    {
      super();
      this.a = p0;
    
    }

    private Void a(bolts.Task<TContinuationResult> p0)
    {
      if ( p0.a() )
      {
        this.a.c.b();
      }
      else if ( p0.b() )
      {
        this.a.c.b(p0.d());
      }
      else
      {
        this.a.c.b(p0.c());
      }
      return null;
    }

    /* synthetic */ public final Object then(bolts.Task p0)
    {
      if ( p0.a() )
      {
        this.a.c.b();
      }
      else if ( p0.b() )
      {
        this.a.c.b(p0.d());
      }
      else
      {
        this.a.c.b(p0.c());
      }
      return null;
    }

}
