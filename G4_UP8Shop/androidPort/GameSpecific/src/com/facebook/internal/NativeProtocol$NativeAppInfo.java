// Decompiled from classes.dex (SourceFile: NativeProtocol$NativeAppInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.os.Build;
abstract class NativeProtocol$NativeAppInfo {
    // Fields
    private static java.lang.String FBI_HASH;
    private static java.lang.String FBL_HASH;
    private static java.lang.String FBR_HASH;
    private static final java.util.HashSet validAppSignatureHashes;

    // Methods
    static
    {
      validAppSignatureHashes = buildAppSignatureHashes();
    }

    private NativeProtocol$NativeAppInfo()
    {
      super();
    }

    /* synthetic */ NativeProtocol$NativeAppInfo(com.facebook.internal.NativeProtocol$1 p0)
    {
      this();
    }

    private static java.util.HashSet<String> buildAppSignatureHashes()
    {
      java.util.HashSet v0;
      v0 = new java.util.HashSet();
      v0.add("8a3c4b262d721acd49a4bf97d5213199c86fa2b9");
      v0.add("a4b7452e2ed8f5f191058ca7bbfd26b0d3214bfc");
      v0.add("5e8f16062ea3cd2c4a0d547876baa6f38cabf625");
      return v0;
    }

    protected abstract java.lang.String getPackage();

    public boolean validateSignature(android.content.Context p0, String p1)
    {
      boolean v3;
      int flags;
      android.content.pm.Signature[] v6;
      int v7;
      int i;
      v3 = true;
      flags = (int)p0.getApplicationInfo().flags;
      if ( Build.BRAND.startsWith("generic") && (flags & 2) != 0 )
        return v3;
      try
      {
        v6 = (p0.getPackageManager().getPackageInfo(p1, 64)).signatures;
        v7 = v6.length;
        for ( i = 0; i < v7; ++i )
        {
          if ( validAppSignatureHashes.contains(Utility.sha1hash(v6[i].toByteArray())) )
            return v3;
        }
        return false;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        return false;
      }
    }

}
