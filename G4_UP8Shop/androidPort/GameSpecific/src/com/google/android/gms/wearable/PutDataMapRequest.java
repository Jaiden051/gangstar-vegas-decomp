// Decompiled from classes.dex (SourceFile: PutDataMapRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import android.util.Log;
import com.google.android.gms.internal.lw;
import com.google.android.gms.internal.mf;
public class PutDataMapRequest {
    // Fields
    private final com.google.android.gms.wearable.PutDataRequest a;
    private final com.google.android.gms.wearable.DataMap b;

    // Methods
    private PutDataMapRequest(
            com.google.android.gms.wearable.PutDataRequest p0,
            com.google.android.gms.wearable.DataMap p1)
    {
      super();
      this.a = p0;
      this.b = new com.google.android.gms.wearable.DataMap();
      if ( p1 != null )
        this.b.a(p1);
    }

    private android.net.Uri a()
    {
      return this.a.a();
    }

    private com.google.android.gms.wearable.DataMap b()
    {
      return this.b;
    }

    private com.google.android.gms.wearable.PutDataRequest c()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      com.google.android.gms.internal.lw$a v1;
      int v2;
      int i;
      String v4;
      com.google.android.gms.wearable.Asset v5;
      v1 = lw.a(this.b);
      this.a.a(mf.d(v1.a));
      v2 = v1.b.size();
      for ( i = 0; i < v2; ++i )
      {
        v4 = Integer.toString(i);
        v5 = (com.google.android.gms.wearable.Asset)v1.b.get(i);
        if ( v4 == null )
          throw new IllegalStateException("asset key cannot be null: " + v5);
        if ( v5 == null )
          throw new IllegalStateException("asset cannot be null: key=" + v4);
        if ( Log.isLoggable("DataMap", 3) )
          Log.d("DataMap", "asPutDataRequest: adding asset: " + v4 + " " + v5);
        this.a.a(v4, v5);
      }
      return this.a;
    }

    public static com.google.android.gms.wearable.PutDataMapRequest create(String p0)
    {
      return new com.google.android.gms.wearable.PutDataMapRequest(PutDataRequest.create(p0), null);
    }

    public static com.google.android.gms.wearable.PutDataMapRequest createFromDataMapItem(
            com.google.android.gms.wearable.DataMapItem p0)
    {
      return new com.google.android.gms.wearable.PutDataMapRequest(PutDataRequest.j(p0.a()), p0.b());
    }

    public static com.google.android.gms.wearable.PutDataMapRequest createWithAutoAppendedId(String p0)
    {
      return new com.google.android.gms.wearable.PutDataMapRequest(PutDataRequest.createWithAutoAppendedId(p0), null);
    }

}
