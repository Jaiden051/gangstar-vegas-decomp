// Decompiled from classes.dex (SourceFile: PutDataRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import android.text.TextUtils;
import android.util.Log;
import com.google.android.gms.internal.hn;
import java.util.Collections;
public class PutDataRequest implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    public static java.lang.String a;
    private static final java.util.Random c;
    final int b;
    private final android.net.Uri d;
    private final android.os.Bundle e;
    private byte[] f;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.e();
      c = new java.security.SecureRandom();
    }

    private PutDataRequest(int p0, android.net.Uri p1)
    {
      this(1, p1, new android.os.Bundle(), null);
    }

    PutDataRequest(int p0, android.net.Uri p1, android.os.Bundle p2, byte[] p3)
    {
      super();
      this.b = p0;
      this.d = p1;
      this.e = p2;
      this.e.setClassLoader(com.google.android.gms.wearable.internal.DataItemAssetParcelable.class.getClassLoader());
      this.f = (byte[])p3;
    }

    private com.google.android.gms.wearable.Asset a(String p0)
    {
      return (com.google.android.gms.wearable.Asset)this.e.getParcelable(p0);
    }

    private String a(boolean p0)
    {
      StringBuilder v2;
      StringBuilder v3;
      Object v4;
      java.util.Iterator v7;
      String v8;
      v2 = new StringBuilder("PutDataRequest[");
      v3 = new StringBuilder("dataSz=");
      if ( this.f != null )
        v4 = Integer.valueOf(this.f.length);
      else
        v4 = "null";
      v2.append(v3.append(v4).toString());
      v2.append(", numAssets=" + this.e.size());
      v2.append(", uri=" + this.d);
      if ( p0 )
      {
        v2.append("]\n  assets: ");
        v7 = this.e.keySet().iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v2.append("\n    " + v8 + ": " + this.e.getParcelable(v8));
        }
        v2.append("\n  ]");
        return v2.toString();
      }
      else
      {
        v2.append("]");
        return v2.toString();
      }
    }

    private boolean b(String p0)
    {
      return this.e.containsKey(p0);
    }

    private com.google.android.gms.wearable.PutDataRequest c(String p0)
    {
      this.e.remove(p0);
      return this;
    }

    public static com.google.android.gms.wearable.PutDataRequest create(String p0)
    {
      return j(cx(p0));
    }

    public static com.google.android.gms.wearable.PutDataRequest createFromDataItem(
            com.google.android.gms.wearable.DataItem p0)
    {
      com.google.android.gms.wearable.PutDataRequest v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      v1 = j(p0.a());
      v2 = p0.c().entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        if ( ((com.google.android.gms.wearable.DataItemAsset)v3.getValue()).a() == null )
          throw new IllegalStateException("Cannot create an asset for a put request without a digest: "
                                        + (String)v3.getKey());
        v1.a((String)v3.getKey(), Asset.createFromRef(((com.google.android.gms.wearable.DataItemAsset)v3.getValue()).a()));
      }
      v1.f = p0.b();
      return v1;
    }

    public static com.google.android.gms.wearable.PutDataRequest createWithAutoAppendedId(String p0)
    {
      StringBuilder v1;
      v1 = new StringBuilder(p0);
      if ( !p0.endsWith("/") )
        v1.append("/");
      v1.append("PN").append(c.nextLong());
      return new com.google.android.gms.wearable.PutDataRequest(1, cx(v1.toString()));
    }

    private static android.net.Uri cx(String p0)
    {
      if ( TextUtils.isEmpty(p0) )
        throw new IllegalArgumentException("An empty path was supplied.");
      if ( !p0.startsWith("/") )
        throw new IllegalArgumentException("A path must start with a single / .");
      if ( p0.startsWith("//") )
        throw new IllegalArgumentException("A path must start with a single / .");
      return new android.net.Uri.Builder().scheme("wear").path(p0).build();
    }

    public static com.google.android.gms.wearable.PutDataRequest j(android.net.Uri p0)
    {
      return new com.google.android.gms.wearable.PutDataRequest(1, p0);
    }

    public final android.net.Uri a()
    {
      return this.d;
    }

    public final com.google.android.gms.wearable.PutDataRequest a(
            String p0,
            com.google.android.gms.wearable.Asset p1)
    {
      hn.f(p0);
      hn.f(p1);
      this.e.putParcelable(p0, (android.os.Parcelable)p1);
      return this;
    }

    public final com.google.android.gms.wearable.PutDataRequest a(byte[] p0)
    {
      this.f = (byte[])p0;
      return this;
    }

    public final byte[] b()
    {
      return this.f;
    }

    public final java.util.Map<String, com.google.android.gms.wearable.Asset> c()
    {
      java.util.HashMap v1;
      java.util.Iterator v2;
      String v3;
      v1 = new java.util.HashMap();
      v2 = this.e.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v1.put(v3, (com.google.android.gms.wearable.Asset)this.e.getParcelable(v3));
      }
      return Collections.unmodifiableMap(v1);
    }

    public final android.os.Bundle d()
    {
      return this.e;
    }

    public int describeContents()
    {
      return 0;
    }

    public String toString()
    {
      boolean isLoggable;
      StringBuilder v2;
      StringBuilder v3;
      Object v4;
      java.util.Iterator v7;
      String v8;
      isLoggable = Log.isLoggable("DataMap", 3);
      v2 = new StringBuilder("PutDataRequest[");
      v3 = new StringBuilder("dataSz=");
      if ( this.f != null )
        v4 = Integer.valueOf(this.f.length);
      else
        v4 = "null";
      v2.append(v3.append(v4).toString());
      v2.append(", numAssets=" + this.e.size());
      v2.append(", uri=" + this.d);
      if ( isLoggable )
      {
        v2.append("]\n  assets: ");
        v7 = this.e.keySet().iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v2.append("\n    " + v8 + ": " + this.e.getParcelable(v8));
        }
        v2.append("\n  ]");
        return v2.toString();
      }
      else
      {
        v2.append("]");
        return v2.toString();
      }
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      com.google.android.gms.wearable.e.a(this, p0, p1);
    }

}
