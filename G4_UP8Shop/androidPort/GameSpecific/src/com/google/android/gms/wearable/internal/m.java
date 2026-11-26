// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import android.util.Log;
public class m implements com.google.android.gms.common.internal.safeparcel.SafeParcelable, com.google.android.gms.wearable.DataItem {
    // Fields
    public static final android.os.Parcelable.Creator CREATOR;
    final int a;
    private final android.net.Uri b;
    private final java.util.Map c;
    private byte[] d;

    // Methods
    static
    {
      CREATOR = (android.os.Parcelable.Creator)new com.google.android.gms.wearable.internal.n();
    }

    m(int p0, android.net.Uri p1, android.os.Bundle p2, byte[] p3)
    {
      super();
      java.util.Map v5;
      java.util.Iterator v6;
      String v7;
      this.a = p0;
      this.b = p1;
      v5 = new java.util.HashMap();
      p2.setClassLoader(com.google.android.gms.wearable.internal.DataItemAssetParcelable.class.getClassLoader());
      v6 = p2.keySet().iterator();
      while ( v6.hasNext() )
      {
        v7 = (String)v6.next();
        v5.put(v7, (com.google.android.gms.wearable.internal.DataItemAssetParcelable)p2.getParcelable(v7));
      }
      this.c = v5;
      this.d = (byte[])p3;
    
    }

    private String a(boolean p0)
    {
      StringBuilder v2;
      StringBuilder v3;
      Object v4;
      java.util.Iterator v7;
      String v8;
      v2 = new StringBuilder("DataItemParcelable[");
      v2.append("@");
      v2.append(Integer.toHexString(this.hashCode()));
      v3 = new StringBuilder(",dataSz=");
      if ( this.d != null )
        v4 = Integer.valueOf(this.d.length);
      else
        v4 = "null";
      v2.append(v3.append(v4).toString());
      v2.append(", numAssets=" + this.c.size());
      v2.append(", uri=" + this.b);
      if ( p0 )
      {
        v2.append("]\n  assets: ");
        v7 = this.c.keySet().iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v2.append("\n    " + v8 + ": " + this.c.get(v8));
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

    private com.google.android.gms.wearable.internal.m b(byte[] p0)
    {
      this.d = (byte[])p0;
      return this;
    }

    private com.google.android.gms.wearable.internal.m e()
    {
      return this;
    }

    public final android.net.Uri a()
    {
      return this.b;
    }

    /* synthetic */ public final com.google.android.gms.wearable.DataItem a(byte[] p0)
    {
      this.d = (byte[])p0;
      return (com.google.android.gms.wearable.DataItem)this;
    }

    public final byte[] b()
    {
      return this.d;
    }

    public final java.util.Map<String, com.google.android.gms.wearable.DataItemAsset> c()
    {
      return this.c;
    }

    public final android.os.Bundle d()
    {
      android.os.Bundle v1;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      v1 = new android.os.Bundle();
      v1.setClassLoader(com.google.android.gms.wearable.internal.DataItemAssetParcelable.class.getClassLoader());
      v2 = this.c.entrySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (java.util.Map.Entry)v2.next();
        v1.putParcelable((String)v3.getKey(), (android.os.Parcelable)new com.google.android.gms.wearable.internal.DataItemAssetParcelable((com.google.android.gms.wearable.DataItemAsset)v3.getValue()));
      }
      return v1;
    }

    public int describeContents()
    {
      return 0;
    }

    /* synthetic */ public final Object h()
    {
      return this;
    }

    public final boolean i_()
    {
      return true;
    }

    public String toString()
    {
      boolean isLoggable;
      StringBuilder v2;
      StringBuilder v3;
      Object v4;
      java.util.Iterator v7;
      String v8;
      isLoggable = Log.isLoggable("DataItem", 3);
      v2 = new StringBuilder("DataItemParcelable[");
      v2.append("@");
      v2.append(Integer.toHexString(this.hashCode()));
      v3 = new StringBuilder(",dataSz=");
      if ( this.d != null )
        v4 = Integer.valueOf(this.d.length);
      else
        v4 = "null";
      v2.append(v3.append(v4).toString());
      v2.append(", numAssets=" + this.c.size());
      v2.append(", uri=" + this.b);
      if ( isLoggable )
      {
        v2.append("]\n  assets: ");
        v7 = this.c.keySet().iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v2.append("\n    " + v8 + ": " + this.c.get(v8));
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
      com.google.android.gms.wearable.internal.n.a(this, p0, p1);
    }

}
