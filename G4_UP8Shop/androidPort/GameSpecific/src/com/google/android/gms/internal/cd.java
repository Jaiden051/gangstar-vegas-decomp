// Decompiled from classes.dex (SourceFile: cd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
import android.text.TextUtils;
public final class cd {
    // Methods
    public static boolean a(
            android.content.Context p0,
            com.google.android.gms.internal.cf p1,
            com.google.android.gms.internal.cm p2)
    {
      boolean v3;
      android.content.Intent v5;
      String[] v6; // RETVAL
    
      v3 = false;
      if ( p1 != null )
      {
        v5 = new android.content.Intent();
        if ( TextUtils.isEmpty(p1.c) )
        {
          ev.D("Open GMSG did not contain a URL.");
        }
        else
        {
          if ( TextUtils.isEmpty(p1.d) )
            v5.setData(Uri.parse(p1.c));
          else
            v5.setDataAndType(Uri.parse(p1.c), p1.d);
          v5.setAction("android.intent.action.VIEW");
          if ( !TextUtils.isEmpty(p1.e) )
            v5.setPackage(p1.e);
          if ( !TextUtils.isEmpty(p1.f) )
          {
            v6 = p1.f.split("/", 2);
            if ( v6.length < 2 )
            {
              ev.D("Could not parse component name from open GMSG: " + p1.f);
              return v3;
            }
            v5.setClassName(v6[0], v6[1]);
          }
          try
          {
            ev.C("Launching an intent: " + v5);
            p0.startActivity(v5);
            p2.q();
            return true;
          }
          catch ( android.content.ActivityNotFoundException v7 )
          {
            ev.D(v7.getMessage());
          }
        }
      }
      else
      {
        ev.D("No intent data for launcher overlay.");
      }
      return v3;
    }

}
