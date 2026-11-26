// Decompiled from classes.dex (SourceFile: DataMapItem.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable;

import com.google.android.gms.internal.lw;
import com.google.android.gms.internal.lx;
public class DataMapItem {
    // Fields
    private final android.net.Uri a;
    private final com.google.android.gms.wearable.DataMap b;

    // Methods
    private DataMapItem(com.google.android.gms.wearable.DataItem p0)
    {
      super();
      this.a = p0.a();
      this.b = a((com.google.android.gms.wearable.DataItem)p0.h());
    }

    private static com.google.android.gms.wearable.DataMap a(com.google.android.gms.wearable.DataItem p0)
    {
      byte[] v1; // RETVAL
      java.util.List v4;
      int v5;
      int i;
      com.google.android.gms.wearable.DataItemAsset v7;
      if ( p0.b() == null && p0.c().size() > 0 )
        throw new IllegalArgumentException("Cannot create DataMapItem from a DataItem  that wasn't made with DataMapItem.");
      v1 = p0.b();
      if ( v1 == null )
        return new com.google.android.gms.wearable.DataMap();
      try
      {
        v4 = new java.util.ArrayList();
        v5 = p0.c().size();
        for ( i = 0; i < v5; ++i )
        {
          v7 = (com.google.android.gms.wearable.DataItemAsset)p0.c().get(Integer.toString(i));
          if ( v7 == null )
            throw new IllegalStateException("Cannot find DataItemAsset referenced in data at " + i + " for " + p0);
          v4.add(Asset.createFromRef(v7.a()));
        }
        return lw.a(new com.google.android.gms.internal.lw$a(lx.n(p0.b()), v4));
      }
      catch ( com.google.android.gms.internal.me e )
      {
        throw new IllegalStateException("Unable to parse. Not a DataItem.");
      }
    }

    public static com.google.android.gms.wearable.DataMapItem fromDataItem(
            com.google.android.gms.wearable.DataItem p0)
    {
      if ( p0 == null )
        throw new IllegalStateException("provided dataItem is null");
      return new com.google.android.gms.wearable.DataMapItem(p0);
    }

    public final android.net.Uri a()
    {
      return this.a;
    }

    public final com.google.android.gms.wearable.DataMap b()
    {
      return this.b;
    }

}
