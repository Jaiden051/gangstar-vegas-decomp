// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.net.Uri;
class d implements com.google.android.gms.tagmanager.DataLayer$b {
    // Fields
    private final android.content.Context a;

    // Methods
    public d(android.content.Context p0)
    {
      super();
      this.a = p0;
    }

    public final void a(java.util.Map<String, Object> p0)
    {
      Object v2;
      Object v3; // RETVAL
      Object v4;
      String QueryParameter; // RETVAL
    
      v2 = p0.get("gtm.url");
      if ( v2 == null && (v3 = p0.get("gtm")) != null && v3 instanceof java.util.Map )
        v4 = ((java.util.Map)v3).get("url");
      else
        v4 = v2;
      if ( v4 != null && v4 instanceof String )
      {
        QueryParameter = Uri.parse((String)v4).getQueryParameter("referrer");
        if ( QueryParameter != null )
          ay.f(this.a, QueryParameter);
      }
    }

}
