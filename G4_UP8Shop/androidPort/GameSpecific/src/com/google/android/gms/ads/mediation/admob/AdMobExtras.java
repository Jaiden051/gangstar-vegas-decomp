// Decompiled from classes.dex (SourceFile: AdMobExtras.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.mediation.admob;

public final class AdMobExtras implements com.google.ads.mediation.i {
    // Fields
    private final android.os.Bundle a;

    // Methods
    private AdMobExtras(android.os.Bundle p0)
    {
      super();
      android.os.Bundle v2;
      if ( p0 != null )
        v2 = new android.os.Bundle(p0);
      else
        v2 = null;
      this.a = v2;
    
    }

    public final android.os.Bundle a()
    {
      return this.a;
    }

}
