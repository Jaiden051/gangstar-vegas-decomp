// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import java.util.Collections;
public final class d {
    // Fields
    private android.net.Uri a;
    private java.util.List b;
    private android.net.Uri c;

    // Methods
    public d(android.net.Uri p0, java.util.List<bolts.e> p1, android.net.Uri p2)
    {
      super();
      this.a = p0;
      if ( p1 == null )
        p1 = Collections.emptyList();
      this.b = p1;
      this.c = p2;
    }

    public final android.net.Uri a()
    {
      return this.a;
    }

    public final java.util.List<bolts.e> b()
    {
      return Collections.unmodifiableList(this.b);
    }

    public final android.net.Uri c()
    {
      return this.c;
    }

}
