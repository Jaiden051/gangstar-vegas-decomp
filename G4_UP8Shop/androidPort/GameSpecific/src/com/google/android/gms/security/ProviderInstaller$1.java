// Decompiled from classes.dex (SourceFile: ProviderInstaller$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.security;

import com.google.android.gms.common.GooglePlayServicesUtil;
final class ProviderInstaller$1 extends android.os.AsyncTask {
    // Fields
    final android.content.Context a;
    final com.google.android.gms.security.ProviderInstaller$ProviderInstallListener b;

    // Methods
    ProviderInstaller$1(android.content.Context p0, com.google.android.gms.security.ProviderInstaller$ProviderInstallListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    private Integer a()
    {
      try
      {
        ProviderInstaller.installIfNeeded(this.a);
        return Integer.valueOf(0);
      }
      catch ( com.google.android.gms.common.GooglePlayServicesRepairableException v3 )
      {
        return Integer.valueOf(v3.a());
      }
      catch ( com.google.android.gms.common.GooglePlayServicesNotAvailableException v4 )
      {
        return Integer.valueOf(v4.a);
      }
    }

    private void a(Integer p0)
    {
      if ( p0.intValue() != 0 )
      {
        GooglePlayServicesUtil.Z(p0.intValue());
        p0.intValue();
        this.b.b();
      }
      else
      {
        this.b.a();
      }
    }

    /* synthetic */ protected final Object doInBackground(Object[] p0)
    {
      return this.a();
    }

    /* synthetic */ protected final void onPostExecute(Object p0)
    {
      Integer v2;
      v2 = (Integer)p0;
      if ( v2.intValue() != 0 )
      {
        GooglePlayServicesUtil.Z(v2.intValue());
        v2.intValue();
        this.b.b();
      }
      else
      {
        this.b.a();
      }
    }

}
