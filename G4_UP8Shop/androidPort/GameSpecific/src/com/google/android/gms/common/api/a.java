// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

import android.util.Log;
public class a {
    // Methods
    static void a(com.google.android.gms.common.api.Result p0)
    {
      if ( p0 instanceof com.google.android.gms.common.api.Releasable )
      {
        try
        {
          ((com.google.android.gms.common.api.Releasable)p0).d();
        }
        catch ( RuntimeException v1 )
        {
          Log.w("GoogleApi", "Unable to release " + p0, v1);
        }
      }
    }

}
