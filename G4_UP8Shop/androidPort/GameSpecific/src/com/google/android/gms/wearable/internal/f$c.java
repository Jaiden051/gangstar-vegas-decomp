// Decompiled from classes.dex (SourceFile: f$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

public class f$c implements com.google.android.gms.wearable.DataApi$GetFdForAssetResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final android.os.ParcelFileDescriptor b;

    // Methods
    public f$c(com.google.android.gms.common.api.Status p0, android.os.ParcelFileDescriptor p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final android.os.ParcelFileDescriptor b()
    {
      return this.b;
    }

    public final java.io.InputStream c()
    {
      return new android.os.ParcelFileDescriptor.AutoCloseInputStream(this.b);
    }

    public final void d()
    {
      try
      {
        this.b.close();
      }
      catch ( java.io.IOException e )
      {
      }
    }

}
