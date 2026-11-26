// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.internal.safeparcel;

import android.os.Parcel;
public final class c {
    // Methods
    public static <T extends com.google.android.gms.common.internal.safeparcel.SafeParcelable> byte[] a(T p0)
    {
      android.os.Parcel v1;
      byte[] result; // RETVAL
    
      v1 = Parcel.obtain();
      p0.writeToParcel(v1, 0);
      result = v1.marshall();
      v1.recycle();
      return result;
    }

}
