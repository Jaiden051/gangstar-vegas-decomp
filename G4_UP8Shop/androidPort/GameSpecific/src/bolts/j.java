// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class j implements java.util.concurrent.Executor {
    // Fields
    private static int a;
    private java.lang.ThreadLocal b;

    // Methods
    private j()
    {
      super();
      this.b = new ThreadLocal();
    }

    /* synthetic */ j(int p0)
    {
      this();
    }

    private int a()
    {
      Integer v1;
      int v2;
      v1 = (Integer)this.b.get();
      if ( v1 == null )
        v1 = Integer.valueOf(0);
      v2 = v1.intValue() + 1;
      this.b.set(Integer.valueOf(v2));
      return v2;
    }

    private int b()
    {
      Integer v1;
      int v2; // RETVAL
      int v3;
      v1 = (Integer)this.b.get();
      if ( v1 == null )
        v1 = Integer.valueOf(0);
      v2 = v1.intValue();
      v3 = v2 - 1;
      if ( v2 == 1 )
        this.b.remove();
      else
        this.b.set(Integer.valueOf(v3));
      return v3;
    }

    public final void execute(Runnable p0)
    {
      Integer v2;
      int v3;
      v2 = (Integer)this.b.get();
      if ( v2 == null )
        v2 = Integer.valueOf(0);
      v3 = v2.intValue() + 1;
      this.b.set(Integer.valueOf(v3));
      try
      {
        if ( v3 <= 15 )
        {
          p0.run();
          return;
        }
        BoltsExecutors.background().execute(p0);
      }
      finally
      {
        this.b();
      }
    }

}
