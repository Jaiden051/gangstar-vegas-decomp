// Decompiled from classes.dex (SourceFile: bc$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
import android.text.TextUtils;
final class bc$2 implements com.google.android.gms.internal.bd {
    // Methods
    bc$2()
    {
      super();
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      String v3;
      String[] v4;
      java.util.HashMap v5;
      android.content.pm.PackageManager PackageManager;
      int v7;
      int i;
      String v9;
      String[] v10;
      String v11;
      String v12;
      v3 = (String)p1.get("urls");
      if ( TextUtils.isEmpty(v3) )
      {
        ev.D("URLs missing in canOpenURLs GMSG.");
      }
      else
      {
        v4 = v3.split(",");
        v5 = new java.util.HashMap();
        PackageManager = p0.getContext().getPackageManager();
        v7 = v4.length;
        for ( i = 0; i < v7; ++i )
        {
          v9 = v4[i];
          v10 = v9.split(";", 2);
          v11 = v10[0].trim();
          if ( v10.length <= 1 )
            v12 = "android.intent.action.VIEW";
          else
            v12 = v10[1].trim();
          v5.put(v9, Boolean.valueOf(PackageManager.resolveActivity(new android.content.Intent(v12, Uri.parse(v11)), 0x10000) != null));
        }
        p0.a("openableURLs", v5);
      }
    }

}
