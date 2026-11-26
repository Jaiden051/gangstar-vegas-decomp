// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

final class i extends android.support.v4.app.ActivityOptionsCompat {
    // Fields
    private final android.support.v4.app.ActivityOptionsCompatJB a;

    // Methods
    i(android.support.v4.app.ActivityOptionsCompatJB p0)
    {
      super();
      this.a = p0;
    }

    public final android.os.Bundle a()
    {
      return this.a.a();
    }

    public final void a(android.support.v4.app.ActivityOptionsCompat p0)
    {
      if ( p0 instanceof android.support.v4.app.i )
        this.a.a(((android.support.v4.app.i)p0).a);
    }

}
