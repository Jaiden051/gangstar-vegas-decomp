// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
import com.google.android.gms.drive.query.Query;
public class l {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String[] c;
    private com.google.android.gms.internal.h d;
    private final com.google.android.gms.internal.g e;

    // Methods
    public l(com.google.android.gms.internal.h p0)
    {
      super();
      String[] v2;
      this.a = "googleads.g.doubleclick.net";
      this.b = "/pagead/ads";
      v2 = new String[3];
      v2[0] = ".doubleclick.net";
      v2[1] = ".googleadservices.com";
      v2[2] = ".googlesyndication.com";
      this.c = v2;
      this.e = new com.google.android.gms.internal.g();
      this.d = p0;
    
    }

    private android.net.Uri a(android.net.Uri p0, android.content.Context p1, String p2, boolean p3)
 throws com.google.android.gms.internal.m, java.io.UnsupportedEncodingException, java.security.NoSuchAlgorithmException, java.io.IOException, InterruptedException {
      String v5;
      String v6;
      int v7;
      try
      {
        if ( p0.getQueryParameter("ms") != null )
          throw new com.google.android.gms.internal.m("Query parameter already exists: ms");
        v5 = this.d.a(p1, p2);
        v6 = p0.toString();
        v7 = v6.indexOf("&adurl");
        if ( v7 == -1 )
          v7 = v6.indexOf("?adurl");
        if ( v7 == -1 )
          return p0.buildUpon().appendQueryParameter("ms", v5).build();
        else
          return Uri.parse(v6.substring(0, v7 + 1) + "ms" + "=" + v5 + "&" + v6.substring(v7 + 1));
      }
      catch ( UnsupportedOperationException e )
      {
        throw new com.google.android.gms.internal.m("Provided Uri is not in a valid state");
      }
    }

    private static android.net.Uri a(android.net.Uri p0, String p1, String p2)
    {
      String v3;
      int v4;
      v3 = p0.toString();
      v4 = v3.indexOf("&adurl");
      if ( v4 == -1 )
        v4 = v3.indexOf("?adurl");
      if ( v4 == -1 )
        return p0.buildUpon().appendQueryParameter(p1, p2).build();
      else
        return Uri.parse(v3.substring(0, v4 + 1) + p1 + "=" + p2 + "&" + v3.substring(v4 + 1));
    }

    public final android.net.Uri a(android.net.Uri p0, android.content.Context p1)
 throws com.google.android.gms.internal.m, java.io.UnsupportedEncodingException, java.security.NoSuchAlgorithmException, java.io.IOException, InterruptedException {
      try
      {
        return this.a(p0, p1, p0.getQueryParameter("ai"), true);
      }
      catch ( UnsupportedOperationException e )
      {
        throw new com.google.android.gms.internal.m("Provided Uri is not in a valid state");
      }
    }

    public final com.google.android.gms.internal.h a()
    {
      return this.d;
    }

    public final void a(android.view.MotionEvent p0)
 throws InterruptedException {
      this.d.a(p0);
    }

    public final boolean a(android.net.Uri p0)
    {
      boolean v2;
      String Host;
      String[] c;
      int v5;
      int i;
      v2 = false;
      if ( p0 == null )
        throw new NullPointerException();
      try
      {
        Host = p0.getHost();
        c = this.c;
        v5 = c.length;
        for ( i = 0; i < v5; ++i )
        {
          if ( Host.endsWith(c[i]) )
            return true;
        }
        return v2;
      }
      catch ( NullPointerException e )
      {
      }
      return v2;
    }

}
