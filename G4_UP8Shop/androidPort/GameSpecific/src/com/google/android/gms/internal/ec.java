// Decompiled from classes.dex (SourceFile: ec.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
class ec {
    // Fields
    private final java.util.List a;
    private final java.util.List b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;
    private final java.lang.String g;
    private final boolean h;
    private final int i;

    // Methods
    public ec(java.util.Map<String, String> p0)
    {
      super();
      String v2;
      int v3;
      this.g = (String)p0.get("url");
      this.d = (String)p0.get("base_uri");
      this.e = (String)p0.get("post_parameters");
      this.h = parseBoolean((String)p0.get("drt_include"));
      this.c = (String)p0.get("activation_overlay_url");
      this.b = t((String)p0.get("check_packages"));
      v2 = (String)p0.get("request_id");
      if ( v2 != null )
        v3 = Integer.parseInt(v2);
      else
        v3 = 0;
      this.i = v3;
      this.f = (String)p0.get("type");
      this.a = t((String)p0.get("errors"));
    
    }

    private static boolean parseBoolean(String p0)
    {
      return p0 != null && (p0.equals("1") || p0.equals("true"));
    }

    private static int parseInt(String p0)
    {
      if ( p0 != null )
        return Integer.parseInt(p0);
      else
        return 0;
    }

    private static java.util.List<String> t(String p0)
    {
      if ( p0 != null )
        return Arrays.asList(p0.split(","));
      else
        return null;
    }

    public final java.util.List<String> a()
    {
      return this.a;
    }

    public final String b()
    {
      return this.e;
    }

    public final String c()
    {
      return this.g;
    }

    public final String d()
    {
      return this.f;
    }

    public final boolean e()
    {
      return this.h;
    }

}
