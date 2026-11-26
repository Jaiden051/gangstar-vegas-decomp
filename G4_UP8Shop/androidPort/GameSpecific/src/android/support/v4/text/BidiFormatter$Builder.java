// Decompiled from classes.dex (SourceFile: BidiFormatter$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.text;

import java.util.Locale;
public final class BidiFormatter$Builder {
    // Fields
    private boolean a;
    private int b;
    private android.support.v4.text.e c;

    // Methods
    public BidiFormatter$Builder()
    {
      super();
      this.a(BidiFormatter.access$000(Locale.getDefault()));
    }

    public BidiFormatter$Builder(java.util.Locale p0)
    {
      super();
      this.a(BidiFormatter.access$000(p0));
    }

    public BidiFormatter$Builder(boolean p0)
    {
      super();
      this.a(p0);
    }

    private android.support.v4.text.BidiFormatter$Builder a(android.support.v4.text.e p0)
    {
      this.c = p0;
      return this;
    }

    private void a(boolean p0)
    {
      this.a = p0;
      this.c = BidiFormatter.access$100();
      this.b = 2;
    }

    private android.support.v4.text.BidiFormatter$Builder b(boolean p0)
    {
      int v2;
      if ( p0 )
        v2 = this.b | 2;
      else
        v2 = this.b & 0xFFFFFFFD;
      this.b = v2;
      return this;
    }

    private static android.support.v4.text.BidiFormatter getDefaultInstanceFromContext(boolean p0)
    {
      if ( p0 )
        return BidiFormatter.access$200();
      else
        return BidiFormatter.access$300();
    }

    public final android.support.v4.text.BidiFormatter a()
    {
      if ( this.b == 2 && this.c == BidiFormatter.access$100() )
        return getDefaultInstanceFromContext(this.a);
      else
        return new android.support.v4.text.BidiFormatter(this.a, this.b, this.c, 0);
    }

}
