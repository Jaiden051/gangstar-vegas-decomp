// Decompiled from classes.dex (SourceFile: w.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

public final class w<TResult> {
    // Fields
    final bolts.Task a;

    // Methods
    private w(bolts.Task p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ w(bolts.Task p0, int p1)
    {
      this(p0);
    }

    private boolean c()
    {
      boolean v1;
      Object v2; // RETVAL
      Object v3;
      v1 = true;
      v2 = Task.access$300(this.a);
      v3 = v2;
      synchronized ( v3 )
      {
        if ( Task.access$400(this.a) )
        {
          v1 = false;
        }
        else
        {
          Task.access$402(this.a, true);
          Task.access$502(this.a, true);
          Task.access$300(this.a).notifyAll();
          Task.access$600(this.a);
        }
        com.gameloft.android.DecompRT.monitorExit(v3);
        return v1;
      }
    }

    public final bolts.Task<TResult> a()
    {
      return this.a;
    }

    public final boolean a(Exception p0)
    {
      boolean v2;
      Object v3; // RETVAL
      Object v4;
      v2 = true;
      v3 = Task.access$300(this.a);
      v4 = v3;
      synchronized ( v4 )
      {
        if ( Task.access$400(this.a) )
        {
          v2 = false;
        }
        else
        {
          Task.access$402(this.a, true);
          Task.access$802(this.a, p0);
          Task.access$300(this.a).notifyAll();
          Task.access$600(this.a);
        }
        com.gameloft.android.DecompRT.monitorExit(v4);
        return v2;
      }
    }

    public final boolean a(TResult p0)
    {
      boolean v2;
      Object v3; // RETVAL
      Object v4;
      v2 = true;
      v3 = Task.access$300(this.a);
      v4 = v3;
      synchronized ( v4 )
      {
        if ( Task.access$400(this.a) )
        {
          v2 = false;
        }
        else
        {
          Task.access$402(this.a, true);
          Task.access$702(this.a, p0);
          Task.access$300(this.a).notifyAll();
          Task.access$600(this.a);
        }
        com.gameloft.android.DecompRT.monitorExit(v4);
        return v2;
      }
    }

    public final void b()
    {
      if ( !this.c() )
        throw new IllegalStateException("Cannot cancel a completed task.");
    }

    public final void b(Exception p0)
    {
      if ( !this.a(p0) )
        throw new IllegalStateException("Cannot set the error on a completed task.");
    }

    public final void b(TResult p0)
    {
      if ( !this.a(p0) )
        throw new IllegalStateException("Cannot set the result of a completed task.");
    }

}
