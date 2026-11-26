// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class p implements bolts.l {
    // Fields
    final java.lang.Object a;
    final java.util.ArrayList b;
    final java.util.concurrent.atomic.AtomicBoolean c;
    final java.util.concurrent.atomic.AtomicInteger d;
    final bolts.w e;

    // Methods
    p(
            Object p0,
            java.util.ArrayList p1,
            java.util.concurrent.atomic.AtomicBoolean p2,
            java.util.concurrent.atomic.AtomicInteger p3,
            bolts.w p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    
    }

    private Void a(bolts.Task<Object> p0)
    {
      Object a;
      if ( p0.b() )
      {
        a = this.a;
        synchronized ( a )
        {
          this.b.add(p0.d());
        }
      }
      if ( p0.a() )
        this.c.set(true);
      if ( this.d.decrementAndGet() == 0 )
      {
        if ( this.b.size() != 0 )
        {
          if ( this.b.size() == 1 )
            this.e.b((Exception)this.b.get(0));
          else
            this.e.b(new bolts.a(this.b));
        }
        else if ( this.c.get() )
        {
          this.e.b();
        }
        else
        {
          this.e.b(null);
        }
      }
      return null;
    }

    /* synthetic */ public final Object then(bolts.Task p0)
    {
      return this.a(p0);
    }

}
