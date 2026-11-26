// Decompiled from classes.dex (SourceFile: ao.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.Html;
final class ao {
    // Fields
    private java.lang.String a;
    private java.util.Hashtable b;

    // Methods
    public ao()
    {
      super();
      this.a = "";
      this.b = new java.util.Hashtable();
    }

    public final String a()
    {
      return this.a;
    }

    public final String a(String p0)
    {
      if ( this.b.isEmpty() || !this.b.containsKey(p0) )
        return "";
      else
        return (String)this.b.get(p0);
    }

    public final void a(String p0, String p1)
    {
      if ( p0 != null && p1 != null )
      {
        if ( p1.equals(InAppBilling.a(0, 87)) || p1.equals(InAppBilling.a(0, 60)) || p1.equals(InAppBilling.a(0, 59)) )
          p1 = Html.fromHtml(p1).toString();
        this.b.put(p0, p1);
      }
    }

    public final void b(String p0)
    {
      this.a = p0;
    }

    public final String toString()
    {
      return null;
    }

}
