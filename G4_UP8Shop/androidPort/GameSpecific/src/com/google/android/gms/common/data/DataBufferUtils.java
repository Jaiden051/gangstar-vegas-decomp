// Decompiled from classes.dex (SourceFile: DataBufferUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

public final class DataBufferUtils {
    // Methods
    private DataBufferUtils()
    {
      super();
    }

    public static <T, E extends com.google.android.gms.common.data.Freezable<T>> java.util.ArrayList<T> freezeAndClose(
            com.google.android.gms.common.data.DataBuffer<E> p0)
    {
      int v1; // RETVAL
      java.util.ArrayList v2;
      java.util.Iterator i;
      v1 = p0.b();
      v2 = new java.util.ArrayList(v1);
      try
      {
        for ( i = p0.iterator(); i.hasNext(); v2.add(((com.google.android.gms.common.data.Freezable)i.next()).h()) )
          ;
        return v2;
      }
      finally
      {
        p0.c();
      }
    }

    public static boolean hasNextPage(com.google.android.gms.common.data.DataBuffer<?> p0)
    {
      android.os.Bundle v1; // RETVAL
    
      v1 = p0.e();
      return v1 != null && v1.getString("next_page_token") != null;
    }

    public static boolean hasPrevPage(com.google.android.gms.common.data.DataBuffer<?> p0)
    {
      android.os.Bundle v1; // RETVAL
    
      v1 = p0.e();
      return v1 != null && v1.getString("prev_page_token") != null;
    }

}
