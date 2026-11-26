// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class e implements javax.net.ssl.HostnameVerifier {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLUtils.HTTP a;

    // Methods
    e(com.gameloft.android.GAND.GloftGGSS.GLUtils.HTTP p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean verify(String p0, javax.net.ssl.SSLSession p1)
    {
      return true;
    }

}
